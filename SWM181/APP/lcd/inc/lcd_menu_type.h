#ifndef MENU_TYPE_H_
#define MENU_TYPE_H_

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
	LANG_EN
} Language_t;

/* �Ǳ�ͨѶ��ַ */
typedef struct Commaddress
{
	uint8_t addr[2];
	uint8_t pos;
} Commaddress_t;

#endif /* MENU_TYPE_H_ */
