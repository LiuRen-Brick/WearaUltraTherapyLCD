#include "sdram.h"
#include "main.h"


extern SDRAM_HandleTypeDef hsdram1;
/* �ڴ��(32�ֽڶ���) */
static __align(32) uint8_t mem1base[MEM1_MAX_SIZE];                                          /* �ڲ�SRAM�ڴ�� */
static __align(32) uint8_t mem2base[MEM2_MAX_SIZE] __attribute__((at(0X10000000)));          /* �ڲ�CCM�ڴ�� */
static __align(32) uint8_t mem3base[MEM3_MAX_SIZE] __attribute__((at(0XC01F4000)));          /* �ⲿSDRAM�ڴ��,ǰ��2M��LTDC����(1280*800*2) */

/* �ڴ����� */
static MT_TYPE mem1mapbase[MEM1_ALLOC_TABLE_SIZE];                          /* �ڲ�SRAM�ڴ��MAP */
static MT_TYPE mem2mapbase[MEM2_ALLOC_TABLE_SIZE] __attribute__((at(0X10000000 + MEM2_MAX_SIZE)));  /* �ڲ�CCM�ڴ��MAP */
static MT_TYPE mem3mapbase[MEM3_ALLOC_TABLE_SIZE] __attribute__((at(0XC01F4000 + MEM3_MAX_SIZE)));  /* �ⲿSRAM�ڴ��MAP */

/* �ڴ������� */
const uint32_t memtblsize[SRAMBANK] = {MEM1_ALLOC_TABLE_SIZE, MEM2_ALLOC_TABLE_SIZE, MEM3_ALLOC_TABLE_SIZE};  /* �ڴ���С */
const uint32_t memblksize[SRAMBANK] = {MEM1_BLOCK_SIZE, MEM2_BLOCK_SIZE, MEM3_BLOCK_SIZE};                    /* �ڴ�ֿ��С */
const uint32_t memsize[SRAMBANK] ={MEM1_MAX_SIZE, MEM2_MAX_SIZE, MEM3_MAX_SIZE};                              /* �ڴ��ܴ�С */

/* �ڴ��������� */
struct _m_mallco_dev mallco_dev=
{
  my_mem_init,                                /* �ڴ��ʼ�� */
  my_mem_perused,                             /* �ڴ�ʹ���� */
  mem1base,mem2base,mem3base,                 /* �ڴ�� */
  mem1mapbase,mem2mapbase,mem3mapbase,        /* �ڴ����״̬�� */
  0, 0, 0,                                    /* �ڴ����δ���� */
};

/*************************************************************************
*
*
*													SDRAM��ʼ��
*
*
**************************************************************************/

/**
 * @brief       ��SDRAM��������
 * @param       bankx:0,��BANK5�����SDRAM����ָ��
 * @param             1,��BANK6�����SDRAM����ָ��
 * @param       cmd:ָ��(0,����ģʽ/1,ʱ������ʹ��/2,Ԥ������д洢��/3,�Զ�ˢ��/4,����ģʽ�Ĵ���/5,��ˢ��/6,����)
 * @param       refresh:��ˢ�´���
 * @param       ����ֵ:0,����;1,ʧ��.
 * @retval      ģʽ�Ĵ����Ķ���
 */
static uint8_t sdram_send_cmd(uint8_t bankx, uint8_t cmd, uint8_t refresh, uint16_t regval)
{
    uint32_t target_bank = 0;
    FMC_SDRAM_CommandTypeDef command;
    
    if (bankx == 0)
    {
        target_bank = FMC_SDRAM_CMD_TARGET_BANK1;
    }
    else if (bankx == 1)
    {
        target_bank = FMC_SDRAM_CMD_TARGET_BANK2;
    }

    command.CommandMode = cmd;                                              /* ���� */
    command.CommandTarget = target_bank;                                    /* Ŀ��SDRAM�洢���� */
    command.AutoRefreshNumber = refresh;                                    /* ��ˢ�´��� */
    command.ModeRegisterDefinition = regval;                                /* Ҫд��ģʽ�Ĵ�����ֵ */

    if (HAL_SDRAM_SendCommand(&hsdram1, &command, 0X1000) == HAL_OK) /* ��SDRAM�������� */
    {
        return 0;
    }
    else 
    {
        return 1;
    }
}
/**
 * @brief       ����SDRAM��ʼ������
 * @param       ��
 * @retval      ��
 */
