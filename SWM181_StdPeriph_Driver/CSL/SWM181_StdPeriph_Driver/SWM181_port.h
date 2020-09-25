#ifndef __SWM181_PORT_H__
#define __SWM181_PORT_H__

void PORT_Init(PORT_TypeDef * PORTx, uint32_t n, uint32_t func, uint32_t digit_in_en);	//端口引脚功能选择，其可取值如下：


#define PORTA_PIN0_GPIO		 	0
#define PORTA_PIN0_FUNMUX		1

#define PORTA_PIN1_GPIO			0
#define PORTA_PIN1_FUNMUX		1

#define PORTA_PIN2_GPIO			0
#define PORTA_PIN2_FUNMUX		1
#define PORTA_PIN2_SWCLK		2

#define PORTA_PIN3_GPIO			0
#define PORTA_PIN3_FUNMUX		1
#define PORTA_PIN3_SWDIO		2

#define PORTA_PIN4_GPIO			0
#define PORTA_PIN4_FUNMUX		1
#define PORTA_PIN4_LCD_COM0		3

#define PORTA_PIN5_GPIO			0
#define PORTA_PIN5_FUNMUX		1
#define PORTA_PIN5_CMP0N		2
#define PORTA_PIN5_LCD_COM1		3

#define PORTA_PIN6_GPIO			0
#define PORTA_PIN6_FUNMUX		1
#define PORTA_PIN6_CMP0P		2
#define PORTA_PIN6_LCD_COM2		3

#define PORTA_PIN7_GPIO			0
#define PORTA_PIN7_FUNMUX		1
#define PORTA_PIN7_LCD_COM3		3

#define PORTA_PIN8_GPIO		 	0
#define PORTA_PIN8_FUNMUX		1
#define PORTA_PIN8_SPI0_SSEL 	2
#define PORTA_PIN8_LCD_SEG18	3

#define PORTA_PIN9_GPIO			0
#define PORTA_PIN9_FUNMUX		1
#define PORTA_PIN9_SPI0_MISO	2
#define PORTA_PIN9_LCD_SEG19	3

#define PORTA_PIN10_GPIO		0
#define PORTA_PIN10_FUNMUX		1
#define PORTA_PIN10_SPI0_MOSI	2
#define PORTA_PIN10_LCD_SEG20	3

#define PORTA_PIN11_GPIO		0
#define PORTA_PIN11_FUNMUX		1
#define PORTA_PIN11_SPI0_SCLK	2
#define PORTA_PIN11_LCD_SEG21	3

#define PORTA_PIN12_GPIO		0
#define PORTA_PIN12_FUNMUX		1
#define PORTA_PIN12_ADC_CH4 	2
#define PORTA_PIN12_SPI0_SSEL	4

#define PORTA_PIN13_GPIO		0
#define PORTA_PIN13_FUNMUX		1
#define PORTA_PIN13_ADC_CH3		2
#define PORTA_PIN13_CMP2N		2
#define PORTA_PIN13_SPI0_MISO	4

#define PORTA_PIN14_GPIO		0
#define PORTA_PIN14_FUNMUX		1
#define PORTA_PIN14_ADC_CH2		2
#define PORTA_PIN14_CMP2P		2
#define PORTA_PIN14_SPI0_MOSI	4

#define PORTA_PIN15_GPIO		0
#define PORTA_PIN15_FUNMUX		1
#define PORTA_PIN15_ADC_CH1		2
#define PORTA_PIN15_SPI0_SCLK	4



#define PORTB_PIN0_GPIO		 	0
#define PORTB_PIN0_FUNMUX		1
#define PORTB_PIN0_LCD_SEG0		3

#define PORTB_PIN1_GPIO			0
#define PORTB_PIN1_FUNMUX		1
#define PORTB_PIN1_LCD_SEG1		3

#define PORTB_PIN2_GPIO			0
#define PORTB_PIN2_FUNMUX		1
#define PORTB_PIN2_CMP1N		2
#define PORTB_PIN2_LCD_SEG2		3

#define PORTB_PIN3_GPIO			0
#define PORTB_PIN3_FUNMUX		1
#define PORTB_PIN3_CMP1P		2
#define PORTB_PIN3_LCD_SEG3		3

