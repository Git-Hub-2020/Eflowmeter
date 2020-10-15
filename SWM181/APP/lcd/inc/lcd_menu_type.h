#ifndef MENU_TYPE_H_
#define MENU_TYPE_H_

#include "SWM181.h"

/* 密码 */
typedef struct PWInfo
{
	uint8_t pw[5];
} PWInfo_t;

/* 语言 */
typedef enum Language
{
	LANG_ZH = 0,
	LANG_EN,
	LANG_MAX
} Language_t;

/* 仪表通讯地址 */
typedef struct Commaddress
{
	uint8_t data[2];
} Commaddress_t;

/* 仪表通讯速度 */
typedef enum BaudRate
{
	RATE_2400 = 0,
	RATE_4800,
	RATE_9600,
	RATE_19200,
	RATE_MAX
} BaudRate_t;

/* 测量管道口径 */
typedef struct SnsrSize
{
	uint8_t data[4];
} SnsrSize_t;

/* 流量单位 */
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
