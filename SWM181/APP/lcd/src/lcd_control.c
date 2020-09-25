#include "lcd_control.h"
#include "lcd_menu.h"

uint8_t lcd_draw_req = 1;
static void Lcd_Mst_Init(void);
static void LCD_Drawreq_Clear(void);
static void LCD_Drawreq_Set(void);
static void LCD_P8x16Str(uint8_t x, uint8_t y, uint8_t* pstr);
static void LCD_P16x16Str(uint8_t x, uint8_t y, uint8_t* pstr);
static void Setadd(uint8_t xl,uint8_t yl);
static void write_com(uint8_t para);
static void write_data(uint8_t para);
static void clealddram(void);
extern void delay(int t);
extern void delay_us(int t);

static void Lcd_Mst_Init(void)
{
	GPIO_Init(RES, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(CS1, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(A0, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(SCL, 1, 0, 0, 0);	//初始化LCDIO
	GPIO_Init(SDA, 1, 0, 0, 0);	//初始化LCDIO
}

void LCD_init()
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
	LCD_Menu_SetLevel(MENU_LEVEL_1);
	LCD_Menu_SetID(MENU_L1_PARAMSET);
	LCD_Drawreq_Set();
}

void LCD_Draw(void)
{
	if(0 != lcd_draw_req)
	{
		clealddram();
		delay(400);

		LCD_Screen_Draw();
		LCD_Drawreq_Clear();
	}

	delay(200);
}

void LCD_Str_Draw(Stringinfo_t *str)
{
	switch(str->str_type)
	{
		case STR_ZH:
			LCD_P16x16Str(str->str_x, str->str_y, str->pstr);
			break;
		case STR_EN:
			LCD_P8x16Str(str->str_x, str->str_y, str->pstr);
			break;
		default:
			break;
	}
}

static void LCD_Drawreq_Clear(void)
{
	lcd_draw_req = 0;
}

static void LCD_Drawreq_Set(void)
{
	lcd_draw_req = 1;
}

static void LCD_P8x16Str(uint8_t x, uint8_t y, uint8_t* pstr)
{
	uint8_t i = 0;

	Setadd(x, y);
	for (i = 0; i < 8; i++)
	{
		write_data(*pstr);//Delay(10);
		pstr++;
	}

	Setadd(x, (y + 1));
	for (i = 0; i < 8; i++)
	{
		write_data(*pstr);//Delay(10);
		pstr++;
	}
}

static void LCD_P16x16Str(uint8_t x, uint8_t y, uint8_t* pstr)
{
	uint8_t i = 0;

	Setadd(x, y);
	for (i = 0; i < 8; i++)
	{
		write_data(*pstr);//Delay(10);
		pstr++;
	}

	Setadd((x + 8), y);
	for (i = 0; i < 8; i++)
	{
		write_data(*pstr);//Delay(10);
		pstr++;
	}

	Setadd(x, (y + 1));
	for (i = 0; i < 8; i++)
	{
		write_data(*pstr);//Delay(10);
		pstr++;
	}

	Setadd((x + 8), (y + 1));
	for (i = 0; i < 8; i++)
	{
		write_data(*pstr);//Delay(10);
		pstr++;
	}
}

void Setadd(uint8_t xl,uint8_t yl)  //设置写入位置
{
	uint8_t i;
	i=xl&0x0f;
	xl=(xl>>4)+0x10;

	 write_com(0xb7-yl);
	 write_com(xl);
	 write_com(i);
}

void write_com(uint8_t para)
{
	int j=8;
	GPIO_ClrBit(CS1);
	GPIO_ClrBit(A0);//A0=0;
	do
	{
		if(para&0x80)
			GPIO_SetBit(SDA);//SDA=1;
		else
			GPIO_ClrBit(SDA);//SDA=0;
			GPIO_ClrBit(SCL);//SCL=0;
		delay_us(1);
			GPIO_SetBit(SCL);
		--j;
			para<<=1;
	}
	while(j);

	GPIO_SetBit(CS1);//CS1=1;
}

void write_data(uint8_t para)
{
	int j=8;
	GPIO_ClrBit(CS1);
	GPIO_SetBit(A0);//A0=1;
	do
	{
		if(para&0x80)
			GPIO_SetBit(SDA);//SDA=1;
		else
			GPIO_ClrBit(SDA);//SDA=0;
			GPIO_ClrBit(SCL);//SCL=0;
			delay_us(1);
			GPIO_SetBit(SCL);
			--j;
			para<<=1;
	}
	while(j);

	GPIO_SetBit(CS1);//CS1=1;
}

void clealddram()
{
	int i,j;
	for(i=0Xb0;i<0Xb8;i++)
	{
		write_com(i);
		write_com(0x10);
		write_com(0x00);
		for(j=0;j<132;j++)
		{
			write_data(0x00);
		}
	}
}

