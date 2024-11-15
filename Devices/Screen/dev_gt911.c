#include "dev_gt911.h"
#include "dev_touch.h"
#include "dev_ltdc.h"
#include "string.h"

/* 注意: 除了GT9271支持10点触摸之外, 其他触摸芯片只支持 5点触摸 */
uint8_t g_gt_tnum = 5;      /* 默认支持的触摸屏点数(5点触摸) */
uint8_t PressFlg = 0;
uint16_t Gain = 0;
uint16_t slider_pos;
/**
 * @brief       控制I2C速度的延时
 * @param       无
 * @retval      无
 */
static void ct_iic_delay(void)
{
		uint8_t i = 100;
    while(i--);
}

/**
 * @brief       电容触摸芯片IIC接口初始化
 * @param       无
 * @retval      无
 */
void ct_iic_init(void)
{
    GPIO_InitTypeDef gpio_init_struct;
    
    gpio_init_struct.Pin = CT_IIC_SCL_GPIO_PIN;              /* PB6 */
    gpio_init_struct.Mode = GPIO_MODE_OUTPUT_OD;             /* 开漏输出 */
    gpio_init_struct.Pull = GPIO_PULLUP;                     /* 上拉 */
    gpio_init_struct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;                /* 高速 */
    HAL_GPIO_Init(CT_IIC_SCL_GPIO_PORT, &gpio_init_struct);  /* 初始化 */

    gpio_init_struct.Pin = CT_IIC_SDA_GPIO_PIN;              /* PB3 */
    HAL_GPIO_Init(CT_IIC_SDA_GPIO_PORT, &gpio_init_struct);  /* 初始化 */
  
    CT_IIC_SDA(1);
    CT_IIC_SCL(1);
}

/**
 * @brief       产生IIC起始信号
 * @param       无
 * @retval      无
 */
void ct_iic_start(void)
{
    CT_IIC_SDA(1);
    CT_IIC_SCL(1);
    ct_iic_delay();
    CT_IIC_SDA(0);      /* START信号: 当SCL为高时, SDA从高变成低, 表示起始信号 */
    ct_iic_delay();
    CT_IIC_SCL(0);      /* 钳住I2C总线，准备发送或接收数据 */
    ct_iic_delay();
}

/**
 * @brief       产生IIC停止信号
 * @param       无
 * @retval      无
 */
void ct_iic_stop(void)
{
    CT_IIC_SDA(0);      /* STOP信号: 当SCL为高时, SDA从低变成高, 表示停止信号 */
    ct_iic_delay();
    CT_IIC_SCL(1);
    ct_iic_delay();
    CT_IIC_SDA(1);      /* 发送I2C总线结束信号 */
    ct_iic_delay();
}

/**
 * @brief       等待应答信号到来
 * @param       无
 * @retval      1，接收应答失败
 *              0，接收应答成功
 */
uint8_t ct_iic_wait_ack(void)
{
    uint8_t waittime = 0;
    uint8_t rack = 0;
    
    CT_IIC_SDA(1);      /* 主机释放SDA线(此时外部器件可以拉低SDA线) */
    ct_iic_delay();
    CT_IIC_SCL(1);      /* SCL=1, 此时从机可以返回ACK */
    ct_iic_delay();

    while (CT_READ_SDA) /* 等待应答 */
    {
        waittime++;

        if (waittime > 250)
        {
            ct_iic_stop();
            rack = 1;
            break;
        }

        ct_iic_delay();
    }

    CT_IIC_SCL(0);      /* SCL=0, 结束ACK检查 */
    ct_iic_delay();

    return rack;
}

/**
 * @brief       产生ACK应答
 * @param       无
 * @retval      无
 */
void ct_iic_ack(void)
{
    CT_IIC_SDA(0);      /* SCL 0 -> 1  时SDA = 0,表示应答 */
    ct_iic_delay();
    CT_IIC_SCL(1);
    ct_iic_delay();
    CT_IIC_SCL(0);
    ct_iic_delay();
    CT_IIC_SDA(1);      /* 主机释放SDA线 */
    ct_iic_delay();
}

/**
 * @brief       不产生ACK应答
 * @param       无
 * @retval      无
 */
void ct_iic_nack(void)
{
    CT_IIC_SDA(1);      /* SCL 0 -> 1  时 SDA = 1,表示不应答 */
    ct_iic_delay();
    CT_IIC_SCL(1);
    ct_iic_delay();
    CT_IIC_SCL(0);
    ct_iic_delay();
}

