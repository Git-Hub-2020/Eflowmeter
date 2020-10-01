#include "common.h"
#include "lcd_control.h"
#include "timer.h"
#include "lcd_menu.h"
#include "lcd_draw.h"
#include "lcd_screen_data.h"
#include "key_control.h"

uint8_t Init_Frame = 0;
BOOL Warning_Disp_Flag = FALSE;
static uint8_t lcd_draw_req = REQ_OFF;
static uint8_t lcd_clear_req = REQ_OFF;
static uint8_t lcd_cursor_req = REQ_OFF;
static void LCD_Mst_Init(void);

void LCD_init(void)
{
	LCD_Mst_Init();
    GPIO_SetBit(RES);//RES=1;
    delay(2);
    GPIO_ClrBit(RES);//RES=0;
    delay(2);
    GPIO_SetBit(RES);//RES=1;
    delay(20);
   	write_com(0xa2);        //1/9 Bias
    write_com(0xa6);        //
    write_com(0xa1);        //ADC set (SEG)
    write_com(0xc8);        //COM reves
    write_com(0x22);        //有效值范围：0X20-0X27粗调 每升高一阶电压增加零点几伏
    write_com(0x81);        //Electronic Volume Mode Set
    write_com(0x18);        //有效值范围：0X00-0X3F微调 每升高一阶电压增加零点零几伏
    write_com(0x2c);
    delay(200);             //延时200mS
    write_com(0x2e);
    delay(200);             ////延时200mS
    write_com(0x2f);        //The Power Control Set

    delay(200);             //延时200mS
    write_com(0xaf);        //Lcd Disply ON
	delay(5);
 	write_com(0xaf);        //Lcd Disply ON
	delay(5);

	LCD_Menu_SetLevel(MENU_LEVEL_0);
	LCD_Menu_SetID(MENU_L0_INIT);
	LCD_Cursor_StatusSet(CURSOR_INVALID);
	LCD_TimeOut_Init();
	Timer_Setup(TIMER_ID_INIT);
	LCD_Drawreq_Set(REQ_ON);
}

void LCD_TimeOut_Init(void)
{
	if(Init_Frame == 0){
		LCD_Menu_InitVerGet();
		Init_Frame++;
	}
	else if(Init_Frame < 4){
		Init_Frame++;
	}
	else{
		Init_Frame = 0;
		Timer_Clear(TIMER_ID_INIT);
		LCD_Menu_SetLevel(MENU_LEVEL_0);
		LCD_Menu_SetID(MENU_L0_AUTOMEASURE);
		Timer_Setup(TIMER_ID_ALERT);
		Key_StatusSet(KEY_VALID);
	}

	LCD_Drawreq_Set(REQ_ON);
}

void LCD_TimeOut_Alert(void)
{
	Warning_Disp_Flag = !Warning_Disp_Flag;
	LCD_Drawreq_Set(REQ_ON);
}

void LCD_Key_Up(void)
{
	switch(LCD_Menu_GetLevel())
	{
		case MENU_LEVEL_0:
			break;
		case MENU_LEVEL_1:
			LCD_Menu_Key_L1(MENU_KEY_UP);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_2:
			LCD_Menu_Key_L2(MENU_KEY_UP);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_3:
			LCD_Menu_Key_L3(MENU_KEY_UP);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_4:
			LCD_Menu_Key_L4(MENU_KEY_UP);
			LCD_Drawreq_Set(REQ_ON);
			break;
		default:
			break;
	}
}

void LCD_Key_Down(void)
{
	switch(LCD_Menu_GetLevel())
	{
		case MENU_LEVEL_0:
			break;
		case MENU_LEVEL_1:
			LCD_Menu_Key_L1(MENU_KEY_DOWN);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_2:
			LCD_Menu_Key_L2(MENU_KEY_DOWN);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_3:
			LCD_Menu_Key_L3(MENU_KEY_DOWN);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_4:
			LCD_Menu_Key_L4(MENU_KEY_DOWN);
			LCD_Drawreq_Set(REQ_ON);
			break;
		default:
			break;
	}
}

