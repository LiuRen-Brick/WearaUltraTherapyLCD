#include "ltdc.h"
#include "main.h"

//LCD�Ļ�����ɫ�ͱ���ɫ
uint32_t POINT_COLOR = 0xFF000000;		//������ɫ
uint32_t BACK_COLOR = 0xFFFFFFFF;  	//����ɫ
uint16_t ltdc_lcd_framebuf[1280][800] __attribute__((at(LCD_FRAME_BUF_ADDR)));	//����������ֱ���ʱ,LCD�����֡���������С
uint32_t *ltdc_framebuf[2];					//LTDC LCD֡��������ָ��,����ָ���Ӧ��С���ڴ�����
_ltdc_dev lcdltdc;						//����LCD LTDC����Ҫ����
//Ĭ��Ϊ����
_lcd_dev lcddev;
extern LTDC_HandleTypeDef hltdc;

//����LCD��ʾ����
//dir:0,������1,����
static void LTDC_Display_Dir(uint8_t dir)
{
	lcdltdc.dir=dir; 	//��ʾ����
	if(dir==0)			//����
	{
		lcdltdc.width=lcdltdc.pheight;
		lcdltdc.height=lcdltdc.pwidth;	
	}else if(dir==1)	//����
	{
		lcdltdc.width=lcdltdc.pwidth;
		lcdltdc.height=lcdltdc.pheight;
	}
}

//ѡ���
//layerx:���;0,��һ��;1,�ڶ���;
static void LTDC_Select_Layer(uint8_t layerx)
{
	lcdltdc.activelayer=layerx;
}
//LTDC������,DMA2D���
//(sx,sy),(ex,ey):�����ζԽ�����,�����СΪ:(ex-sx+1)*(ey-sy+1)   
//color:Ҫ������ɫ
//��ʱ����ҪƵ���ĵ�����亯��������Ϊ���ٶȣ���亯�����üĴ����汾��
//���������ж�Ӧ�Ŀ⺯���汾�Ĵ��롣
static void LTDC_Fill(uint16_t sx,uint16_t sy,uint16_t ex,uint16_t ey,uint32_t color)
{ 
	uint32_t psx,psy,pex,pey;	//��LCD���Ϊ��׼������ϵ,����������仯���仯
	uint32_t timeout = 0; 
	uint16_t offline;
	uint32_t addr; 
	//����ϵת��
	if(lcdltdc.dir)	//����
	{
			psx = sx;
			psy = sy;
			pex = ex;
			pey = ey;
	}else			//����
	{
			if (ex >= lcdltdc.pheight)
			{
				ex = lcdltdc.pheight - 1;  /* ���Ʒ�Χ */
			}
			if (sx >= lcdltdc.pheight)
			{
				sx = lcdltdc.pheight - 1;  /* ���Ʒ�Χ */
			}
			
			psx = sy;
			psy = lcdltdc.pheight - ex - 1;
			pex = ey;
			pey = lcdltdc.pheight - sx - 1;
	}
	
	offline = lcdltdc.pwidth - (pex - psx + 1);
	addr = ((uint32_t)ltdc_framebuf[lcdltdc.activelayer] + lcdltdc.pixsize * (lcdltdc.pwidth * psy + psx));
	
	__HAL_RCC_DMA2D_CLK_ENABLE();																//ʹ��DM2Dʱ��
	DMA2D->CR &= ~(DMA2D_CR_START);															//��ֹͣDMA2D
	DMA2D->CR = DMA2D_R2M;																			//�Ĵ������洢��ģʽ
	DMA2D->OPFCCR = LTDC_PIXFORMAT;															//������ɫ��ʽ
	DMA2D->OOR = offline;																				//������ƫ�� 
	DMA2D->OMAR = addr;																					//����洢����ַ
	DMA2D->NLR = (pey - psy + 1) | ((pex - psx + 1) << 16);			//�趨�����Ĵ���
	DMA2D->OCOLR = color;																         //�趨�����ɫ�Ĵ��� 
	DMA2D->CR |= DMA2D_CR_START;																	//����DMA2D
	
	while((DMA2D->ISR & (DMA2D_FLAG_TC)) == 0)										//�ȴ��������
	{
		timeout++;
		if(timeout > 0X1FFFFF)break;																//��ʱ�˳�
	} 
	DMA2D->IFCR |= DMA2D_FLAG_TC;																	//���������ɱ�־ 		
}
//LCD����
//color:��ɫֵ
static void LTDC_Clear(uint32_t color)
{
	LTDC_Fill(0,0,lcdltdc.width-1,lcdltdc.height-1,color);
}