/**
 * @brief       IIC发送一个字节
 * @param       data: 要发送的数据
 * @retval      无
 */
void ct_iic_send_byte(uint8_t data)
{
    uint8_t t;

    for (t = 0; t < 8; t++)
    {
        CT_IIC_SDA((data & 0x80) >> 7); /* 高位先发送 */
        ct_iic_delay();
        CT_IIC_SCL(1);
        ct_iic_delay();
        CT_IIC_SCL(0);
        data <<= 1;                     /* 左移1位,用于下一次发送 */
    }

    CT_IIC_SDA(1);                      /* 发送完成, 主机释放SDA线 */
}

/**
 * @brief       IIC发送一个字节
 * @param       ack:  ack=1时，发送ack; ack=0时，发送nack
 * @retval      接收到的数据
 */
uint8_t ct_iic_read_byte(unsigned char ack)
{
    uint8_t i, receive = 0;

    for (i = 0; i < 8; i++ )            /* 接收1个字节数据 */
    {
        receive <<= 1;                  /* 高位先输出,所以先收到的数据位要左移 */
        CT_IIC_SCL(1);
        ct_iic_delay();

        if (CT_READ_SDA)
        {
            receive++;
        }

        CT_IIC_SCL(0);
        ct_iic_delay();
    }

    if (!ack)
    {
        ct_iic_nack();                   /* 发送nACK */
    }
    else
    {
        ct_iic_ack();                    /* 发送ACK */
    }

    return receive;
}
/**
 * @brief       向gt9xxx写入一次数据
 * @param       reg : 起始寄存器地址
 * @param       buf : 数据缓缓存区
 * @param       len : 写数据长度
 * @retval      0, 成功; 1, 失败;
 */
uint8_t gt9xxx_wr_reg(uint16_t reg, uint8_t *buf, uint8_t len)
{
    uint8_t i;
    uint8_t ret = 0;
    ct_iic_start();
    ct_iic_send_byte(GT9XXX_CMD_WR);    /* 发送写命令 */
    ct_iic_wait_ack();
    ct_iic_send_byte(reg >> 8);         /* 发送高8位地址 */
    ct_iic_wait_ack();
    ct_iic_send_byte(reg & 0XFF);       /* 发送低8位地址 */
    ct_iic_wait_ack();

    for (i = 0; i < len; i++)
    {
        ct_iic_send_byte(buf[i]);       /* 发数据 */
        ret = ct_iic_wait_ack();

        if (ret)break;
    }

    ct_iic_stop();                      /* 产生一个停止条件 */
    return ret;
}

/**
 * @brief       从gt9xxx读出一次数据
 * @param       reg : 起始寄存器地址
 * @param       buf : 数据缓缓存区
 * @param       len : 读数据长度
 * @retval      无
 */
void gt9xxx_rd_reg(uint16_t reg, uint8_t *buf, uint8_t len)
{
    uint8_t i;
    ct_iic_start();
    ct_iic_send_byte(GT9XXX_CMD_WR);                        /* 发送写命令 */
    ct_iic_wait_ack();
    ct_iic_send_byte(reg >> 8);                             /* 发送高8位地址 */
    ct_iic_wait_ack();
    ct_iic_send_byte(reg & 0XFF);                           /* 发送低8位地址 */
    ct_iic_wait_ack();
    ct_iic_start();
    ct_iic_send_byte(GT9XXX_CMD_RD);                        /* 发送读命令 */
    ct_iic_wait_ack();

    for (i = 0; i < len; i++)
    {
        buf[i] = ct_iic_read_byte(i == (len - 1) ? 0 : 1);  /* 发数据 */
    }

    ct_iic_stop();                                          /* 产生一个停止条件 */
}

/**
 * @brief       初始化gt9xxx触摸屏
 * @param       无
 * @retval      0, 初始化成功; 1, 初始化失败;
 */
