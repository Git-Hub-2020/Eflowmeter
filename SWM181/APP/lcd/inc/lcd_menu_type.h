#ifndef MENU_TYPE_H_
#define MENU_TYPE_H_

#include "SWM181.h"

/* ���� */
typedef struct PWInfo
{
	uint8_t pw[5];
} PWInfo_t;

/* ���� */
typedef enum Language
{
	LANG_ZH = 0,
	LANG_EN,
	LANG_MAX
} Language_t;

/* �Ǳ�ͨѶ��ַ */
typedef struct Commaddress
{
	uint8_t data[2];
} Commaddress_t;

/* �Ǳ�ͨѶ�ٶ� */
typedef enum BaudRate
{
	RATE_2400 = 0,
	RATE_4800,
	RATE_9600,
	RATE_19200,
	RATE_MAX
} BaudRate_t;

/* �����ܵ��ھ� */
typedef struct SnsrSize
{
	uint8_t data[4];
} SnsrSize_t;

/* ������λ */
typedef enum FlowUnit
{
	UNIT_LS = 0,
	UNIT_LM,
	UNIT_LH,
	UNIT_M3S,
	UNIT_M3M,
	UNIT_MAX
} FlowUnit_t;

extern PWInfo_t PWInfo;
extern Language_t lcd_Language;
extern Commaddress_t lcd_Commaddr;
extern BaudRate_t lcd_baudrate;
extern SnsrSize_t lcd_snsrsize;
extern FlowUnit_t lcd_flowunit;

#endif /* MENU_TYPE_H_ */
