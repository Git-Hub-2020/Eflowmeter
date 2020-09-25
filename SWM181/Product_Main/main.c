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

void IRQ5_Handler(void)        //��ʱ���жϺ���
{
	TIMR_INTClr(TIMR0);
	GetKey();
	if(status_key)key_sign++;	//�а�������
}

void SerialInit(void)//log��ӡ����
{
	UART_InitStructure UART_initStruct;

	PORT_Init(PORTA, PIN8, FUNMUX_UART0_RXD, 1);	//GPIOA.8����ΪUART0��������
	PORT_Init(PORTA, PIN7, FUNMUX_UART0_TXD, 0);	//GPIOA.7����ΪUART0�������

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
