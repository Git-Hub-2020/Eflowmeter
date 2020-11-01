#include "common.h"
#include "timer.h"
#include "version.h"
#include "lcd_menu.h"
#include "lcd_screen_data.h"

uint8_t Init_Frame = 0;
BOOL Warning_Disp_Flag = FALSE;
static volatile MenuKey_t lcd_key_status = MENU_KEY_INVALID;
static BOOL Lcd_key_Flag = FALSE; //KEYÆÁ±Î
static uint8_t lcd_draw_req = REQ_OFF;
static uint8_t lcd_screen_req = REQ_OFF;
static uint8_t lcd_cursor_req = REQ_OFF;

void LCD_init(void)
{
	LCD_Menu_Init();
	LCD_TimeOut_Init();
}

void LCD_Draw(void)
{
	if ((TRUE == Lcd_key_Flag) && (MENU_KEY_INVALID != lcd_key_status)){
		LCD_Drawreq_Set(LCD_Menu_Key_Response(lcd_key_status));
		LCD_Key_StatusSet(MENU_KEY_INVALID);
	}

	if(REQ_ON == lcd_draw_req)
	{
		if(REQ_ON == lcd_screen_req){
			LCD_Screen_Draw();
			LCD_Screenreq_Set(REQ_OFF);
		}

		LCD_Anime_Draw();

		if(REQ_ON == lcd_cursor_req){
			LCD_Cursor_Draw();
			LCD_Cursorreq_Set(REQ_OFF);
		}

		LCD_Drawreq_Set(REQ_OFF);
	}
}

void LCD_Key_StatusSet(MenuKey_t key_status)
{
	if(FALSE == Lcd_key_Flag) return;
	lcd_key_status = key_status;
}

void LCD_TimeOut_Init(void)
{
	uint8_t version[3] = {0};

	if(Init_Frame == 0){
		Version_GetNum(version);
		LCD_Menu_InitVersion(version);
		Timer_Setup(TIMER_ID_INIT);
		Init_Frame++;
	}
	else if(Init_Frame < 4){
		Init_Frame++;
	}
	else{
		Init_Frame = 0;
		Timer_Clear(TIMER_ID_INIT);
		Lcd_key_Flag = TRUE; //KEYÆÁ±Î½â³ý
		LCD_AutoMeasure_Transfer(MENU_L0_AUTOMEASURE);
	}

	LCD_Drawreq_Set(REQ_ON);
}

void LCD_TimeOut_Alert(void)
{
	Warning_Disp_Flag = !Warning_Disp_Flag;
	LCD_Drawreq_Set(REQ_ON);
}

void LCD_AutoMeasure_Transfer(uint8_t menu)
{
	switch(menu)
	{
	case MENU_L0_AUTOMEASURE:
		LCD_Menu_SetLevel(MENU_LEVEL_0);
		LCD_Menu_SetID(MENU_L0_AUTOMEASURE);
		Timer_Setup(TIMER_ID_ALERT);
		LCD_Cursor_StatusSet(CURSOR_INVALID);
		break;
	case MENU_L0_CLEARTOTAL:
		Timer_Clear(TIMER_ID_ALERT);
		LCD_Menu_SetLevel(MENU_LEVEL_0);
		LCD_Menu_SetID(MENU_L0_CLEARTOTAL);
		LCD_Cursor_StatusSet(CURSOR_VALID);
		break;
	case MENU_L1_PARAMSET:
		Timer_Clear(TIMER_ID_ALERT);
		LCD_Menu_SetLevel(MENU_LEVEL_1);
		LCD_Menu_SetID(MENU_L1_PARAMSET);
		LCD_Cursor_StatusSet(CURSOR_INVALID);
		break;
	default:
		break;
	}
}

void LCD_Drawreq_Set(uint8_t req)
{
	lcd_draw_req = req;
}

void LCD_Screenreq_Set(uint8_t req)
{
	lcd_screen_req = req;
}

void LCD_Cursorreq_Set(uint8_t req)
{
	lcd_cursor_req = req;
}