#define PORTB_PIN4_GPIO			0
#define PORTB_PIN4_FUNMUX		1
#define PORTB_PIN4_LCD_SEG4		3

#define PORTB_PIN5_GPIO			0
#define PORTB_PIN5_FUNMUX		1
#define PORTB_PIN5_LCD_SEG5		3

#define PORTB_PIN6_GPIO			0
#define PORTB_PIN6_FUNMUX		1
#define PORTB_PIN6_LCD_SEG6		3

#define PORTB_PIN7_GPIO			0
#define PORTB_PIN7_FUNMUX		1
#define PORTB_PIN7_LCD_SEG7		3

#define PORTB_PIN8_GPIO		 	0
#define PORTB_PIN8_FUNMUX		1
#define PORTB_PIN8_LCD_SEG8		3

#define PORTB_PIN9_GPIO			0
#define PORTB_PIN9_FUNMUX		1
#define PORTB_PIN9_LCD_SEG9		3

#define PORTB_PIN10_GPIO		0
#define PORTB_PIN10_FUNMUX		1
#define PORTB_PIN10_LCD_SEG22	3

#define PORTB_PIN11_GPIO		0
#define PORTB_PIN11_FUNMUX		1
#define PORTB_PIN11_LCD_SEG23	3

#define PORTB_PIN12_GPIO		0
#define PORTB_PIN12_FUNMUX		1
#define PORTB_PIN12_LCD_SEG24	3

#define PORTB_PIN13_GPIO		0
#define PORTB_PIN13_FUNMUX		1
#define PORTB_PIN13_LCD_SEG25	3

#define PORTB_PIN14_GPIO		0
#define PORTB_PIN14_FUNMUX		1
#define PORTB_PIN14_SDADC_CH5P	2

#define PORTB_PIN15_GPIO		0
#define PORTB_PIN15_FUNMUX		1
#define PORTB_PIN15_SDADC_CH5N	2



#define PORTC_PIN0_GPIO		 	0
#define PORTC_PIN0_FUNMUX		1
#define PORTC_PIN0_XTAL_OUT		2

#define PORTC_PIN1_GPIO			0
#define PORTC_PIN1_FUNMUX		1
#define PORTC_PIN1_XTAL_IN		2

#define PORTC_PIN2_GPIO			0
#define PORTC_PIN2_FUNMUX		1
#define PORTC_PIN2_SDADC_CH3P	2

#define PORTC_PIN3_GPIO			0
#define PORTC_PIN3_FUNMUX		1
#define PORTC_PIN3_SDADC_CH3N	2

#define PORTC_PIN4_GPIO			0
#define PORTC_PIN4_FUNMUX		1
#define PORTC_PIN4_SDADC_CH1P	2
#define PORTC_PIN4_LCD_SEG10	3
#define PORTC_PIN4_SPI1_SSEL	4

#define PORTC_PIN5_GPIO			0
#define PORTC_PIN5_FUNMUX		1
#define PORTC_PIN5_SDADC_CH1N	2
#define PORTC_PIN5_LCD_SEG11	3
#define PORTC_PIN5_SPI1_MISO	4

#define PORTC_PIN6_GPIO			0
#define PORTC_PIN6_FUNMUX		1
#define PORTC_PIN6_SDADC_CH0P	2
#define PORTC_PIN6_ADC_CH6  	2
#define PORTC_PIN6_LCD_SEG12	3
#define PORTC_PIN6_SPI1_MOSI	4

#define PORTC_PIN7_GPIO			0
#define PORTC_PIN7_FUNMUX		1
#define PORTC_PIN7_SDADC_CH0N	2
#define PORTC_PIN7_ADC_CH5		2
#define PORTC_PIN7_LCD_SEG13	3
#define PORTC_PIN7_SPI1_SCLK	4



#define PORTD_PIN0_GPIO		 	0
#define PORTD_PIN0_FUNMUX		1
#define PORTD_PIN0_SDADC_CH4P	2
#define PORTD_PIN0_LCD_SEG14	3

#define PORTD_PIN1_GPIO			0
#define PORTD_PIN1_FUNMUX		1
#define PORTD_PIN1_SDADC_CH4N	2
#define PORTD_PIN1_LCD_SEG15	3

