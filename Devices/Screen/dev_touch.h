#ifndef __DEV_TOUCH_H
#define __DEV_TOUCH_H

#include "dev_gt911.h"


/* 常用画笔颜色 */
#define WHITE           0xFFFF      /* 白色 */
#define BLACK           0x0000      /* 黑色 */
#define RED             0xF800      /* 红色 */
#define GREEN           0x07E0      /* 绿色 */
#define BLUE            0x001F      /* 蓝色 */ 
#define MAGENTA         0xF81F      /* 品红色/紫红色 = BLUE + RED */
#define YELLOW          0xFFE0      /* 黄色 = GREEN + RED */
#define CYAN            0x07FF      /* 青色 = GREEN + BLUE */  

/* 非常用颜色 */
#define BROWN           0xBC40      /* 棕色 */
#define BRRED           0xFC07      /* 棕红色 */
#define GRAY            0x8430      /* 灰色 */ 
#define DARKBLUE        0x01CF      /* 深蓝色 */
#define LIGHTBLUE       0x7D7C      /* 浅蓝色 */ 
#define GRAYBLUE        0x5458      /* 灰蓝色 */ 
#define LIGHTGREEN      0x841F      /* 浅绿色 */  
#define LGRAY           0xC618      /* 浅灰色(PANNEL),窗体背景色 */ 
#define LGRAYBLUE       0xA651      /* 浅灰蓝色(中间层颜色) */ 
#define LBBLUE          0x2B12      /* 浅棕蓝色(选择条目的反色) */ 

/******************************************************************************************/
/* 电阻触摸屏驱动IC T_PEN/T_CS/T_MISO/T_MOSI/T_SCK 引脚 定义 */

#define T_PEN_GPIO_PORT                 GPIOH
#define T_PEN_GPIO_PIN                  GPIO_PIN_7
#define T_PEN_GPIO_CLK_ENABLE()         do{ __HAL_RCC_GPIOH_CLK_ENABLE(); }while(0)   /* 所在IO口时钟使能 */

#define T_CS_GPIO_PORT                  GPIOI
#define T_CS_GPIO_PIN                   GPIO_PIN_8
#define T_CS_GPIO_CLK_ENABLE()          do{ __HAL_RCC_GPIOI_CLK_ENABLE(); }while(0)   /* 所在IO口时钟使能 */

#define T_MISO_GPIO_PORT                GPIOG
#define T_MISO_GPIO_PIN                 GPIO_PIN_3
#define T_MISO_GPIO_CLK_ENABLE()        do{ __HAL_RCC_GPIOG_CLK_ENABLE(); }while(0)   /* 所在IO口时钟使能 */

#define T_MOSI_GPIO_PORT                GPIOI
#define T_MOSI_GPIO_PIN                 GPIO_PIN_3
#define T_MOSI_GPIO_CLK_ENABLE()        do{ __HAL_RCC_GPIOI_CLK_ENABLE(); }while(0)   /* 所在IO口时钟使能 */

#define T_CLK_GPIO_PORT                 GPIOH
#define T_CLK_GPIO_PIN                  GPIO_PIN_6
#define T_CLK_GPIO_CLK_ENABLE()         do{ __HAL_RCC_GPIOH_CLK_ENABLE(); }while(0)   /* 所在IO口时钟使能 */

/******************************************************************************************/

/* 电阻触摸屏控制引脚 */
#define T_PEN           HAL_GPIO_ReadPin(T_PEN_GPIO_PORT, T_PEN_GPIO_PIN)             /* T_PEN */
#define T_MISO          HAL_GPIO_ReadPin(T_MISO_GPIO_PORT, T_MISO_GPIO_PIN)           /* T_MISO */

#define T_MOSI(x)     do{ x ? \
                          HAL_GPIO_WritePin(T_MOSI_GPIO_PORT, T_MOSI_GPIO_PIN, GPIO_PIN_SET) : \
                          HAL_GPIO_WritePin(T_MOSI_GPIO_PORT, T_MOSI_GPIO_PIN, GPIO_PIN_RESET); \
                      }while(0)                                                       /* T_MOSI */

#define T_CLK(x)      do{ x ? \
                          HAL_GPIO_WritePin(T_CLK_GPIO_PORT, T_CLK_GPIO_PIN, GPIO_PIN_SET) : \
                          HAL_GPIO_WritePin(T_CLK_GPIO_PORT, T_CLK_GPIO_PIN, GPIO_PIN_RESET); \
                      }while(0)                                                       /* T_CLK */

#define T_CS(x)       do{ x ? \
                          HAL_GPIO_WritePin(T_CS_GPIO_PORT, T_CS_GPIO_PIN, GPIO_PIN_SET) : \
                          HAL_GPIO_WritePin(T_CS_GPIO_PORT, T_CS_GPIO_PIN, GPIO_PIN_RESET); \
                      }while(0)                                                       /* T_CS */


#define TP_PRES_DOWN    0x8000  /* 触屏被按下 */
#define TP_CATH_PRES    0x4000  /* 有按键按下了 */
#define CT_MAX_TOUCH    10      /* 电容屏支持的点数,固定为5点 */

/* 触摸屏控制器 */
typedef struct
{
    uint8_t (*init)(void);      /* 初始化触摸屏控制器 */
    uint8_t (*scan)(uint8_t);   /* 扫描触摸屏.0,屏幕扫描;1,物理坐标; */
    void (*adjust)(void);       /* 触摸屏校准 */
    uint16_t x[CT_MAX_TOUCH];   /* 当前坐标 */
    uint16_t y[CT_MAX_TOUCH];   /* 电容屏有最多10组坐标,电阻屏则用x[0],y[0]代表:此次扫描时,触屏的坐标,用
                                 * x[9],y[9]存储第一次按下时的坐标.
                                 */

    uint16_t sta;               /* 笔的状态
                                 * b15:按下1/松开0;
                                 * b14:0,没有按键按下;1,有按键按下.
                                 * b13~b10:保留
                                 * b9~b0:电容触摸屏按下的点数(0,表示未按下,1表示按下)
                                 */

    /* 5点校准触摸屏校准参数(电容屏不需要校准) */
    float xfac;                 /* 5点校准法x方向比例因子 */
    float yfac;                 /* 5点校准法y方向比例因子 */
    short xc;                   /* 中心X坐标物理值(AD值) */
    short yc;                   /* 中心Y坐标物理值(AD值) */

    /* 新增的参数,当触摸屏的左右上下完全颠倒时需要用到.
     * b0:0, 竖屏(适合左右为X坐标,上下为Y坐标的TP)
     *    1, 横屏(适合左右为Y坐标,上下为X坐标的TP)
     * b1~6: 保留.
     * b7:0, 电阻屏
     *    1, 电容屏
     */
    uint8_t touchtype;
} _m_tp_dev;

extern _m_tp_dev tp_dev;                                                    /* 触屏控制器在touch.c里面定义 */

/******************************************************************************************/
uint8_t tp_init(void);                                                      /* 初始化 */
static uint8_t tp_scan(uint8_t mode);                                       /* 扫描 */
void tp_adjust(void);                                                       /* 触摸屏校准 */
void tp_save_adjust_data(void);                                             /* 保存校准参数 */
uint8_t tp_get_adjust_data(void);                                           /* 读取校准参数 */
void tp_draw_big_point(uint16_t x, uint16_t y, uint16_t color);             /* 画一个大点 */

#endif
