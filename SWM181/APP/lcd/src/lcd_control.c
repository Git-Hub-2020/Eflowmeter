#include "common.h"
#include "lcd_control.h"
#include "timer.h"
#include "lcd_menu.h"
#include "lcd_draw.h"
#include "lcd_screen_data.h"
#include "key_control.h"

static uint8_t lcd_draw_req = 0;
static void Lcd_Mst_Init(void);
static void LCD_Drawreq_Clear(void);
static void LCD_Drawreq_Set(void);

void LCD_init(void)
{
	Lcd_Mst_Init();
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
	LCD_TimeOut_Init();
	Timer_Setup(TIMER_ID_INIT);
	LCD_Drawreq_Set();
}

void LCD_TimeOut_Init(void)
{
	static uint8_t count = 0;

	if(count < 4){
		LCD_Menu_InitDisplay(count);
		count++;
	}
	else{
		LCD_Menu_SetLevel(MENU_LEVEL_0);
		LCD_Menu_SetID(MENU_L0_AUTOMEASURE);
		Timer_Clear(TIMER_ID_INIT);
		Key_StatusSet(KEY_VALID);
	}

	LCD_Drawreq_Set();
}

void LCD_TimeOut_Alert(void)
{
	static BOOL display_flag = FALSE;

	if(TRUE == display_flag){
		LCD_Menu_AlertDisplay(DISPLAY_ON);
	}
	else{
		LCD_Menu_AlertDisplay(DISPLAY_OFF);
	}
	display_flag = !display_flag;
	LCD_Drawreq_Set();
}

void LCD_Key_Up(void)
{
	switch(LCD_Menu_GetLevel())
	{
		case MENU_LEVEL_0:
			break;
		case MENU_LEVEL_1:
			LCD_Menu_Key_L1(MENU_KEY_UP);
			LCD_Drawreq_Set();
			break;
		case MENU_LEVEL_2:
			LCD_Menu_Key_L2(MENU_KEY_UP);
			LCD_Drawreq_Set();
			break;
		case MENU_LEVEL_3:
			LCD_Menu_Key_L3(MENU_KEY_UP);
			LCD_Drawreq_Set();
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
			LCD_Drawreq_Set();
			break;
		case MENU_LEVEL_2:
			LCD_Menu_Key_L2(MENU_KEY_DOWN);
			LCD_Drawreq_Set();
			break;
		case MENU_LEVEL_3:
			LCD_Menu_Key_L3(MENU_KEY_DOWN);
			LCD_Drawreq_Set();
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
			LCD_Menu_SetLevel(MENU_LEVEL_2);
			LCD_Menu_Key_L1(MENU_KEY_CONFIRM);
			LCD_Drawreq_Set();
			break;
		case MENU_LEVEL_2:
			LCD_Menu_SetLevel(MENU_LEVEL_3);
			LCD_Menu_Key_L2(MENU_KEY_CONFIRM);
			LCD_Drawreq_Set();
			break;
		case MENU_LEVEL_3:
			LCD_Menu_SetLevel(MENU_LEVEL_2);
			LCD_Menu_Key_L3(MENU_KEY_CONFIRM);
			LCD_Drawreq_Set();
			break;
		default:
			break;
	}
}

void LCD_Key_UniteConfirm(void)
{
	uint8_t level = LCD_Menu_GetLevel();
	uint8_t menu = LCD_Menu_GetID();

	if((MENU_LEVEL_1 == level) &&(MENU_L1_PARAMSET == menu))
	{
		return;
	}
	if((MENU_LEVEL_0 == level) &&(MENU_L0_AUTOMEASURE == menu))
	{
		LCD_Menu_AlertDisplay(DISPLAY_ON);
		Timer_Clear(TIMER_ID_ALERT);
	}

	LCD_Menu_SetLevel(MENU_LEVEL_1);
	LCD_Menu_SetID(MENU_L1_PARAMSET);
	LCD_Drawreq_Set();
}

void LCD_Draw(void)
{
	if(0 != lcd_draw_req)
	{
		clealddram();

		LCD_Screen_Draw();
		LCD_Drawreq_Clear();
	}

}

static void Lcd_Mst_Init(void)
{
	GPIO_Init(RES, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(CS1, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(A0, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(SCL, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(SDA, 1, 0, 0, 0);	//初始化LCDIO
}

static void LCD_Drawreq_Clear(void)
{
	lcd_draw_req = 0;
}

static void LCD_Drawreq_Set(void)
{
	lcd_draw_req = 1;
}
