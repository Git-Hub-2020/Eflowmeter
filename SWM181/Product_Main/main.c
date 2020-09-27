#include "SWM181.h"
#include <string.h>

#include "../Driver/timer/inc/timer.h"
#include "../Driver/uart/inc/uart.h"
#include "common.h"
#include "lcd_control.h"
#include "key_control.h"

void SerialInit(void);

int main(void)
{
 	SystemInit();
	SerialInit();

	Timer_init();
	Key_init();
	LCD_init();

    while(1)
	{
    	Timer_TimeOut_Manager();
    	KeyControl();
    	LCD_Draw();
	}
}

void IRQ5_Handler(void)        //定时器中断函数
{
	TIMR_INTClr(TIMR0);
	Timer_Counter();
	GetKey();
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