void sdram_initialization_sequence(void)
{
		uint32_t temp = 0;

    /* SDRAM��������ʼ������Ժ���Ҫ��������˳���ʼ��SDRAM */
    sdram_send_cmd(0, FMC_SDRAM_CMD_CLK_ENABLE, 1, 0);                /* ʱ������ʹ�� */
    HAL_Delay(1);                                                    /* ������ʱ500us */
    sdram_send_cmd(0, FMC_SDRAM_CMD_PALL, 1, 0);                      /* �����д洢��Ԥ��� */
    sdram_send_cmd(0, FMC_SDRAM_CMD_AUTOREFRESH_MODE, 8, 0);          /* ������ˢ�´��� */

    /* ����ģʽ�Ĵ���,SDRAM��bit0~bit2Ϊָ��ͻ�����ʵĳ��ȣ�
     * bit3Ϊָ��ͻ�����ʵ����ͣ�bit4~bit6ΪCASֵ��bit7��bit8Ϊ����ģʽ
     * bit9Ϊָ����дͻ��ģʽ��bit10��bit11λ����λ */
    temp = (uint32_t)SDRAM_MODEREG_BURST_LENGTH_1  |                  /* ����ͻ������:1(������1/2/4/8) */
              SDRAM_MODEREG_BURST_TYPE_SEQUENTIAL  |                  /* ����ͻ������:����(����������/����) */
              SDRAM_MODEREG_CAS_LATENCY_3          |                  /* ����CASֵ:3(������2/3) */
              SDRAM_MODEREG_OPERATING_MODE_STANDARD|                  /* ���ò���ģʽ:0,��׼ģʽ */
              SDRAM_MODEREG_WRITEBURST_MODE_SINGLE;                   /* ����ͻ��дģʽ:1,������� */
    sdram_send_cmd(0, FMC_SDRAM_CMD_LOAD_MODE, 1, temp);              /* ����SDRAM��ģʽ�Ĵ��� */
}

/**********************************************************************************
*
*
*												            	�ڴ�س�ʼ��
*
*
***********************************************************************************/
/**
 * @brief       �����ڴ�
 * @param       *des : Ŀ�ĵ�ַ
 * @param       *src : Դ��ַ
 * @param       n    : ��Ҫ���Ƶ��ڴ泤��(�ֽ�Ϊ��λ)
 * @retval      ��
 */
void my_mem_copy(void *des, void *src, uint32_t n)  
{  
    uint8_t *xdes = des;
    uint8_t *xsrc = src; 
    while (n--)*xdes++ = *xsrc++;  
}  

/**
 * @brief       �����ڴ�ֵ
 * @param       *s    : �ڴ��׵�ַ
 * @param       c     : Ҫ���õ�ֵ
 * @param       count : ��Ҫ���õ��ڴ��С(�ֽ�Ϊ��λ)
 * @retval      ��
 */
void my_mem_set(void *s, uint8_t c, uint32_t count)  
{  
    uint8_t *xs = s;  
    while (count--)*xs++ = c;  
}  

/**
 * @brief       �ڴ�����ʼ��
 * @param       memx : �����ڴ��
 * @retval      ��
 */
void my_mem_init(uint8_t memx)  
{  
    my_mem_set(mallco_dev.memmap[memx], 0, memtblsize[memx] * 4);  /* �ڴ�״̬���������� */
    mallco_dev.memrdy[memx] = 1;                                   /* �ڴ�����ʼ��OK */
}

/**
 * @brief       ��ȡ�ڴ�ʹ����
 * @param       memx : �����ڴ��
 * @retval      ʹ����(������10��,0~1000,����0.0%~100.0%)
 */
uint16_t my_mem_perused(uint8_t memx)  
{  
    uint32_t used = 0;  
    uint32_t i;

    for (i = 0;i < memtblsize[memx]; i++)  
    {  
        if (mallco_dev.memmap[memx][i])used++; 
    }

    return (used * 1000) / (memtblsize[memx]);  
}

/**
 * @brief       �ڴ����(�ڲ�����)
 * @param       memx : �����ڴ��
 * @param       size : Ҫ������ڴ��С(�ֽ�)
 * @retval      �ڴ�ƫ�Ƶ�ַ
 *   @arg       0 ~ 0xFFFFFFFE : ��Ч���ڴ�ƫ�Ƶ�ַ
 *   @arg       0xFFFFFFFF     : ��Ч���ڴ�ƫ�Ƶ�ַ
 */