void LCD_Key_Confirm(void)
{
	switch(LCD_Menu_GetLevel())
	{
		case MENU_LEVEL_0:
			break;
		case MENU_LEVEL_1:
			LCD_Menu_SetLevel(MENU_LEVEL_4);
			LCD_Menu_Key_L1(MENU_KEY_CONFIRM);
			LCD_Cursor_StatusSet(CURSOR_VALID);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_2:
			LCD_Menu_SetLevel(MENU_LEVEL_3);
			LCD_Menu_Key_L2(MENU_KEY_CONFIRM);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_3:
			LCD_Menu_SetLevel(MENU_LEVEL_2);
			LCD_Menu_Key_L3(MENU_KEY_CONFIRM);
			LCD_Cursor_StatusSet(CURSOR_FREEZE);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_4:
			LCD_Menu_Key_L4(MENU_KEY_CONFIRM);
			LCD_Drawreq_Set(REQ_ON);
			break;
		default:
			break;
	}
}

void LCD_Key_UniteUp(void)
{
	switch(LCD_Menu_GetLevel())
	{
		case MENU_LEVEL_4:
			LCD_Menu_Key_L4(MENU_KEY_UNITUP);
			LCD_Cursor_StatusSet(CURSOR_RIGHT);
			LCD_Drawreq_Set(REQ_ON);
			break;
		default:
			break;
	}
}

void LCD_Key_UniteDown(void)
{
	switch(LCD_Menu_GetLevel())
	{
		case MENU_LEVEL_4:
			LCD_Menu_Key_L4(MENU_KEY_UNITDOWN);
			LCD_Cursor_StatusSet(CURSOR_LEFT);
			LCD_Drawreq_Set(REQ_ON);
			break;
		default:
			break;
	}
}

void LCD_Key_UniteConfirm(void)
{
	switch(LCD_Menu_GetLevel())
	{
		case MENU_LEVEL_0:
			Timer_Clear(TIMER_ID_ALERT);
			LCD_Menu_SetLevel(MENU_LEVEL_1);
			LCD_Menu_SetID(MENU_L1_PARAMSET);
			LCD_Cursor_StatusSet(CURSOR_INVALID);
			LCD_Drawreq_Set(REQ_ON);
			break;
		case MENU_LEVEL_4:
			LCD_Menu_Key_L4(MENU_KEY_UNITCONFIRM);
			LCD_Drawreq_Set(REQ_ON);
			break;
		default:
			LCD_Menu_SetLevel(MENU_LEVEL_1);
			LCD_Menu_SetID(MENU_L1_PARAMSET);
			LCD_Cursor_StatusSet(CURSOR_INVALID);
			LCD_Drawreq_Set(REQ_ON);
			break;
	}
}

void LCD_Draw(void)
{
	if(REQ_ON == lcd_draw_req)
	{
		if(REQ_ON == lcd_clear_req){
			clealddram();
			LCD_Clearreq_Set(REQ_OFF);
			LCD_Screen_Draw();
		}

		LCD_Anime_Draw();

		if(REQ_ON == lcd_cursor_req){
			LCD_Cursor_Draw();
			LCD_Cursorreq_Set(REQ_OFF);
		}

		LCD_Drawreq_Set(REQ_OFF);
	}

}

static void LCD_Mst_Init(void)
{
	GPIO_Init(RES, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(CS1, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(A0, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(SCL, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(SDA, 1, 0, 0, 0);	//初始化LCDIO
}

void LCD_Drawreq_Set(uint8_t req)
{
	lcd_draw_req = req;
}

void LCD_Clearreq_Set(uint8_t req)
{
	lcd_clear_req = req;
}

void LCD_Cursorreq_Set(uint8_t req)
{
	lcd_cursor_req = req;
}
