#include "SWM181.h"
#include <string.h>

#include "timer.h"
#include "uart.h"
#include "common.h"
#include "eeprom_api.h"
#include "lcd_control.h"
#include "key_control.h"

void SerialInit(void);

int main(void)
{
 	SystemInit();
	SerialInit();

	Eeprom_Init();
	Timer_init();
	Key_init();
	LCD_init();

    while(1)
	{
    	Timer_TimeOut_Manager();
    	LCD_Draw();
	}
}

void IRQ5_Handler(void)        //��ʱ���жϺ���
{
	TIMR_INTClr(TIMR0);
	Timer_Counter();
	KeyControl();
}

/******************************************************************************************************************************************
* ��������: fputc()
* ����˵��: printf()ʹ�ô˺������ʵ�ʵĴ��ڴ�ӡ����
* ��    ��: int ch		Ҫ��ӡ���ַ�
*			FILE *f		�ļ����
* ��    ��: ��
* ע������: ��
******************************************************************************************************************************************/
int fputc(int ch, FILE *f)
{
	UART_WriteByte(UART0, ch);

	while(UART_IsTXBusy(UART0));

	return ch;
}
