#ifndef __SDRAM_H
#define __SDRAM_H

#include "stdint.h"

#define BANK5_SDRAM_ADDR    ((uint32_t)(0XC0000000))  /* SDRAM��ʼ��ַ */
/* ���������ڴ�� */
#define SRAMIN                  0                               /* �ڲ��ڴ�� */
#define SRAMCCM                 1                               /* CCM�ڴ��(�˲���SRAM����CPU���Է���!!!) */
#define SRAMEX                  2                               /* �ⲿ�ڴ��(SDRAM) */

/* �����ڴ���������,������SDRAM��ʱ�򣬱���ʹ��uint32_t���ͣ�������Զ����uint16_t���Խ�ʡ�ڴ�ռ�� */
#define MT_TYPE     uint32_t
#define SRAMBANK                3                               /* ����֧�ֵ�SRAM����. */
/* mem1�ڴ�����趨.mem1��ȫ�����ڲ�SRAM����. */
#define MEM1_BLOCK_SIZE         64                              /* �ڴ���СΪ64�ֽ� */
#define MEM1_MAX_SIZE           20 * 1024                       /* �������ڴ� 160K����������С����ʵ�ʹ������� */
#define MEM1_ALLOC_TABLE_SIZE   MEM1_MAX_SIZE/MEM1_BLOCK_SIZE   /* �ڴ���С */
/* mem2�ڴ�����趨.mem2����CCM,���ڹ���CCM(�ر�ע��,�ⲿ��SRAM,��CPU���Է���!!) */
#define MEM2_BLOCK_SIZE         64                              /* �ڴ���СΪ64�ֽ� */
#define MEM2_MAX_SIZE           60 * 1024                       /* �������ڴ�60K */
#define MEM2_ALLOC_TABLE_SIZE   MEM2_MAX_SIZE/MEM2_BLOCK_SIZE   /* �ڴ���С */
/* mem3�ڴ�����趨.mem2���ڴ�ش����ⲿSDRAM���� */
#define MEM3_BLOCK_SIZE         64                              /* �ڴ���СΪ64�ֽ� */
#define MEM3_MAX_SIZE           50 * 1024                       /* �������ڴ�28912K����������С����ʵ�ʹ������� */
#define MEM3_ALLOC_TABLE_SIZE   MEM3_MAX_SIZE/MEM3_BLOCK_SIZE   /* �ڴ���С */
/* SDRAM���ò��� */
#define SDRAM_MODEREG_BURST_LENGTH_1             ((uint16_t)0x0000)
#define SDRAM_MODEREG_BURST_LENGTH_2             ((uint16_t)0x0001)
#define SDRAM_MODEREG_BURST_LENGTH_4             ((uint16_t)0x0002)
#define SDRAM_MODEREG_BURST_LENGTH_8             ((uint16_t)0x0004)
#define SDRAM_MODEREG_BURST_TYPE_SEQUENTIAL      ((uint16_t)0x0000)
#define SDRAM_MODEREG_BURST_TYPE_INTERLEAVED     ((uint16_t)0x0008)
#define SDRAM_MODEREG_CAS_LATENCY_2              ((uint16_t)0x0020)
#define SDRAM_MODEREG_CAS_LATENCY_3              ((uint16_t)0x0030)
#define SDRAM_MODEREG_OPERATING_MODE_STANDARD    ((uint16_t)0x0000)
#define SDRAM_MODEREG_WRITEBURST_MODE_PROGRAMMED ((uint16_t)0x0000)
#define SDRAM_MODEREG_WRITEBURST_MODE_SINGLE     ((uint16_t)0x0200)

/* �ڴ��������� */
struct _m_mallco_dev
{
    void (*init)(uint8_t);              /* ��ʼ�� */
    uint16_t (*perused)(uint8_t);       /* �ڴ�ʹ���� */
    uint8_t *membase[SRAMBANK];         /* �ڴ�� ����SRAMBANK��������ڴ� */
    uint32_t *memmap[SRAMBANK];         /* �ڴ����״̬�� */
    uint8_t  memrdy[SRAMBANK];          /* �ڴ�����Ƿ���� */
};

void sdram_initialization_sequence(void);

void my_mem_set(void *s, uint8_t c, uint32_t count);  /* �����ڴ� */
void my_mem_copy(void *des, void *src, uint32_t n);   /* �����ڴ� */
void my_mem_init(uint8_t memx);                       /* �ڴ�����ʼ������(��/�ڲ�����) */
uint32_t my_mem_malloc(uint8_t memx, uint32_t size);  /* �ڴ����(�ڲ�����) */
uint8_t my_mem_free(uint8_t memx, uint32_t offset);   /* �ڴ��ͷ�(�ڲ�����) */
uint16_t my_mem_perused(uint8_t memx) ;               /* ����ڴ�ʹ����(��/�ڲ�����)  */
/* �û����ú��� */
void myfree(uint8_t memx, void *ptr);                   /* �ڴ��ͷ�(�ⲿ����) */
void *mymalloc(uint8_t memx, uint32_t size);            /* �ڴ����(�ⲿ����) */
void *myrealloc(uint8_t memx, void *ptr, uint32_t size);/* ���·����ڴ�(�ⲿ����) */


#endif
