#ifndef LCD_SUB_MENU_H_
#define LCD_SUB_MENU_H_

#include "lcd_control.h"

typedef enum SubMenuType
{
	TYPE_SELECT = 0,
	TYPE_SETNUM
} SubMenuType_t;

typedef struct SubMenuInfo
{
	uint8_t			menu_id;
	uint8_t			pre_menu;
	uint8_t			obj_num;
	uint8_t*		obj;
	SubMenuType_t	type;
	int32_t			obj_min;
	int32_t			obj_max;
} SubMenuInfo_t;

uint8_t LCD_SubMenu_IdxGet(void);
DisplayReq_t LCD_Sub_Menu_L2(uint8_t menu, MenuKey_t key);
DisplayReq_t LCD_Sub_Menu_L3(uint8_t menu, MenuKey_t key);
void LCD_Menu_L3_Anime(uint8_t menu_id);

#endif /* LCD_SUB_MENU_H_ */
