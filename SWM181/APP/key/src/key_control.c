#include "common.h"
#include "key_control.h"
#include "lcd_control.h"

static volatile signed int KeyPressCount[4];//����ѹ��20mS����������
static volatile signed int KeyDblCount[4];//�����ֵ����������

static void KeyCommandExec(unsigned int, unsigned int);//ִ�м�������
static uint8_t GetKey(void);
/* �ż��¼� */
static void Key00(void);
static void Key01(void);
static void Key02(void);
static void Key03(void);
/* ��ѹ���¼� */
static void Key10(void);
static void Key11(void);
static void Key12(void);
static void Key13(void);
/* ˫�����¼� */
static void Key20(void);
static void Key21(void);
static void Key22(void);
static void Key23(void);
/* �����¼� */
static void Key30(void);
static void Key31(void);
static void Key32(void);
static void Key33(void);
/* ��ϼ��¼��¼� */
static void Key0_1(void);
static void Key0_2(void);
static void Key1_2(void);
static void Key2_3(void);
static void Key3_0(void);


void Key_init(void)
{
	unsigned int i;
	GPIO_Init(GPIOD, PIN2, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY1
	GPIO_Init(GPIOD, PIN3, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY2
	GPIO_Init(GPIOC, PIN6, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY3
	GPIO_Init(GPIOC, PIN7, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY4
 	for(i = 0; i < 4;i ++)
	{//4����KEY0~KEY3
    	KeyPressCount[i] = 0;//���ѹ��20mS���������飬Ĭ���޼�ѹ��
    	KeyDblCount[i] = -1;//�������ѹ��
 	}
}

void KeyControl(void)
{
	static unsigned int KeyCount = 0;
	unsigned int i;

	KeyCount &= 0x03;//ֻ��4����KEY0~KEY3(ע��ÿ��ֻɨ��1����)
	if (!(GetKey() & (1 << KeyCount))) //�ߵ�ƽ������Ч
	{
		if (KeyPressCount[KeyCount] > 0)
		{
			KeyPressCount[KeyCount] = -2;//���ͷ�Ҳ���������̶�������20mS
		}
		else if (KeyPressCount[KeyCount] < 0)
		{
			KeyPressCount[KeyCount] ++;
			if (KeyPressCount[KeyCount] == 0)
			{//���ͷ�
				KeyCommandExec(0, KeyCount);//���ͷ�
			}
		}
	}
	else
	{
		KeyPressCount[KeyCount] ++;//
		if (KeyPressCount[KeyCount] == 2)
		{//����������20mS
//			if (KeyDblCount[KeyCount] != KeyCount)
//			{
				KeyCommandExec(1, KeyCount);//����ѹ��
				for (i = 0; i < 4; i ++ )
				{
					if (i == KeyCount)
					{
						KeyDblCount[i] = KeyCount;//���õ�����־
					}
					else
					{
						KeyDblCount[i] = -1;//�ݻ�������������־
					}
				}
//			}
//			else
//			{
//				KeyCommandExec(2, KeyCount);//˫��ѹ��
//				for (i = 0; i < 4; i ++ )
//				{
//					if (i == KeyCount)
//					{
//						KeyDblCount[i] = 0x80 + KeyCount;//����˫����־
//					}
//					else
//					{
//						KeyDblCount[i] = -1;//�ݻ�������˫����־
//					}
//				}
//			}
		}
		else if (KeyPressCount[KeyCount] >= 5 * 50)
		{//5S��ѹ��
			KeyCommandExec(3, KeyCount);//��ѹ��
			KeyDblCount[KeyCount] = -1;//�������ѹ��
			KeyPressCount[KeyCount] = 3;//�ܿ���������ʵ�ֶ�γ�ѹ���¼�����
		}
	}
	KeyCount ++;
}

static void KeyCommandExec(unsigned int CommMode, unsigned int CommTask)
{
	typedef void (* PV)(void);//����ָ��
	const static PV KeyCommandArray[4][4] =
	{//��ά��������ָ�����б�(ɢת�����ַ��)
		{Key00, Key01, Key02, Key03},
		{Key10, Key11, Key12, Key13},
		{Key20, Key21, Key22, Key23},
		{Key30, Key31, Key32, Key33}
	};
	PV func;//��������ָ��
	func = KeyCommandArray[CommMode][CommTask];//��FLASH��ȡ�����̷��¼������
	func();//����KeyX0()~KeyX3()
}

static uint8_t GetKey(void)
{
	uint8_t status_key = 0x00;

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

	return status_key;
}

static void Key00(void)//���ͷ��¼�
{
	  if (KeyDblCount[0] == 0x80)
	  {
		//�ڴ����˫�����ͷ��¼�����
		DebugLog("key1 double released \r\n");
	  }
	  else
	  {
		DebugLog("key1 released \r\n");
		//�ڴ���ӵ������ͷ��¼�����
	  }
}
static void Key01(void)
{
	if (KeyDblCount[1] == 0x80)
	{
	  //�ڴ����˫�����ͷ��¼�����
	  DebugLog("key2 double released \r\n");
	}
	else
	{
	  DebugLog("key2 released \r\n");
	  //�ڴ���ӵ������ͷ��¼�����
	}

}
static void Key02(void)
{
	if (KeyDblCount[2] == 0x80)
	{
	  //�ڴ����˫�����ͷ��¼�����
	  DebugLog("key3 double releaseed \r\n");
	}
	else
	{
	  DebugLog("key3 released \r\n");
	  //�ڴ���ӵ������ͷ��¼�����
	}

}
static void Key03(void)
{
	if (KeyDblCount[3] == 0x80)
	{
	  //�ڴ����˫�����ͷ��¼�����
	  DebugLog("key4 double released \r\n");
	}
	else
	{
	  DebugLog("key4 released \r\n");
	  //�ڴ���ӵ������ͷ��¼�����
	}

}

static void Key10(void)//�������¼�
{
  if (KeyPressCount[1] >= 2)
  {//��KEY1Ҳѹ��ʱִ����ϼ��¼�
    Key0_1();return;
  }
  else if (KeyPressCount[2] >= 2)
  {//��KEY2Ҳѹ��ʱִ����ϼ��¼�
    Key0_2();return;
  }
  else if (KeyPressCount[3] >= 2)
  {//��KEY3Ҳѹ��ʱִ����ϼ��¼�
    Key3_0();return;
  }
  DebugLog("key1 pressed \r\n");
}

static void Key11(void)
{
  if (KeyPressCount[0] >= 2)
  {//��KEY0Ҳѹ��ʱִ����ϼ��¼�
    Key0_1();return;
  }
  else if (KeyPressCount[2] >= 2)
  {//��KEY2Ҳѹ��ʱִ����ϼ��¼�
    Key1_2();return;
  }
  LCD_Key_StatusSet(MENU_KEY_DOWN);/* �¼� */
  DebugLog("key2 pressed \r\n");
}

static void Key12(void)
{
  if (KeyPressCount[0] >= 2)
  {//��KEY0Ҳѹ��ʱִ����ϼ��¼�
	  Key0_2();return;
  }
  else if (KeyPressCount[1] >= 2)
  {//��KEY1Ҳѹ��ʱִ����ϼ��¼�
    Key1_2();return;
  }
  else if (KeyPressCount[3] >= 2)
  {//��KEY3Ҳѹ��ʱִ����ϼ��¼�
    Key2_3();return;
  }
  LCD_Key_StatusSet(MENU_KEY_UP);/* �ϼ� */
  DebugLog("key3 pressed \r\n");
}

static void Key13(void)
{
  if (KeyPressCount[2] >= 2)
  {//��KEY2Ҳѹ��ʱִ����ϼ��¼�
    Key2_3();return;
  }
  else if (KeyPressCount[0] >= 2)
  {//��KEY0Ҳѹ��ʱִ����ϼ��¼�
    Key3_0();return;
  }
  LCD_Key_StatusSet(MENU_KEY_CONFIRM);/* ȷ�ϼ� */
  DebugLog("key4 pressed \r\n");
}

static void Key20(void)//˫�����¼�
{
	DebugLog("key1 double pressed \r\n");
}

static void Key21(void)
{
	DebugLog("key2 double pressed \r\n");
}

static void Key22(void)
{
	DebugLog("key3 double pressed \r\n");
}
static void Key23(void)
{
	DebugLog("key4 double pressed \r\n");
}

static void Key30(void)//��ѹ���¼�
{
	DebugLog("key1 long pressed \r\n");
	LCD_Key_StatusSet(MENU_KEY_LONGUNIT);/* ���ϼ����� */
}

static void Key31(void)
{
	DebugLog("key2 long pressed \r\n");

}

static void Key32(void)
{
	DebugLog("key3 long pressed \r\n");

}

static void Key33(void)
{
	DebugLog("key4 long pressed \r\n");
	LCD_Key_StatusSet(MENU_KEY_LONGCONFIRM);/* ȷ�ϼ����� */
}

static void Key0_1(void)//��ϼ��¼�KEY0KEY1
{
	DebugLog("key1 key2 pressed \r\n");
	LCD_Key_StatusSet(MENU_KEY_UNITDOWN);/* ����+�¼� */
}

static void Key0_2(void)//��ϼ��¼�KEY0KEY2
{
	DebugLog("key1 key3 pressed \r\n");
	LCD_Key_StatusSet(MENU_KEY_UNITUP);/* ����+�ϼ� */
}

static void Key1_2(void)//KEY1KEY2
{
	DebugLog("key2 key3 pressed \r\n");

}

static void Key2_3(void)//KEY2KEY3
{
	DebugLog("key3 key4 pressed \r\n");

}

static void Key3_0(void)//KEY3KEY0
{
	DebugLog("key1 key4 pressed \r\n");
	LCD_Key_StatusSet(MENU_KEY_UNITCONFIRM);/* ����+ȷ�ϼ� */
}

