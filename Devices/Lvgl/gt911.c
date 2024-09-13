#include "gt911.h"
#include "touch.h"
#include "main.h"
#include "ltdc.h"
#include <string.h>

/* GT911 5��������(���) ��Ӧ�ļĴ����� */
const uint16_t GT911_TPX_TBL[5] =
{
    GT911_TP1_REG, GT911_TP2_REG, GT911_TP3_REG, GT911_TP4_REG, GT911_TP5_REG,
};

static void gt911_iic_delay(void)
{
		uint8_t i = 2;
	
		while(i--);
}

static void gt911_iic_start(void)
{
	  GT911_IIC_SDA(1);
		GT911_IIC_SCL(1);
		gt911_iic_delay();
		GT911_IIC_SDA(0);
		gt911_iic_delay();
		GT911_IIC_SCL(0);
		gt911_iic_delay();
}

static void gt911_iic_stop(void)
{
		GT911_IIC_SDA(0);
		gt911_iic_delay();
		GT911_IIC_SCL(1);
		gt911_iic_delay();
		GT911_IIC_SDA(1);
		gt911_iic_delay();
}

static uint8_t gt911_iic_wait_ack(void)
{
		uint8_t waittime = 0;
		uint8_t rack = 0;
    
    GT911_IIC_SDA(1);      /* �����ͷ�SDA��(��ʱ�ⲿ������������SDA��) */
    gt911_iic_delay();
    GT911_IIC_SCL(1);      /* SCL=1, ��ʱ�ӻ����Է���ACK */
    gt911_iic_delay();

    while (GT911_READ_SDA) /* �ȴ�Ӧ�� */
    {
        waittime++;

        if (waittime > 250)
        {
            gt911_iic_stop();
            rack = 1;
            break;
        }

        gt911_iic_delay();
    }

    GT911_IIC_SCL(0);      /* SCL=0, ����ACK��� */
    gt911_iic_delay();

    return rack;
}

/**
 * @brief       ����ACKӦ��
 * @param       ��
 * @retval      ��
 */
static void gt911_iic_ack(void)
{
    GT911_IIC_SDA(0);      /* SCL 0 -> 1  ʱSDA = 0,��ʾӦ�� */
    gt911_iic_delay();
    GT911_IIC_SCL(1);
    gt911_iic_delay();
    GT911_IIC_SCL(0);
    gt911_iic_delay();
    GT911_IIC_SDA(1);      /* �����ͷ�SDA�� */
    gt911_iic_delay();
}

/**
 * @brief       ������ACKӦ��
 * @param       ��
 * @retval      ��
 */
static void gt911_iic_nack(void)
{
    GT911_IIC_SDA(1);      /* SCL 0 -> 1  ʱ SDA = 1,��ʾ��Ӧ�� */
    gt911_iic_delay();
    GT911_IIC_SCL(1);
    gt911_iic_delay();
    GT911_IIC_SCL(0);
    gt911_iic_delay();
}

/**
 * @brief       IIC����һ���ֽ�
 * @param       data: Ҫ���͵�����
 * @retval      ��
 */
static void gt911_iic_send_byte(uint8_t data)
{
    uint8_t t;

    for (t = 0; t < 8; t++)
    {
        GT911_IIC_SDA((data & 0x80) >> 7); /* ��λ�ȷ��� */
        gt911_iic_delay();
        GT911_IIC_SCL(1);
        gt911_iic_delay();
        GT911_IIC_SCL(0);
        data <<= 1;                     /* ����1λ,������һ�η��� */
    }

    GT911_IIC_SDA(1);                      /* �������, �����ͷ�SDA�� */
}

/**
 * @brief       IIC����һ���ֽ�
 * @param       ack:  ack=1ʱ������ack; ack=0ʱ������nack
 * @retval      ���յ�������
 */
static uint8_t gt911_iic_read_byte(unsigned char ack)
{
    uint8_t i, receive = 0;

    for (i = 0; i < 8; i++ )            /* ����1���ֽ����� */
    {
        receive <<= 1;                  /* ��λ�����,�������յ�������λҪ���� */
        GT911_IIC_SCL(1);
        gt911_iic_delay();

        if (GT911_READ_SDA)
        {
            receive++;
        }

        GT911_IIC_SCL(0);
        gt911_iic_delay();
    }

    if (!ack)
    {
        gt911_iic_nack();                   /* ����nACK */
    }
    else
    {
        gt911_iic_ack();                    /* ����ACK */
    }

    return receive;
}

/************************************************************************************************************
*
*
*
*************************************************************************************************************/
uint8_t g_gt_tnum = 5;

