#ifndef __GT911_H
#define __GT911_H

#include "main.h"

#define GT911_IIC_SCL(x)		do{ x ? \
																HAL_GPIO_WritePin(T_SCK_GPIO_Port,T_SCK_Pin,GPIO_PIN_SET) : \
																HAL_GPIO_WritePin(T_SCK_GPIO_Port,T_SCK_Pin,GPIO_PIN_RESET); \
															}while(0)
#define GT911_IIC_SDA(x)		do{ x ? \
																HAL_GPIO_WritePin(T_MOSI_GPIO_Port,T_MOSI_Pin,GPIO_PIN_SET) : \
																HAL_GPIO_WritePin(T_MOSI_GPIO_Port,T_MOSI_Pin,GPIO_PIN_RESET); \
															}while(0)
#define GT911_READ_SDA			HAL_GPIO_ReadPin(T_MOSI_GPIO_Port,T_MOSI_Pin)
															
#define GT911_RST(x) 				do{ x ? \
																HAL_GPIO_WritePin(GPIOI,GPIO_PIN_8,GPIO_PIN_SET) : \
																HAL_GPIO_WritePin(GPIOI,GPIO_PIN_8,GPIO_PIN_RESET); \
															}while(0)
#define GT911_INT						HAL_GPIO_ReadPin(GPIOH,GPIO_PIN_7);
															
															
/* IIC��д���� */
#define GT911_CMD_WR       0X28        /* д���� */
#define GT911_CMD_RD       0X29        /* ������ */

/* GT911 ���ּĴ�������  */
#define GT911_CTRL_REG     0X8040      /* GT911���ƼĴ��� */
#define GT911_CFGS_REG     0X8047      /* GT911������ʼ��ַ�Ĵ��� */
#define GT911HECK_REG    	 0X80FF      /* GT911У��ͼĴ��� */
#define GT911_PID_REG      0X8140      /* GT911��ƷID�Ĵ��� */

#define GT911_GSTID_REG    0X814E      /* GT911��ǰ��⵽�Ĵ������ */
#define GT911_TP1_REG      0X8150      /* ��һ�����������ݵ�ַ */
#define GT911_TP2_REG      0X8158      /* �ڶ������������ݵ�ַ */
#define GT911_TP3_REG      0X8160      /* ���������������ݵ�ַ */
#define GT911_TP4_REG      0X8168      /* ���ĸ����������ݵ�ַ */
#define GT911_TP5_REG      0X8170      /* ��������������ݵ�ַ */
#define GT911_TP6_REG      0X8178      /* ���������������ݵ�ַ */
#define GT911_TP7_REG      0X8180      /* ���߸����������ݵ�ַ */
#define GT911_TP8_REG      0X8188      /* �ڰ˸����������ݵ�ַ */
#define GT911_TP9_REG      0X8190      /* �ھŸ����������ݵ�ַ */
#define GT911_TP10_REG     0X8198      /* ��ʮ�����������ݵ�ַ */

uint8_t gt911_init(void);
uint8_t gt911_scan(uint8_t mode);


#endif
