#include "common.h"
#include "key_control.h"
#include "lcd_control.h"

static volatile signed int KeyPressCount[4];//申请压键20mS计数器数组
static volatile signed int KeyDblCount[4];//申请键值计数器数组

static void KeyCommandExec(unsigned int, unsigned int);//执行键盘命令
static uint8_t GetKey(void);
/* 放键事件 */
static void Key00(void);
static void Key01(void);
static void Key02(void);
static void Key03(void);
/* 短压键事件 */
static void Key10(void);
static void Key11(void);
static void Key12(void);
static void Key13(void);
/* 双击键事件 */
static void Key20(void);
static void Key21(void);
static void Key22(void);
static void Key23(void);
/* 长键事件 */
static void Key30(void);
static void Key31(void);
static void Key32(void);
static void Key33(void);
/* 组合键事件事件 */
static void Key0_1(void);
static void Key0_2(void);
static void Key1_2(void);
static void Key2_3(void);
static void Key3_0(void);


void Key_init(void)
{
	unsigned int i;
	GPIO_Init(GPIOD, PIN2, 0, 1, 0, 0);			//输入，上拉使能，接KEY1
	GPIO_Init(GPIOD, PIN3, 0, 1, 0, 0);			//输入，上拉使能，接KEY2
	GPIO_Init(GPIOC, PIN6, 0, 1, 0, 0);			//输入，上拉使能，接KEY3
	GPIO_Init(GPIOC, PIN7, 0, 1, 0, 0);			//输入，上拉使能，接KEY4
 	for(i = 0; i < 4;i ++)
	{//4个键KEY0~KEY3
    	KeyPressCount[i] = 0;//清除压键20mS计数器数组，默认无键压下
    	KeyDblCount[i] = -1;//清除单击压键
 	}
}

void KeyControl(void)
{
	static unsigned int KeyCount = 0;
	unsigned int i;

	KeyCount &= 0x03;//只有4个键KEY0~KEY3(注意每次只扫描1个键)
	if (!(GetKey() & (1 << KeyCount))) //高电平按键无效
	{
		if (KeyPressCount[KeyCount] > 0)
		{
			KeyPressCount[KeyCount] = -2;//键释放也需消除键盘抖动至少20mS
		}
		else if (KeyPressCount[KeyCount] < 0)
		{
			KeyPressCount[KeyCount] ++;
			if (KeyPressCount[KeyCount] == 0)
			{//键释放
				KeyCommandExec(0, KeyCount);//键释放
			}
		}
	}
	else
	{
		KeyPressCount[KeyCount] ++;//
		if (KeyPressCount[KeyCount] == 2)
		{//单击键刚满20mS
//			if (KeyDblCount[KeyCount] != KeyCount)
//			{
				KeyCommandExec(1, KeyCount);//单击压键
				for (i = 0; i < 4; i ++ )
				{
					if (i == KeyCount)
					{
						KeyDblCount[i] = KeyCount;//设置单击标志
					}
					else
					{
						KeyDblCount[i] = -1;//摧毁其他键单击标志
					}
				}
//			}
//			else
//			{
//				KeyCommandExec(2, KeyCount);//双击压键
//				for (i = 0; i < 4; i ++ )
//				{
//					if (i == KeyCount)
//					{
//						KeyDblCount[i] = 0x80 + KeyCount;//设置双击标志
//					}
//					else
//					{
//						KeyDblCount[i] = -1;//摧毁其他键双击标志
//					}
//				}
//			}
		}
		else if (KeyPressCount[KeyCount] >= 5 * 50)
		{//5S长压键
			KeyCommandExec(3, KeyCount);//长压键
			KeyDblCount[KeyCount] = -1;//清除单击压键
			KeyPressCount[KeyCount] = 3;//避开单击键以实现多次长压键事件处理
		}
	}
	KeyCount ++;
}

static void KeyCommandExec(unsigned int CommMode, unsigned int CommTask)
{
	typedef void (* PV)(void);//函数指针
	const static PV KeyCommandArray[4][4] =
	{//二维函数数组指针阵列表(散转命令地址表)
		{Key00, Key01, Key02, Key03},
		{Key10, Key11, Key12, Key13},
		{Key20, Key21, Key22, Key23},
		{Key30, Key31, Key32, Key33}
	};
	PV func;//声明函数指针
	func = KeyCommandArray[CommMode][CommTask];//从FLASH中取出键盘放事件处理表
	func();//运行KeyX0()~KeyX3()
}

