#ifndef LCD_CONTROL_H_
#define LCD_CONTROL_H_

#include "SWM181.h"

typedef enum DisplayReq{
	REQ_OFF = 0,
	REQ_ON
} DisplayReq_t;

typedef enum MenuKey
{
	MENU_KEY_INVALID = 0,
	MENU_KEY_DOWN,
	MENU_KEY_UP,
	MENU_KEY_CONFIRM,
	MENU_KEY_UNITDOWN,
	MENU_KEY_UNITUP,
	MENU_KEY_UNITCONFIRM,
	MENU_KEY_LONGCONFIRM,
	MENU_KEY_LONGUNIT,
	MENU_KEY_ALL
} MenuKey_t;

typedef DisplayReq_t (*MenuFunc)(MenuKey_t key);

void LCD_init(void);
void LCD_Key_StatusSet(MenuKey_t key_status);
void LCD_Draw(void);
void LCD_Drawreq_Set(uint8_t req);
void LCD_Screenreq_Set(uint8_t req);
void LCD_Cursorreq_Set(uint8_t req);
void LCD_AutoMeasure_Transfer(uint8_t menu);
void LCD_TimeOut_Init(void);
void LCD_TimeOut_Alert(void);

#endif /* LCD_CONTROL_H_ */
