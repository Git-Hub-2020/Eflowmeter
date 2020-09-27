#include "common.h"
#include "lcd_draw.h"

static void LCD_P8x16Str(uint8_t x, uint8_t y, uint8_t* pstr);
static void LCD_P16x16Str(uint8_t x, uint8_t y, uint8_t* pstr);
static void Setadd(uint8_t xl,uint8_t yl);
static void write_data(uint8_t para);

void LCD_Str_Draw(Stringinfo_t *str)
{
	if(NULL == str->pstr) return;

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

void clealddram(void)
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

static void Setadd(uint8_t xl,uint8_t yl)  //ÉèÖÃÐ´ÈëÎ»ÖÃ
{
	uint8_t i;
	i=xl&0x0f;
	xl=(xl>>4)+0x10;

	 write_com(0xb7-yl);
	 write_com(xl);
	 write_com(i);
}

static void write_data(uint8_t para)
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