uint8_t gt9xxx_init(void)
{
    GPIO_InitTypeDef gpio_init_struct;
    uint8_t temp[5];

    //GT9XXX_RST_GPIO_CLK_ENABLE();                           /* RST引脚时钟使能 */
    GT9XXX_INT_GPIO_CLK_ENABLE();                           /* RET INT引脚时钟使能 */

    gpio_init_struct.Pin = GT9XXX_RST_GPIO_PIN;
    gpio_init_struct.Mode = GPIO_MODE_OUTPUT_PP;            /* 推挽输出 */
    gpio_init_struct.Pull = GPIO_PULLUP;                    /* 上拉 */
    gpio_init_struct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;     /* 高速 */
    HAL_GPIO_Init(GT9XXX_RST_GPIO_PORT, &gpio_init_struct); /* 初始化RST引脚 */

    gpio_init_struct.Pin = GT9XXX_INT_GPIO_PIN;
    gpio_init_struct.Mode = GPIO_MODE_INPUT;                /* 输入 */
    gpio_init_struct.Pull = GPIO_PULLUP;                    /* 上拉 */
    gpio_init_struct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;     /* 高速 */
    HAL_GPIO_Init(GT9XXX_INT_GPIO_PORT, &gpio_init_struct); /* 初始化INT引脚 */

    ct_iic_init();                                          /* 初始化电容屏的I2C总线 */
    GT9XXX_RST(0);                                          /* 复位 */
    HAL_Delay(10);
    GT9XXX_RST(1);                                          /* 释放复位 */
    HAL_Delay(10);

    /* INT引脚模式设置, 输入模式, 浮空输入 */
    gpio_init_struct.Pin = GT9XXX_INT_GPIO_PIN;
    gpio_init_struct.Mode = GPIO_MODE_INPUT;                /* 输入 */
    gpio_init_struct.Pull = GPIO_NOPULL;                    /* 不带上下拉，浮空模式 */
    gpio_init_struct.Speed = GPIO_SPEED_FREQ_VERY_HIGH;     /* 高速 */
    HAL_GPIO_Init(GT9XXX_INT_GPIO_PORT, &gpio_init_struct); /* 初始化INT引脚 */

    HAL_Delay(100);
    gt9xxx_rd_reg(GT9XXX_PID_REG, temp, 4);                 /* 读取产品ID */
    temp[4] = 0;
    /* 判断一下是否是特定的触摸屏 */
    if (strcmp((char *)temp, "911") && strcmp((char *)temp, "9147") && strcmp((char *)temp, "1158") && strcmp((char *)temp, "9271"))
    {
        return 1;   /* 若不是触摸屏用到的GT911/9147/1158/9271，则初始化失败，需硬件查看触摸IC型号以及查看时序函数是否正确 */
    }
    
    if (strcmp((char *)temp, "9271") == 0)                  /* ID==9271, 支持10点触摸 */
    {
         g_gt_tnum = 10;                                    /* 支持10点触摸屏 */
    }
    
    temp[0] = 0X02;
    gt9xxx_wr_reg(GT9XXX_CTRL_REG, temp, 1);                /* 软复位GT9XXX */
    
    HAL_Delay(10);
    
    temp[0] = 0X00;
    gt9xxx_wr_reg(GT9XXX_CTRL_REG, temp, 1);                /* 结束复位, 进入读坐标状态 */

    return 0;
}

/* GT9XXX 10个触摸点(最多) 对应的寄存器表 */
const uint16_t GT9XXX_TPX_TBL[10] =
{
    GT9XXX_TP1_REG, GT9XXX_TP2_REG, GT9XXX_TP3_REG, GT9XXX_TP4_REG, GT9XXX_TP5_REG,
    GT9XXX_TP6_REG, GT9XXX_TP7_REG, GT9XXX_TP8_REG, GT9XXX_TP9_REG, GT9XXX_TP10_REG,
};

/**
 * @brief       扫描触摸屏(采用查询方式)
 * @param       mode : 电容屏未用到次参数, 为了兼容电阻屏
 * @retval      当前触屏状态
 *   @arg       0, 触屏无触摸; 
 *   @arg       1, 触屏有触摸;
 */
