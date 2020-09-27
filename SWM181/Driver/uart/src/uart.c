#include "uart.h"

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