#define PORTD_PIN2_GPIO			0
#define PORTD_PIN2_FUNMUX		1
#define PORTD_PIN2_SDADC_CH4P	2
#define PORTD_PIN2_LCD_SEG16	3

#define PORTD_PIN3_GPIO			0
#define PORTD_PIN3_FUNMUX		1
#define PORTD_PIN3_SDADC_CH4N	2
#define PORTD_PIN3_LCD_SEG17	3

#define PORTD_PIN4_GPIO			0
#define PORTD_PIN4_FUNMUX		1
#define PORTD_PIN4_SDADC_CH5P	2
#define PORTD_PIN4_LCD_SEG26	3

#define PORTD_PIN5_GPIO			0
#define PORTD_PIN5_FUNMUX		1
#define PORTD_PIN5_SDADC_CH5N	2
#define PORTD_PIN5_LCD_SEG27	3

#define PORTD_PIN6_GPIO			0
#define PORTD_PIN6_FUNMUX		1
#define PORTD_PIN6_SDADC_CH6P	2
#define PORTD_PIN6_LCD_SEG28	3

#define PORTD_PIN7_GPIO			0
#define PORTD_PIN7_FUNMUX		1
#define PORTD_PIN7_SDADC_CH6N	2
#define PORTD_PIN7_LCD_SEG29	3



#define PORTE_PIN0_GPIO		 	0
#define PORTE_PIN0_FUNMUX		1
#define PORTE_PIN0_LCD_SEG30	3

#define PORTE_PIN1_GPIO			0
#define PORTE_PIN1_FUNMUX		1
#define PORTE_PIN1_LCD_SEG31	3

#define PORTE_PIN2_GPIO			0
#define PORTE_PIN2_FUNMUX		1

#define PORTE_PIN3_GPIO			0
#define PORTE_PIN3_FUNMUX		1

#define PORTE_PIN4_GPIO			0
#define PORTE_PIN4_FUNMUX		1
#define PORTE_PIN4_ADC_CH0  	2

#define PORTE_PIN5_GPIO			0
#define PORTE_PIN5_FUNMUX		1
#define PORTE_PIN5_SDADC_CH8P	2

#define PORTE_PIN6_GPIO			0
#define PORTE_PIN6_FUNMUX		1
#define PORTE_PIN6_SDADC_CH8N	2

#define PORTE_PIN7_GPIO			0
#define PORTE_PIN7_FUNMUX		1


/* 下面宏定义的取值全部在正确值的基础上“加100”，以区分上面宏定义的值，从而方便库函数的编写*/
#define FUNMUX_UART0_RXD	100
#define FUNMUX_UART0_TXD	101
#define FUNMUX_UART1_RXD	102
#define FUNMUX_UART1_TXD	103
#define FUNMUX_UART2_RXD	104
#define FUNMUX_UART2_TXD	105
#define FUNMUX_I2C0_SCL		106
#define FUNMUX_I2C0_SDA		107
#define FUNMUX_I2C1_SCL		108
#define FUNMUX_I2C1_SDA		109
#define FUNMUX_PWM0A_OUT	110
#define FUNMUX_PWM1A_OUT	111
#define FUNMUX_PWM2A_OUT	112
#define FUNMUX_PWM3A_OUT	113
#define FUNMUX_PULSE_IN		114
#define FUNMUX_PWM0B_OUT	115
#define FUNMUX_TIMR0_IN		116
#define FUNMUX_TIMR1_IN		117
#define FUNMUX_TIMR2_IN		118
#define FUNMUX_TIMR3_IN		119
#define FUNMUX_CAN_RX		120
#define FUNMUX_CAN_TX		121
#define FUNMUX_PWM1B_OUT	122
#define FUNMUX_PWM2B_OUT	123
#define FUNMUX_PWM3B_OUT	124
#define FUNMUX_PWM_BREAK	126
#define FUNMUX_UART3_RXD	127
#define FUNMUX_UART3_TXD	128
#define FUNMUX_HALL_A		129
#define FUNMUX_HALL_B		130
#define FUNMUX_HALL_C		131

#endif //__SWM181_PORT_H__
