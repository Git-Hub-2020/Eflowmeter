#ifndef EEPROM_API_H_
#define EEPROM_API_H_

#include "eeprom.h"

typedef struct Eeprom
{
	uint32_t password;		/* ���� */
	uint32_t language;		/* ���� */
	uint32_t commaddress;	/* �Ǳ�ͨѶ��ַ */
	uint32_t baudrate;		/* �Ǳ�ͨѶ�ٶ� */
	uint32_t snsrsize;		/* �����ܵ��ھ� */
	uint32_t flowunit;		/* ������λ */
	uint32_t flowrange;		/* �Ǳ��������� */
	uint32_t damp;			/* ��������ʱ�� */
	uint32_t flowdirect;	/* ������������ */
	uint32_t flowzero;		/* ����������� */
	uint32_t flowcutoff;	/* С�ź��г��� */
	uint32_t cutoffena;		/* �����г���ʾ */
	uint32_t totalunit;		/* �������㵥λ */
	uint32_t segmanena;		/* ����������� */
	uint32_t analogtype;	/* ����������� */
	uint32_t pulsetype;		/* ���������ʽ */
	uint32_t pulsefact;		/* ���嵥λ���� */
	uint32_t frequemax;		/* Ƶ�������Χ */
	uint32_t mtsnsrena;		/* �չܱ������� */
	uint32_t mtsnsrtrip;	/* �չܱ�����ֵ */
} Eeprom_t;

#define OFFSET_OF(type, member) (uint32_t)(&(((type *)0)->member))
#define MEM_EEP_ADDR(member) (uint32_t)(EEPROM_ADDR+OFFSET_OF(Eeprom_t, member))
#define MEM_SIZE (uint32_t)1

extern void Eeprom_Erase(uint32_t addr);
extern void Eeprom_Write(uint32_t addr, uint32_t *value,uint32_t size);
extern void Eeprom_Read(uint32_t addr, uint32_t *value,uint32_t size);

#endif /* EEPROM_API_H_ */
