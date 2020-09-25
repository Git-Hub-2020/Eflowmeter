#include "SWM181.h"
#include <string.h>
#include "lcd_control.h"
#include "key_control.h"

void SerialInit(void);
void delay(int t);
void delay_us(int t);

int main(void)
{
 	SystemInit();
	SerialInit();

	Key_init();
	LCD_init();

    while(1)
	{
    	KeyControl();
    	LCD_Draw();
	}
}

void delay(int t)
{
	register int i,j,k;
	for(i=0;i<t;i++)
		for(j=0;j<125;j++)
			for(k=0;k<8;k++);
}

void delay_us(int t)
{
	register int i,j;
	for(i=0;i<t;i++)
		for( j=0;j<24;j++);

}

void IRQ5_Handler(void)        //定时器中断函数
{
	TIMR_INTClr(TIMR0);
	GetKey();
	if(status_key)key_sign++;	//有按键按下
}

void SerialInit(void)//log打印串口
{
	UART_InitStructure UART_initStruct;

	PORT_Init(PORTA, PIN8, FUNMUX_UART0_RXD, 1);	//GPIOA.8配置为UART0输入引脚
	PORT_Init(PORTA, PIN7, FUNMUX_UART0_TXD, 0);	//GPIOA.7配置为UART0输出引脚

 	UART_initStruct.Baudrate = 115200;
	UART_initStruct.DataBits = UART_DATA_8BIT;
	UART_initStruct.Parity = UART_PARITY_NONE;
	UART_initStruct.StopBits = UART_STOP_1BIT;
	UART_initStruct.RXThresholdIEn = 0;
	UART_initStruct.TXThresholdIEn = 0;
	UART_initStruct.TimeoutIEn = 0;
 	UART_Init(UART0, &UART_initStruct);
	UART_Open(UART0);
}


/******************************************************************************************************************************************
* 函数名称: fputc()
* 功能说明: printf()使用此函数完成实际的串口打印动作
* 输    入: int ch		要打印的字符
*			FILE *f		文件句柄
* 输    出: 无
* 注意事项: 无
******************************************************************************************************************************************/
int fputc(int ch, FILE *f)
{
	UART_WriteByte(UART0, ch);

	while(UART_IsTXBusy(UART0));

	return ch;
}