static uint8_t GetKey(void)
{
	uint8_t status_key = 0x00;

	if(GPIO_GetBit(GPIOC, PIN7) == 0x00)//判断key4
		status_key++;
	status_key=status_key << 1;
	if(GPIO_GetBit(GPIOC, PIN6) == 0x00)//判断key3
		status_key++;
	status_key=status_key << 1;
	if(GPIO_GetBit(GPIOD, PIN3) == 0x00)//判断key2
		status_key++;
	status_key=status_key << 1;
	if(GPIO_GetBit(GPIOD, PIN2) == 0x00)//判断key1
		status_key++;

	return status_key;
}

static void Key00(void)//键释放事件
{
	  if (KeyDblCount[0] == 0x80)
	  {
		//在此添加双击键释放事件处理
		DebugLog("key1 double released \r\n");
	  }
	  else
	  {
		DebugLog("key1 released \r\n");
		//在此添加单击键释放事件处理
	  }
}
static void Key01(void)
{
	if (KeyDblCount[1] == 0x80)
	{
	  //在此添加双击键释放事件处理
	  DebugLog("key2 double released \r\n");
	}
	else
	{
	  DebugLog("key2 released \r\n");
	  //在此添加单击键释放事件处理
	}

}
static void Key02(void)
{
	if (KeyDblCount[2] == 0x80)
	{
	  //在此添加双击键释放事件处理
	  DebugLog("key3 double releaseed \r\n");
	}
	else
	{
	  DebugLog("key3 released \r\n");
	  //在此添加单击键释放事件处理
	}

}
static void Key03(void)
{
	if (KeyDblCount[3] == 0x80)
	{
	  //在此添加双击键释放事件处理
	  DebugLog("key4 double released \r\n");
	}
	else
	{
	  DebugLog("key4 released \r\n");
	  //在此添加单击键释放事件处理
	}

}

static void Key10(void)//单击键事件
{
  if (KeyPressCount[1] >= 2)
  {//在KEY1也压下时执行组合键事件
    Key0_1();return;
  }
  else if (KeyPressCount[2] >= 2)
  {//在KEY2也压下时执行组合键事件
    Key0_2();return;
  }
  else if (KeyPressCount[3] >= 2)
  {//在KEY3也压下时执行组合键事件
    Key3_0();return;
  }
  DebugLog("key1 pressed \r\n");
}

static void Key11(void)
{
  if (KeyPressCount[0] >= 2)
  {//在KEY0也压下时执行组合键事件
    Key0_1();return;
  }
  else if (KeyPressCount[2] >= 2)
  {//在KEY2也压下时执行组合键事件
    Key1_2();return;
  }
  LCD_Key_StatusSet(MENU_KEY_DOWN);/* 下键 */
  DebugLog("key2 pressed \r\n");
}

static void Key12(void)
{
  if (KeyPressCount[0] >= 2)
  {//在KEY0也压下时执行组合键事件
	  Key0_2();return;
  }
  else if (KeyPressCount[1] >= 2)
  {//在KEY1也压下时执行组合键事件
    Key1_2();return;
  }
  else if (KeyPressCount[3] >= 2)
  {//在KEY3也压下时执行组合键事件
    Key2_3();return;
  }
  LCD_Key_StatusSet(MENU_KEY_UP);/* 上键 */
  DebugLog("key3 pressed \r\n");
}

static void Key13(void)
{
  if (KeyPressCount[2] >= 2)
  {//在KEY2也压下时执行组合键事件
    Key2_3();return;
  }
  else if (KeyPressCount[0] >= 2)
  {//在KEY0也压下时执行组合键事件
    Key3_0();return;
  }
  LCD_Key_StatusSet(MENU_KEY_CONFIRM);/* 确认键 */
  DebugLog("key4 pressed \r\n");
}

static void Key20(void)//双击键事件
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

static void Key30(void)//长压键事件
{
	DebugLog("key1 long pressed \r\n");
	LCD_Key_StatusSet(MENU_KEY_LONGUNIT);/* 复合键长按 */
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
	LCD_Key_StatusSet(MENU_KEY_LONGCONFIRM);/* 确认键长按 */
}

static void Key0_1(void)//组合键事件KEY0KEY1
{
	DebugLog("key1 key2 pressed \r\n");
	LCD_Key_StatusSet(MENU_KEY_UNITDOWN);/* 复合+下键 */
}

static void Key0_2(void)//组合键事件KEY0KEY2
{
	DebugLog("key1 key3 pressed \r\n");
	LCD_Key_StatusSet(MENU_KEY_UNITUP);/* 复合+上键 */
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
	LCD_Key_StatusSet(MENU_KEY_UNITCONFIRM);/* 复合+确认键 */
}