uint32_t my_mem_malloc(uint8_t memx, uint32_t size)  
{  
    signed long offset = 0;  
    uint32_t nmemb;     /* ��Ҫ���ڴ���� */
    uint32_t cmemb = 0; /* �������ڴ���� */
    uint32_t i;

    if (!mallco_dev.memrdy[memx])
    {
        mallco_dev.init(memx);          /* δ��ʼ��,��ִ�г�ʼ�� */
    }
    if (size == 0) return 0XFFFFFFFF;   /* ����Ҫ���� */
    nmemb = size / memblksize[memx];    /* ��ȡ��Ҫ����������ڴ���� */

    if (size % memblksize[memx]) nmemb++;

    for (offset = memtblsize[memx] - 1;offset >= 0; offset--)   /* ���������ڴ������ */
    {
        if (!mallco_dev.memmap[memx][offset])
        {
            cmemb++;                /* �������ڴ�������� */
        }
        else 
        {
            cmemb = 0;              /* �����ڴ������ */
        }

        if (cmemb == nmemb)         /* �ҵ�������nmemb�����ڴ�� */
        {
            for (i = 0;i < nmemb; i++)            /* ��ע�ڴ��ǿ�  */
            {  
                mallco_dev.memmap[memx][offset + i] = nmemb;  
            }

            return (offset * memblksize[memx]);   /* ����ƫ�Ƶ�ַ  */
        }
    }

    return 0XFFFFFFFF;             /* δ�ҵ����Ϸ����������ڴ�� */
}

/**
 * @brief       �ͷ��ڴ�(�ڲ�����)
 * @param       memx   : �����ڴ��
 * @param       offset : �ڴ��ַƫ��
 * @retval      �ͷŽ��
 *   @arg       0, �ͷųɹ�;
 *   @arg       1, �ͷ�ʧ��;
 *   @arg       2, ��������(ʧ��);
 */
uint8_t my_mem_free(uint8_t memx, uint32_t offset)
{
    int i;

    if (!mallco_dev.memrdy[memx])   /* δ��ʼ��,��ִ�г�ʼ�� */
    {
        mallco_dev.init(memx);
        return 1;                   /* δ��ʼ�� */
    }

    if (offset < memsize[memx])     /* ƫ�����ڴ����. */
    {
        int index = offset / memblksize[memx];      /* ƫ�������ڴ����� */
        int nmemb = mallco_dev.memmap[memx][index]; /* �ڴ������ */

        for (i = 0; i < nmemb; i++)                 /* �ڴ������ */
        {
            mallco_dev.memmap[memx][index + i] = 0;
        }

        return 0;
    }
    else
    {
        return 2;   /* ƫ�Ƴ�����. */
    }
}

/**
 * @brief       �ͷ��ڴ�(�ⲿ����)
 * @param       memx : �����ڴ��
 * @param       ptr  : �ڴ��׵�ַ
 * @retval      ��
 */
void myfree(uint8_t memx, void *ptr)
{
    uint32_t offset;

    if (ptr == NULL)return;     /* ��ַΪ0. */

    offset = (uint32_t)ptr - (uint32_t)mallco_dev.membase[memx];
    my_mem_free(memx, offset);  /* �ͷ��ڴ� */
}

/**
 * @brief       �����ڴ�(�ⲿ����)
 * @param       memx : �����ڴ��
 * @param       size : Ҫ������ڴ��С(�ֽ�)
 * @retval      ���䵽���ڴ��׵�ַ.
 */
void *mymalloc(uint8_t memx, uint32_t size)
{
    uint32_t offset;
    offset = my_mem_malloc(memx, size);

    if (offset == 0xFFFFFFFF)   /* ������� */
    {
        return NULL;            /* ���ؿ�(0) */
    }
    else    /* ����û����, �����׵�ַ */
    {
        return (void *)((uint32_t)mallco_dev.membase[memx] + offset);
    }
}

/**
 * @brief       ���·����ڴ�(�ⲿ����)
 * @param       memx : �����ڴ��
 * @param       *ptr : ���ڴ��׵�ַ
 * @param       size : Ҫ������ڴ��С(�ֽ�)
 * @retval      �·��䵽���ڴ��׵�ַ.
 */
void *myrealloc(uint8_t memx, void *ptr, uint32_t size)
{
    uint32_t offset;
    offset = my_mem_malloc(memx, size);

    if (offset == 0xFFFFFFFF)   /* ������� */
    {
        return NULL;            /* ���ؿ�(0) */
    }
    else    /* ����û����, �����׵�ַ */
    {
        my_mem_copy((void *)((uint32_t)mallco_dev.membase[memx] + offset), ptr, size); /* �������ڴ����ݵ����ڴ� */
        myfree(memx, ptr);                                                             /* �ͷž��ڴ� */
        return (void *)((uint32_t)mallco_dev.membase[memx] + offset);                  /* �������ڴ��׵�ַ */
    }
}