/**
 * @brief       ��gt911д��һ������
 * @param       reg : ��ʼ�Ĵ�����ַ
 * @param       buf : ���ݻ�������
 * @param       len : д���ݳ���
 * @retval      0, �ɹ�; 1, ʧ��;
 */
static uint8_t gt911_wr_reg(uint16_t reg, uint8_t *buf, uint8_t len)
{
    uint8_t i;
    uint8_t ret = 0;
    gt911_iic_start();
    gt911_iic_send_byte(GT911_CMD_WR);    /* ����д���� */
    gt911_iic_wait_ack();
    gt911_iic_send_byte(reg >> 8);         /* ���͸�8λ��ַ */
    gt911_iic_wait_ack();
    gt911_iic_send_byte(reg & 0XFF);       /* ���͵�8λ��ַ */
    gt911_iic_wait_ack();

    for (i = 0; i < len; i++)
    {
        gt911_iic_send_byte(buf[i]);       /* ������ */
        ret = gt911_iic_wait_ack();

        if (ret)break;
    }

    gt911_iic_stop();                      /* ����һ��ֹͣ���� */
    return ret;
}

/**
 * @brief       ��gt9xxx����һ������
 * @param       reg : ��ʼ�Ĵ�����ַ
 * @param       buf : ���ݻ�������
 * @param       len : �����ݳ���
 * @retval      ��
 */
static void gt911_rd_reg(uint16_t reg, uint8_t *buf, uint8_t len)
{
    uint8_t i;
    gt911_iic_start();
    gt911_iic_send_byte(GT911_CMD_WR);                        /* ����д���� */
    gt911_iic_wait_ack();
    gt911_iic_send_byte(reg >> 8);                             /* ���͸�8λ��ַ */
    gt911_iic_wait_ack();
    gt911_iic_send_byte(reg & 0XFF);                           /* ���͵�8λ��ַ */
    gt911_iic_wait_ack();
    gt911_iic_start();
    gt911_iic_send_byte(GT911_CMD_RD);                        /* ���Ͷ����� */
    gt911_iic_wait_ack();

    for (i = 0; i < len; i++)
    {
        buf[i] = gt911_iic_read_byte(i == (len - 1) ? 0 : 1);  /* ������ */
    }

    gt911_iic_stop();                                          /* ����һ��ֹͣ���� */
}

/**
 * @brief       ��ʼ��gt9xxx������
 * @param       ��
 * @retval      0, ��ʼ���ɹ�; 1, ��ʼ��ʧ��;
 */
uint8_t gt911_init(void)
{
    uint8_t temp[5];

    GT911_IIC_SDA(1);
    GT911_IIC_SCL(1);                                           /* ��ʼ����������I2C���� */
    GT911_RST(0);                                               /* ��λ */
    HAL_Delay(10);
    GT911_RST(1);                                              /* �ͷŸ�λ */

    HAL_Delay(100);
    gt911_rd_reg(GT911_PID_REG, temp, 4);                 /* ��ȡ��ƷID */
    temp[4] = 0;
    /* �ж�һ���Ƿ����ض��Ĵ����� */
    if (strcmp((char *)temp, "911") && strcmp((char *)temp, "9147") && strcmp((char *)temp, "1158") && strcmp((char *)temp, "9271"))
    {
        return 1;   /* �����Ǵ������õ���GT911/9147/1158/9271�����ʼ��ʧ�ܣ���Ӳ���鿴����IC�ͺ��Լ��鿴ʱ�����Ƿ���ȷ */
    }
    //printf("CTP ID:%s\r\n", temp);                          /* ��ӡID */
    temp[0] = 0X02;
    gt911_wr_reg(GT911_CTRL_REG, temp, 1);                /* ��λGT9XXX */
    
    HAL_Delay(10);
    temp[0] = 0X00;
    gt911_wr_reg(GT911_CTRL_REG, temp, 1);                /* ������λ, ���������״̬ */

    return 0;
}

/**
 * @brief       ɨ�败����(���ò�ѯ��ʽ)
 * @param       mode : ������δ�õ��β���, Ϊ�˼��ݵ�����
 * @retval      ��ǰ����״̬
 *   @arg       0, �����޴���; 
 *   @arg       1, �����д���;
 */