uint8_t gt9xxx_scan(uint8_t mode)
{
    uint8_t buf[4];
    uint8_t i = 0;
    uint8_t res = 0;
    uint16_t temp;
    uint16_t tempsta;
    static uint8_t t = 0;                   /* 控制查询间隔,从而降低CPU占用率 */
    t++;

    if ((t % 10) == 0 || t < 10)            /* 空闲时,每进入10次CTP_Scan函数才检测1次,从而节省CPU使用率 */
    {
        gt9xxx_rd_reg(GT9XXX_GSTID_REG, &mode, 1);              /* 读取触摸点的状态 */

        if ((mode & 0X80) && ((mode & 0XF) <= g_gt_tnum))
        {
            i = 0;
            gt9xxx_wr_reg(GT9XXX_GSTID_REG, &i, 1);             /* 清标志 */
        }

        if ((mode & 0XF) && ((mode & 0XF) <= g_gt_tnum))
        {
            temp = 0XFFFF << (mode & 0XF);  /* 将点的个数转换为1的位数,匹配tp_dev.sta定义 */
            tempsta = tp_dev.sta;           /* 保存当前的tp_dev.sta值 */
            tp_dev.sta = (~temp) | TP_PRES_DOWN | TP_CATH_PRES;
            tp_dev.x[g_gt_tnum - 1] = tp_dev.x[0];              /* 保存触点0的数据,保存在最后一个上 */
            tp_dev.y[g_gt_tnum - 1] = tp_dev.y[0];

            for (i = 0; i < g_gt_tnum; i++)
            {
                if (tp_dev.sta & (1 << i))  /* 触摸有效? */
                {
                    gt9xxx_rd_reg(GT9XXX_TPX_TBL[i], buf, 4);   /* 读取XY坐标值 */

										tp_dev.x[i] = ((uint16_t)buf[1] << 8) + buf[0];
										tp_dev.y[i] = ((uint16_t)buf[3] << 8) + buf[2];
									
										slider_pos = tp_dev.x[i];

										if((tp_dev.x[i] < 130 && tp_dev.x[i] > 80) && (tp_dev.y[i] > 680) && (tp_dev.y[i] < 738))
										{
												PressFlg = 1;
										}
										if(PressFlg == 1)
										{
												Gain = tp_dev.x[0];
										}
                }
            }

            res = 1;

            if (tp_dev.x[0] > lcddev.width || tp_dev.y[0] > lcddev.height)  /* 非法数据(坐标超出了) */
            {
                if ((mode & 0XF) > 1)       /* 有其他点有数据,则复第二个触点的数据到第一个触点. */
                {
                    tp_dev.x[0] = tp_dev.x[1];
                    tp_dev.y[0] = tp_dev.y[1];
                    t = 0;                  /* 触发一次,则会最少连续监测10次,从而提高命中率 */
                }
                else                        /* 非法数据,则忽略此次数据(还原原来的) */
                {
                    tp_dev.x[0] = tp_dev.x[g_gt_tnum - 1];
                    tp_dev.y[0] = tp_dev.y[g_gt_tnum - 1];
                    mode = 0X80;
                    tp_dev.sta = tempsta;   /* 恢复tp_dev.sta */
                }
            }
            else 
            {
                t = 0;                      /* 触发一次,则会最少连续监测10次,从而提高命中率 */
            }
        }
    }

    if ((mode & 0X8F) == 0X80)              /* 无触摸点按下 */
    {
        if (tp_dev.sta & TP_PRES_DOWN)      /* 之前是被按下的 */
        {
            tp_dev.sta &= ~TP_PRES_DOWN;    /* 标记按键松开 */
        }
        else                                /* 之前就没有被按下 */
        {
            tp_dev.x[0] = 0xffff;
            tp_dev.y[0] = 0xffff;
            tp_dev.sta &= 0XE000;           /* 清除点有效标记 */
        }

				PressFlg = 0;
				Gain = 25;
    }else
		{
		}

    if (t > 240)
    {
        t = 10;                             /* 重新从10开始计数 */
    }

    return res;
}

void my_slider(void)
{
		static int32_t  old_x = 0;
		static uint8_t step = 5;
		uint32_t i,j;
		if(PressFlg == 1)
		{
				for(j = 36; j < 444;j++)
				{
						for(i = 660;i < 760;i++)
						{
								if((j > (old_x-10)) && (j < (old_x + 40)) && (i > 680) && (i < 738))
								{
									ltdc_draw_point(j,i,0);
								}else
								{
									//ltdc_draw_point(j,i,(uint32_t)_suo_1_50x58_map[(i-660)*480]);
								}
						}
				}
				
				if(Gain  > old_x)
				{
						step = (Gain - old_x) / 3;
				}else
				{
						step = (old_x - Gain) / 3;
				}
				if(step < 10)
				{
						step = 10;
				}
				if(old_x <= (Gain - step))
				{
					old_x = old_x+step;
				}else if((old_x > (Gain + step)) && (old_x > 0))
				{
					old_x = old_x-step;
				}
		}else
		{
				for(j = 0; j < 480;j++)
				{
						for(i = 660;i < 760;i++)
						{
								if((j > old_x) && (j < (old_x + 80)) && (i > 665) && (i < 755))
								{
									ltdc_draw_point(j,i,0);
								}else
								{
									ltdc_draw_point(j,i,0x451F);
								}
						}
				}
				if(old_x > 5)
				{
					old_x = old_x-25;
				}else
				{
					old_x = 0;
				}
		}
}
