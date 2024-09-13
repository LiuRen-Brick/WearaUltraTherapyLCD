#include "touch.h"
#include "gt911.h"
#include "ltdc.h"

_m_tp_dev tp_dev =
{
    touch_init,
    NULL,
    NULL,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
};

uint8_t touch_init(void)
{
		tp_dev.touchtype = 0;                                                                           /* Ĭ������(������ & ����) */
    tp_dev.touchtype |= lcddev.dir & 0X01;        
	
		if (gt911_init() == 0) /* ��ʼ��GTϵ�д������ɹ�,����ǰ3.5����Ϊ���ݴ����� */
		{
				tp_dev.scan = gt911_scan;    /* ɨ�躯��ָ��GT911������ɨ�� */
				tp_dev.touchtype |= 0X80;    /* ������ */
				return 0;
		}
		return 1;
}
