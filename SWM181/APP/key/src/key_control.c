#include "key_control.h"
#include "lcd_control.h"

uint8_t status_key=0x00;
uint8_t key_sign=0;

void Key_init(void)
{
	GPIO_Init(GPIOD, PIN2, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY1
	GPIO_Init(GPIOD, PIN3, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY2
	GPIO_Init(GPIOC, PIN6, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY3
	GPIO_Init(GPIOC, PIN7, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY4
	TIMR_Init(TIMR0, TIMR_MODE_TIMER, SystemCoreClock/20, 1);	//ÿ100ms����һ���ж�
	IRQ_Connect(IRQ0_15_TIMR0, IRQ5_IRQ, 2);		//��ʱ��0�ж����ӵ�IRQ5�ж��ߣ������ȼ�
	TIMR_Start(TIMR0);
}

void KeyControl(void)
{
	if(key_sign >= 2)
	{
		key_sign = 0;
		switch(status_key)
		{
			case 0x01:
				printf("key1 pressed \r\n");break;
			case 0x02:
				printf("key2 pressed \r\n");
				LCD_Key_Down(); /* �¼� */
				break;
			case 0x03:
				printf("key1 key2 pressed \r\n");break;
			case 0x04:
				printf("key3 pressed \r\n");
				LCD_Key_Up(); /* �ϼ� */
				break;
			case 0x05:
				printf("key1 key3 pressed \r\n");break;
			case 0x06:
				printf("key2 key3 pressed \r\n");break;
			case 0x07:
				printf("key1 key2 key3 pressed \r\n");break;
			case 0x08:
				printf("key4 pressed \r\n");
				LCD_Key_Confirm(); /* ȷ�ϼ� */
				break;
			case 0x09:
				printf("key1 key4 pressed \r\n");
				LCD_Key_UniteConfirm(); /* ����+ȷ�ϼ� */
				break;
			case 0x0a:
				printf("key2 key4 pressed \r\n");break;
			case 0x0b:
				printf("key1 key2 key4 pressed \r\n");break;
			case 0x0c:
				printf("key3 key4 pressed \r\n");break;
			case 0x0d:
				printf("key1 key3 key4 pressed \r\n");break;
			case 0x0e:
				printf("key2 key3 key4 pressed \r\n");break;
			case 0x0f:
				printf("key1 key2 key3 key4 pressed \r\n");break;
		}
//			status_key = 0x00; //����״̬����
		key_sign=0;
	}
}

void GetKey(void)
{
	status_key = 0x00;
	if(GPIO_GetBit(GPIOC, PIN7) == 0x00)//�ж�key4
		status_key++;
	status_key=status_key << 1;
	if(GPIO_GetBit(GPIOC, PIN6) == 0x00)//�ж�key3
		status_key++;
	status_key=status_key << 1;
	if(GPIO_GetBit(GPIOD, PIN3) == 0x00)//�ж�key2
		status_key++;
	status_key=status_key << 1;
	if(GPIO_GetBit(GPIOD, PIN2) == 0x00)//�ж�key1
		status_key++;
}