uint8_t gt911_scan(uint8_t mode)
{
    uint8_t buf[4];
    uint8_t i = 0;
    uint8_t res = 0;
    uint16_t temp;
    uint16_t tempsta;
    static uint8_t t = 0;                   /* ���Ʋ�ѯ���,�Ӷ�����CPUռ���� */
    t++;

    if ((t % 10) == 0 || t < 10)            /* ����ʱ,ÿ����10��CTP_Scan�����ż��1��,�Ӷ���ʡCPUʹ���� */
    {
        gt911_rd_reg(GT911_GSTID_REG, &mode, 1);              /* ��ȡ�������״̬ */

        if ((mode & 0X80) && ((mode & 0XF) <= g_gt_tnum))
        {
            i = 0;
            gt911_wr_reg(GT911_GSTID_REG, &i, 1);             /* ���־ */
        }

        if ((mode & 0XF) && ((mode & 0XF) <= g_gt_tnum))
        {
            temp = 0XFFFF << (mode & 0XF);  /* ����ĸ���ת��Ϊ1��λ��,ƥ��tp_dev.sta���� */
            tempsta = tp_dev.sta;           /* ���浱ǰ��tp_dev.staֵ */
            tp_dev.sta = (~temp) | TP_PRES_DOWN | TP_CATH_PRES;
            tp_dev.x[g_gt_tnum - 1] = tp_dev.x[0];              /* ���津��0������,���������һ���� */
            tp_dev.y[g_gt_tnum - 1] = tp_dev.y[0];

            for (i = 0; i < g_gt_tnum; i++)
            {
                if (tp_dev.sta & (1 << i))  /* ������Ч? */
                {
                    gt911_rd_reg(GT911_TPX_TBL[i], buf, 4);   /* ��ȡXY����ֵ */

                    if (lcddev.id == 0X5510 || lcddev.id == 0X9806 || lcddev.id == 0X7796)     /* 4.3��800*480 �� 3.5��480*320 MCU�� */
                    {
                        if (tp_dev.touchtype & 0X01)            /* ���� */
                        {
                            tp_dev.x[i] = lcddev.width - (((uint16_t)buf[3] << 8) + buf[2]);
                            tp_dev.y[i] = ((uint16_t)buf[1] << 8) + buf[0];
                        }
                        else
                        {
                            tp_dev.x[i] = ((uint16_t)buf[1] << 8) + buf[0];
                            tp_dev.y[i] = ((uint16_t)buf[3] << 8) + buf[2];
                        }
                    }
                    else                    /* �����ͺ� */
                    {
                        if (tp_dev.touchtype & 0X01)            /* ���� */
                        {
                            tp_dev.x[i] = ((uint16_t)buf[1] << 8) + buf[0];
                            tp_dev.y[i] = ((uint16_t)buf[3] << 8) + buf[2];
                        }
                        else
                        {
                            tp_dev.x[i] = lcddev.width - (((uint16_t)buf[3] << 8) + buf[2]);
                            tp_dev.y[i] = ((uint16_t)buf[1] << 8) + buf[0];
                        }
                    }

                    //printf("x[%d]:%d,y[%d]:%d\r\n", i, tp_dev.x[i], i, tp_dev.y[i]);
                }
            }

            res = 1;

            if (tp_dev.x[0] > lcddev.width || tp_dev.y[0] > lcddev.height)  /* �Ƿ�����(���곬����) */
            {
                if ((mode & 0XF) > 1)       /* ��������������,�򸴵ڶ�����������ݵ���һ������. */
                {
                    tp_dev.x[0] = tp_dev.x[1];
                    tp_dev.y[0] = tp_dev.y[1];
                    t = 0;                  /* ����һ��,��������������10��,�Ӷ���������� */
                }
                else                        /* �Ƿ�����,����Դ˴�����(��ԭԭ����) */
                {
                    tp_dev.x[0] = tp_dev.x[g_gt_tnum - 1];
                    tp_dev.y[0] = tp_dev.y[g_gt_tnum - 1];
                    mode = 0X80;
                    tp_dev.sta = tempsta;   /* �ָ�tp_dev.sta */
                }
            }
            else 
            {
                t = 0;                      /* ����һ��,��������������10��,�Ӷ���������� */
            }
        }
    }

    if ((mode & 0X8F) == 0X80)              /* �޴����㰴�� */
    {
        if (tp_dev.sta & TP_PRES_DOWN)      /* ֮ǰ�Ǳ����µ� */
        {
            tp_dev.sta &= ~TP_PRES_DOWN;    /* ��ǰ����ɿ� */
        }
        else                                /* ֮ǰ��û�б����� */
        {
            tp_dev.x[0] = 0xffff;
            tp_dev.y[0] = 0xffff;
            tp_dev.sta &= 0XE000;           /* �������Ч��� */
        }
    }

    if (t > 240)
    {
        t = 10;                             /* ���´�10��ʼ���� */
    }

    return res;
}