void LTDC_Init(void)
{
		lcdltdc.pwidth=800;		    //�����,��λ:����
		lcdltdc.pheight=480;	    //���߶�,��λ:����
		lcdltdc.hbp=88;			    //ˮƽ����
		lcdltdc.hfp=40;		    	//ˮƽǰ��
		lcdltdc.hsw=48;			    //ˮƽͬ�����
		lcdltdc.vbp=32;			    //��ֱ����
		lcdltdc.vfp=13;			    //��ֱǰ��
		lcdltdc.vsw=3;				//��ֱͬ�����

		lcddev.width=lcdltdc.pwidth;
		lcddev.height=lcdltdc.pheight;
	
		lcdltdc.pixsize=2;				//ÿ������ռ2���ֽ�
		ltdc_framebuf[0]=(uint32_t*)&ltdc_lcd_framebuf;
	
		LTDC_Display_Dir(1);			//Ĭ������
		LTDC_Select_Layer(0); 			//ѡ���1��
		HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET);       		        //��������
		LTDC_Clear(0XFFFFFFFF);			//����
}

//��������
//color:Ҫ���������ɫ
void LCD_Clear(uint32_t color)
{
   LTDC_Clear(color);
}

/**
 * @brief       ��ָ�����������ָ����ɫ��,DMA2D���
 * @note        �˺�����֧��uint16_t,RGB565��ʽ����ɫ�������.
 *              (sx,sy),(ex,ey):�����ζԽ�����,�����СΪ:(ex - sx + 1) * (ey - sy + 1)
 *              ע��:sx,ex,���ܴ���lcddev.width - 1; sy,ey,���ܴ���lcddev.height - 1
 * @param       sx,sy       : ��ʼ����
 * @param       ex,ey       : ��������
 * @param       color       : ������ɫ�����׵�ַ
 * @retval      ��
 */
void ltdc_color_fill(uint16_t sx, uint16_t sy, uint16_t ex, uint16_t ey, uint16_t *color)
{
    uint32_t psx, psy, pex, pey;   /* ��LCD���Ϊ��׼������ϵ,����������仯���仯 */
    uint32_t timeout = 0; 
    uint16_t offline;
    uint32_t addr;
  
    /* ����ϵת�� */
    if (lcdltdc.dir)               /* ���� */
    {
        psx = sx;
        psy = sy;
        pex = ex;
        pey = ey;
    }
    else                          /* ���� */
    {
        psx = sy;
        psy = lcdltdc.pheight - ex - 1;
        pex = ey;
        pey = lcdltdc.pheight - sx - 1;
    }
    
    offline = lcdltdc.pwidth - (pex - psx + 1);
    addr = ((uint32_t)ltdc_framebuf[lcdltdc.activelayer] + lcdltdc.pixsize * (lcdltdc.pwidth * psy + psx));

    RCC->AHB1ENR |= 1 << 23;            /* ʹ��DM2Dʱ�� */

    DMA2D->CR = 0 << 16;                /* �洢�����洢��ģʽ */
    DMA2D->FGPFCCR = LTDC_PIXFORMAT;    /* ������ɫ��ʽ */
    DMA2D->FGOR = 0;                    /* ǰ������ƫ��Ϊ0 */
    DMA2D->OOR = offline;               /* ������ƫ�� */
    DMA2D->CR &= ~(1 << 0);             /* ��ֹͣDMA2D */
    DMA2D->FGMAR = (uint32_t)color;     /* Դ��ַ */
    DMA2D->OMAR = addr;                 /* ����洢����ַ */
    DMA2D->NLR = (pey - psy + 1) | ((pex - psx + 1) << 16); /* �趨�����Ĵ��� */
    DMA2D->CR |= 1 << 0;                /* ����DMA2D */

    while ((DMA2D->ISR & (1 << 1)) == 0)/* �ȴ�������� */
    {
        timeout++;

        if (timeout > 0X1FFFFF)break;   /* ��ʱ�˳� */
    }

    DMA2D->IFCR |= 1 << 1;              /* ���������ɱ�־ */
}  


void LDC_Display_Dir(uint8_t dir)
{
		 lcdltdc.dir = dir;    /* ��ʾ���� */

    if (dir == 0)         /* ���� */
    {
        lcdltdc.width = lcdltdc.pheight;
        lcdltdc.height = lcdltdc.pwidth;
    }
    else if (dir == 1)    /* ���� */
    {
        lcdltdc.width = lcdltdc.pwidth;
        lcdltdc.height = lcdltdc.pheight;
    }
		lcddev.width = lcdltdc.width;
    lcddev.height = lcdltdc.height;
}
