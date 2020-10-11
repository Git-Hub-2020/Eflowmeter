#ifndef MENU_TYPE_H_
#define MENU_TYPE_H_

#include "SWM181.h"

/* ���� */
typedef struct PWInfo
{
	uint8_t pw[5];
	uint8_t pos;
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
	uint8_t addr[2];
	uint8_t pos;
} Commaddress_t;


extern PWInfo_t PWInfo;
extern Language_t lcd_Language;
extern Commaddress_t lcd_Commaddr;

#endif /* MENU_TYPE_H_ */
