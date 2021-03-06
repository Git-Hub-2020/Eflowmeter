#include "common.h"
#include "lcd_sub_menu.h"
#include "lcd_menu.h"
#include "lcd_menu_type.h"
#include "lcd_screen_data.h"
#include "lcd_setup.h"
#include "lcd_draw.h"
#include "lcd_string_en.h"
#include "lcd_string_zh.h"

extern MenuList_t *Current_Menu_Info;
extern uint8_t lcd_cursor_pos;
static uint8_t lcd_submenu_idx = 0;
static DisplayReq_t LCD_Menu_L2_Select(uint8_t, uint8_t*);
static DisplayReq_t LCD_Menu_L2_SetNum(uint8_t, uint8_t, uint8_t*);
static DisplayReq_t LCD_Menu_L3_Select(MenuKey_t,uint8_t,uint8_t,uint8_t*,uint32_t,uint32_t);
static DisplayReq_t LCD_Menu_L3_SetNum(MenuKey_t,uint8_t,uint8_t,uint8_t,uint8_t*,uint32_t,uint32_t);
static DisplayReq_t LCD_Menu_L3_03(MenuKey_t,uint8_t,uint8_t,uint8_t*,uint32_t,uint32_t);
static DisplayReq_t LCD_Menu_L3_08(MenuKey_t key);
static void LCD_Menu_L3_08_Anime(void);
static const int32_t SnsrSize[] =
{
	3,6,10,15,20,25,32,40,50,65,80,100,125,150,200,250,300,350,400,450,500,
	600,700,800,900,1000,1200,1400,1600,1800,2000,2200,2400,2500,2600,2800,3000
};

static SubMenuInfo_t SubMenuInfo[] =
{
	{MENU_L3_00, MENU_L2_PARAMSET00, 1, (uint8_t*)&lcd_Language, TYPE_SELECT, LANG_ZH, LANG_MAX},
	{MENU_L3_01, MENU_L2_PARAMSET01, numof(lcd_Commaddr.data), lcd_Commaddr.data, TYPE_SETNUM, 1, 99},
	{MENU_L3_02, MENU_L2_PARAMSET02, 1, (uint8_t*)&lcd_baudrate, TYPE_SELECT, RATE_2400, RATE_MAX},
	{MENU_L3_03, MENU_L2_PARAMSET03, 1, &lcd_snsrsize, TYPE_SELECT, 0, numof(SnsrSize)},
	{MENU_L3_04, MENU_L2_PARAMSET04, 1, (uint8_t*)&lcd_flowunit, TYPE_SELECT, UNIT_LH, UNIT_MAX},
	{MENU_L3_05, MENU_L2_PARAMSET05, numof(lcd_flowrange.data), lcd_flowrange.data, TYPE_SETNUM, 0, 99999},
	{MENU_L3_06, MENU_L2_PARAMSET06, numof(lcd_damp.data), lcd_damp.data, TYPE_SETNUM, 1, 64},
	{MENU_L3_07, MENU_L2_PARAMSET07, 1, (uint8_t*)&lcd_flowdirect, TYPE_SELECT, DIR_FORWARD, DIR_MAX},
	{MENU_L3_08, MENU_L2_PARAMSET08, numof(lcd_flowzero.data), lcd_flowzero.data, TYPE_SETNUM, -9999, 9999},
	{MENU_L3_09, MENU_L2_PARAMSET09, numof(lcd_flowcutoff.data), lcd_flowcutoff.data, TYPE_SETNUM, 0, 59999},
	{MENU_L3_10, MENU_L2_PARAMSET10, 1, (uint8_t*)&lcd_cutoffena, TYPE_SELECT, PERMIT_ALLOW, PERMIT_MAX},
	{MENU_L3_11, MENU_L2_PARAMSET11, 1, (uint8_t*)&lcd_totalunit, TYPE_SELECT, TUNIT_0001L, TUNIT_MAX},
	{MENU_L3_12, MENU_L2_PARAMSET12, 1, (uint8_t*)&lcd_segmaNena, TYPE_SELECT, PERMIT_ALLOW, PERMIT_MAX},
	{MENU_L3_13, MENU_L2_PARAMSET13, 1, (uint8_t*)&lcd_analogtype, TYPE_SELECT, ATYPE_0TO10MA, ATYPE_MAX},
	{MENU_L3_14, MENU_L2_PARAMSET14, 1, (uint8_t*)&lcd_pulsetype, TYPE_SELECT, PTYPE_FREQUE, PTYPE_MAX},
	{MENU_L3_15, MENU_L2_PARAMSET15, 1, (uint8_t*)&lcd_pulsefact, TYPE_SELECT, TUNIT_0001L, TUNIT_MAX},
	{MENU_L3_16, MENU_L2_PARAMSET16, numof(lcd_frequemax.data), lcd_frequemax.data, TYPE_SETNUM, 1, 5999},
	{MENU_L3_17, MENU_L2_PARAMSET17, 1, (uint8_t*)&lcd_mtsnsrena, TYPE_SELECT, PERMIT_ALLOW, PERMIT_MAX},
	{MENU_L3_18, MENU_L2_PARAMSET18, numof(lcd_mtsnsrtrip.data), lcd_mtsnsrtrip.data, TYPE_SETNUM, 0, 59999},
	{MENU_L3_19, MENU_L2_PARAMSET19, 1, (uint8_t*)&lcd_almhiena, TYPE_SELECT, PERMIT_ALLOW, PERMIT_MAX},
	{MENU_L3_20, MENU_L2_PARAMSET20, numof(lcd_almhival.data), lcd_almhival.data, TYPE_SETNUM, 0, 59999},
	{MENU_L3_21, MENU_L2_PARAMSET21, 1, (uint8_t*)&lcd_almlowena, TYPE_SELECT, PERMIT_ALLOW, PERMIT_MAX},
	{MENU_L3_22, MENU_L2_PARAMSET22, numof(lcd_almlowval.data), lcd_almlowval.data, TYPE_SETNUM, 0, 59999},
	{MENU_L3_23, MENU_L2_PARAMSET23, 1, (uint8_t*)&lcd_coilalmena, TYPE_SELECT, PERMIT_ALLOW, PERMIT_MAX},
	{MENU_L3_24, MENU_L2_PARAMSET24, numof(PWInfo.data), PWInfo.data, TYPE_SETNUM, 0, 99999},
	{MENU_L3_25, MENU_L2_PARAMSET25, numof(lcd_sensorcode1.data), lcd_sensorcode1.data, TYPE_SETNUM, 0, 99999},
	{MENU_L3_26, MENU_L2_PARAMSET26, numof(lcd_sensorcode2.data), lcd_sensorcode2.data, TYPE_SETNUM, 0, 99999},
	{MENU_L3_27, MENU_L2_PARAMSET27, 1, (uint8_t*)&lcd_fieldtype, TYPE_SELECT, FTYPE_1, FTYPE_MAX},
	{MENU_L3_28, MENU_L2_PARAMSET28, numof(lcd_sensorfact.data), lcd_sensorfact.data, TYPE_SETNUM, 0, 59999},
	{MENU_L3_29, MENU_L2_PARAMSET29, numof(lcd_correctfact0.data), lcd_correctfact0.data, TYPE_SETNUM, 0, 20000},
	{MENU_L3_30, MENU_L2_PARAMSET30, numof(lcd_correctvalu0.data), lcd_correctvalu0.data, TYPE_SETNUM, 0, 100},
	{MENU_L3_31, MENU_L2_PARAMSET31, numof(lcd_correctfact1.data), lcd_correctfact1.data, TYPE_SETNUM, 0, 20000},
	{MENU_L3_32, MENU_L2_PARAMSET32, numof(lcd_correctvalu1.data), lcd_correctvalu1.data, TYPE_SETNUM, 0, 100},
	{MENU_L3_33, MENU_L2_PARAMSET33, numof(lcd_correctfact2.data), lcd_correctfact2.data, TYPE_SETNUM, 0, 20000},
	{MENU_L3_34, MENU_L2_PARAMSET34, numof(lcd_correctvalu2.data), lcd_correctvalu2.data, TYPE_SETNUM, 0, 100},
	{MENU_L3_35, MENU_L2_PARAMSET35, numof(lcd_correctfact3.data), lcd_correctfact3.data, TYPE_SETNUM, 0, 20000},
	{MENU_L3_36, MENU_L2_PARAMSET36, numof(lcd_correctvalu3.data), lcd_correctvalu3.data, TYPE_SETNUM, 0, 100},
	{MENU_L3_37, MENU_L2_PARAMSET37, numof(lcd_correctfact4.data), lcd_correctfact4.data, TYPE_SETNUM, 0, 20000},
	{MENU_L3_38, MENU_L2_PARAMSET38, numof(lcd_fwdtotal.data), lcd_fwdtotal.data, TYPE_SETNUM, 0, 999999999},
	{MENU_L3_39, MENU_L2_PARAMSET39, numof(lcd_revtotal.data), lcd_revtotal.data, TYPE_SETNUM, 0, 999999999},
	{MENU_L3_40, MENU_L2_PARAMSET40, numof(lcd_analogzero.data), lcd_analogzero.data, TYPE_SETNUM, 0, 19999},
	{MENU_L3_41, MENU_L2_PARAMSET41, numof(lcd_analogrange.data), lcd_analogrange.data, TYPE_SETNUM, 0, 39999},
	{MENU_L3_42, MENU_L2_PARAMSET42, numof(lcd_meterfact.data), lcd_meterfact.data, TYPE_SETNUM, 0, 59999},
	{MENU_L3_43, MENU_L2_PARAMSET43, numof(lcd_setdensity.data), lcd_setdensity.data, TYPE_SETNUM, 0, 59999},
	{MENU_L3_44, MENU_L2_PARAMSET44, numof(lcd_sendint.data), lcd_sendint.data, TYPE_SETNUM, 5, 1440},
};

void LCD_SubMenu_Init(void)
{
	uint8_t sub_menu = 0;
	int32_t value = 0;

	for(sub_menu = 0; sub_menu < numof(SubMenuInfo); sub_menu++){
		Lcd_Setting_GetValue(MENU_LEVEL_3, sub_menu, &value);
		if((SubMenuInfo[sub_menu].obj_min > value)||(SubMenuInfo[sub_menu].obj_max < value)){
			value = SubMenuInfo[sub_menu].obj_min;
			Lcd_Setting_SetValue(MENU_LEVEL_3, sub_menu, &value);
			DebugLog("Error:SubMenu[%d] setting is reset to the default value[%d]\n", sub_menu+1, value);
		}
		if(TYPE_SELECT == SubMenuInfo[sub_menu].type){
			*SubMenuInfo[sub_menu].obj = value;
			DebugLog("%s: SELECT-SubMenu[%d]:value[%d]\n",__FUNCTION__, sub_menu+1, value);
		}
		else if(TYPE_SETNUM == SubMenuInfo[sub_menu].type){
			DebugLog("%s: SETNUM-SubMenu[%d]:value[%d]\n",__FUNCTION__, sub_menu+1, value);
			if(MENU_L3_08 == sub_menu){
				if(0 > value){
					lcd_flowzero.sign = NUM_NEGATIVE;
					value = 0 - value;
				}
				else{
					lcd_flowzero.sign = NUM_POSITIVE;
				}
			}
			Lcd_NumToStr_Convert(SubMenuInfo[sub_menu].obj, &value, SubMenuInfo[sub_menu].obj_num);
		}
	}
}

uint8_t LCD_SubMenu_IdxGet(void)
{
	return lcd_submenu_idx;
}

DisplayReq_t LCD_Sub_Menu_L2(uint8_t menu, MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_OFF;

	DebugLog("%s: Menu[%d]:key[%d]\n",__FUNCTION__, menu, key);

	if (MENU_KEY_CONFIRM != key) return REQ_OFF;

	if((menu < numof(SubMenuInfo)) && (NULL != SubMenuInfo[menu].obj) && (menu == SubMenuInfo[menu].pre_menu)){
		if(TYPE_SELECT == SubMenuInfo[menu].type){
			disp_req = LCD_Menu_L2_Select(SubMenuInfo[menu].menu_id, SubMenuInfo[menu].obj);
		}
		else if(TYPE_SETNUM == SubMenuInfo[menu].type){
			disp_req = LCD_Menu_L2_SetNum(	SubMenuInfo[menu].menu_id,
											SubMenuInfo[menu].obj_num,
											SubMenuInfo[menu].obj);
		}
	}

	return disp_req;
}

DisplayReq_t LCD_Sub_Menu_L3(uint8_t menu, MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_OFF;

	DebugLog("%s: Menu[%d]:key[%d]\n",__FUNCTION__, menu, key);

	if (menu >= numof(SubMenuInfo)) return REQ_OFF;

	if((NULL != SubMenuInfo[menu].obj) && (menu == SubMenuInfo[menu].menu_id)){
		if(TYPE_SELECT == SubMenuInfo[menu].type){
			if(MENU_L3_03 == menu){
				disp_req = LCD_Menu_L3_03(		key,
												SubMenuInfo[menu].menu_id,
												SubMenuInfo[menu].pre_menu,
												SubMenuInfo[menu].obj,
												SubMenuInfo[menu].obj_min,
												SubMenuInfo[menu].obj_max);
			}
			else{
				disp_req = LCD_Menu_L3_Select(	key,
												SubMenuInfo[menu].menu_id,
												SubMenuInfo[menu].pre_menu,
												SubMenuInfo[menu].obj,
												SubMenuInfo[menu].obj_min,
												SubMenuInfo[menu].obj_max);
			}
		}
		else if(TYPE_SETNUM == SubMenuInfo[menu].type){
			if(MENU_L3_08 == menu){
				disp_req = LCD_Menu_L3_08(key);
			}
			else{
				disp_req = LCD_Menu_L3_SetNum(	key,
												SubMenuInfo[menu].menu_id,
												SubMenuInfo[menu].pre_menu,
												SubMenuInfo[menu].obj_num,
												SubMenuInfo[menu].obj,
												SubMenuInfo[menu].obj_min,
												SubMenuInfo[menu].obj_max);
			}
		}
	}

	return disp_req;
}

void LCD_Menu_L3_Anime(uint8_t menu_id)
{
	Stringinfo_t str;

	if (menu_id >= numof(SubMenuInfo)) return;

	if ((NULL != SubMenuInfo[menu_id].obj) && (menu_id == SubMenuInfo[menu_id].menu_id)){
		if (TYPE_SETNUM == SubMenuInfo[menu_id].type){
			if(MENU_L3_08 == menu_id){
				LCD_Menu_L3_08_Anime();
			}
			else{
				str.str_x = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_x;
				str.str_y = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_y;
				str.str_type = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_type;
				str.pstr = Menu_Number_Tbl[SubMenuInfo[menu_id].obj[lcd_cursor_pos]];
				LCD_Str_Draw(&str);
			}
		}
	}
}

static void LCD_Menu_L3_08_Anime(void)
{
	Stringinfo_t str;

	str.str_x = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_x;
	str.str_y = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_y;
	str.str_type = ((Stringinfo_t*)Current_Menu_Info->p_menu)[lcd_cursor_pos].str_type;
	if(numof(lcd_flowzero.data) == lcd_cursor_pos){
		if(NUM_NEGATIVE == lcd_flowzero.sign){
			str.pstr = str_en_minus;
		}
		else{
			str.pstr = str_en_plus;
		}
	}
	else{
		str.pstr = Menu_Number_Tbl[SubMenuInfo[MENU_L3_08].obj[lcd_cursor_pos]];
	}

	LCD_Str_Draw(&str);
}

static DisplayReq_t LCD_Menu_L2_Select(uint8_t menu_id, uint8_t* obj)
{
	uint8_t idx = 0;
	uint8_t str[4] = {0};
	int32_t value = 0;

	if(MENU_L3_03 == menu_id){
		lcd_submenu_idx = 0;
		LCD_Menu_SetLevel(MENU_LEVEL_3);
		LCD_Menu_SetID(menu_id);
		value = SnsrSize[*obj];
		Lcd_NumToStr_Convert(str, &value, numof(str));
		for(idx = 0; idx < numof(str); idx++){
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[idx]).pstr = Menu_Number_Tbl[str[idx]];;
		}
	}
	else{
		lcd_submenu_idx = *obj;
		LCD_Menu_SetLevel(MENU_LEVEL_3);
		LCD_Menu_SetID(menu_id);
	}

	LCD_Cursor_StatusSet(CURSOR_FREEZE);
	return REQ_ON;
}

static DisplayReq_t LCD_Menu_L2_SetNum(uint8_t menu_id, uint8_t obj_num, uint8_t* obj)
{
	uint8_t idx = 0;

	lcd_submenu_idx = 0;
	LCD_Menu_SetLevel(MENU_LEVEL_3);
	LCD_Menu_SetID(menu_id);
	LCD_Cursor_StatusSet(CURSOR_VALID);
	for(idx = 0; idx < obj_num; idx++){
		(((Stringinfo_t*)Current_Menu_Info->p_menu)[idx]).pstr = Menu_Number_Tbl[obj[idx]];
	}
	lcd_cursor_pos = obj_num - 1;

	if(MENU_L3_05 == menu_id){
		switch(lcd_flowunit){
		case UNIT_LH:
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_x = 96;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_type = STR_EN;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).pstr = str_en_L;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num+1]).pstr = str_en_h;
			break;
		case UNIT_LM:
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_x = 96;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_type = STR_EN;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).pstr = str_en_L;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num+1]).pstr = str_en_m;
			break;
		case UNIT_LS:
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_x = 96;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_type = STR_EN;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).pstr = str_en_L;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num+1]).pstr = str_en_s;
			break;
		case UNIT_M3H:
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_x = 88;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_type = STR_ZH;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).pstr = str_pic_unit;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num+1]).pstr = str_en_h;
			break;
		case UNIT_M3M:
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_x = 88;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_type = STR_ZH;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).pstr = str_pic_unit;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num+1]).pstr = str_en_m;
			break;
		case UNIT_M3S:
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_x = 88;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).str_type = STR_ZH;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).pstr = str_pic_unit;
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num+1]).pstr = str_en_s;
			break;
		default:
			break;
		}
	}
	else if(MENU_L3_08 == menu_id){
		if(NUM_NEGATIVE == lcd_flowzero.sign){
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).pstr = str_en_minus;
		}
		else{
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[obj_num]).pstr = str_en_plus;
		}
	}
	return REQ_ON;
}

static DisplayReq_t LCD_Menu_L3_Select(MenuKey_t key,
										uint8_t menu_id,
										uint8_t pre_menu,
										uint8_t* obj,
										uint32_t obj_min,
										uint32_t obj_max)
{
	DisplayReq_t disp_req = REQ_ON;
	int32_t value = 0;

	DebugLog("%s:key[%d], menu_id[%d], obj_min[%d], obj_max[%d]\n",
			__FUNCTION__, key, menu_id, obj_min, obj_max);

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(obj_min == *obj){
			*obj = obj_max;
		}
		*obj -= 1;
		lcd_submenu_idx = *obj;
		LCD_Menu_SetID(menu_id);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
		break;
	case MENU_KEY_UP:
		*obj += 1;
		if(obj_max == *obj){
			*obj = obj_min;
		}
		lcd_submenu_idx = *obj;
		LCD_Menu_SetID(menu_id);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
		break;
	case MENU_KEY_CONFIRM:
		value = *obj;
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &value);
		LCD_Menu_SetLevel(MENU_LEVEL_2);
		LCD_Menu_SetID(pre_menu);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
		break;
	case MENU_KEY_UNITCONFIRM:
		value = *obj;
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &value);
		LCD_AutoMeasure_Transfer(MENU_L1_PARAMSET);
		break;
	case MENU_KEY_LONGCONFIRM:
		value = *obj;
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &value);
		LCD_AutoMeasure_Transfer(MENU_L0_AUTOMEASURE);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L3_SetNum(MenuKey_t key,
										uint8_t menu_id,
										uint8_t pre_menu,
										uint8_t obj_num,
										uint8_t* obj,
										uint32_t obj_min,
										uint32_t obj_max)
{
	DisplayReq_t disp_req = REQ_ON;
	int32_t check_num = 0;

	DebugLog("%s:key[%d], menu_id[%d], obj_min[%d], obj_max[%d]\n",
			__FUNCTION__, key, menu_id, obj_min, obj_max);

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(0 < obj[lcd_cursor_pos]){
			obj[lcd_cursor_pos]--;
		}
		else{
			if(0 == lcd_cursor_pos){
				obj[lcd_cursor_pos] = Lcd_HighestNum_Get(obj_max);
			}
			else{
				obj[lcd_cursor_pos] = 9;
			}
		}
		break;
	case MENU_KEY_UP:
		if(0 == lcd_cursor_pos){
			if(Lcd_HighestNum_Get(obj_max) > obj[lcd_cursor_pos]){
				obj[lcd_cursor_pos]++;
			}
			else{
				obj[lcd_cursor_pos] = 0;
			}
		}
		else{
			if(9 > obj[lcd_cursor_pos]){
				obj[lcd_cursor_pos]++;
			}
			else{
				obj[lcd_cursor_pos] = 0;
			}
		}
		break;
	case MENU_KEY_CONFIRM:
		Lcd_StrToNum_Convert(obj, &check_num, obj_num);
		if(check_num < obj_min){
			check_num = obj_min;
		}
		if(check_num > obj_max){
			check_num = obj_max;
		}
		Lcd_NumToStr_Convert(obj, &check_num, obj_num);
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &check_num);
		LCD_Menu_SetLevel(MENU_LEVEL_2);
		LCD_Menu_SetID(pre_menu);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
		break;
	case MENU_KEY_UNITDOWN:
		if(0 == lcd_cursor_pos){
			lcd_cursor_pos = obj_num;
		}
		lcd_cursor_pos--;
		LCD_Cursor_StatusSet(CURSOR_LEFT);
		break;
	case MENU_KEY_UNITUP:
		lcd_cursor_pos++;
		if(obj_num <= lcd_cursor_pos){
			lcd_cursor_pos = 0;
		}
		LCD_Cursor_StatusSet(CURSOR_RIGHT);
		break;
	case MENU_KEY_UNITCONFIRM:
		Lcd_StrToNum_Convert(obj, &check_num, obj_num);
		if(check_num < obj_min){
			check_num = obj_min;
		}
		if(check_num > obj_max){
			check_num = obj_max;
		}
		Lcd_NumToStr_Convert(obj, &check_num, obj_num);
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &check_num);
		LCD_AutoMeasure_Transfer(MENU_L1_PARAMSET);
		break;
	case MENU_KEY_LONGCONFIRM:
		Lcd_StrToNum_Convert(obj, &check_num, obj_num);
		if(check_num < obj_min){
			check_num = obj_min;
		}
		if(check_num > obj_max){
			check_num = obj_max;
		}
		Lcd_NumToStr_Convert(obj, &check_num, obj_num);
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &check_num);
		LCD_AutoMeasure_Transfer(MENU_L0_AUTOMEASURE);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L3_08(MenuKey_t key)
{
	DisplayReq_t disp_req = REQ_ON;
	int32_t check_num = 0;

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(numof(lcd_flowzero.data) == lcd_cursor_pos){
			if(NUM_NEGATIVE == lcd_flowzero.sign){
				lcd_flowzero.sign = NUM_POSITIVE;
			}
			else{
				lcd_flowzero.sign = NUM_NEGATIVE;
			}
		}
		else if(numof(lcd_flowzero.data) > lcd_cursor_pos){
			if(0 < lcd_flowzero.data[lcd_cursor_pos]){
				lcd_flowzero.data[lcd_cursor_pos]--;
			}
			else{
				lcd_flowzero.data[lcd_cursor_pos] = 9;
			}
		}
		break;
	case MENU_KEY_UP:
		if(numof(lcd_flowzero.data) == lcd_cursor_pos){
			if(NUM_NEGATIVE == lcd_flowzero.sign){
				lcd_flowzero.sign = NUM_POSITIVE;
			}
			else{
				lcd_flowzero.sign = NUM_NEGATIVE;
			}
		}
		else if(numof(lcd_flowzero.data) > lcd_cursor_pos){
			if(9 > lcd_flowzero.data[lcd_cursor_pos]){
				lcd_flowzero.data[lcd_cursor_pos]++;
			}
			else{
				lcd_flowzero.data[lcd_cursor_pos] = 0;
			}
		}
		break;
	case MENU_KEY_CONFIRM:
		Lcd_StrToNum_Convert(lcd_flowzero.data, &check_num, numof(lcd_flowzero.data));
		if(NUM_NEGATIVE == lcd_flowzero.sign){
			check_num = 0 - check_num;
		}
		Lcd_Setting_SetValue(MENU_LEVEL_3, MENU_L3_08, &check_num);
		LCD_Menu_SetLevel(MENU_LEVEL_2);
		LCD_Menu_SetID(MENU_L2_PARAMSET08);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
		break;
	case MENU_KEY_UNITDOWN:
		if(0 == lcd_cursor_pos){
			lcd_cursor_pos = numof(lcd_flowzero.data) + 1;
		}
		lcd_cursor_pos--;
		LCD_Cursor_StatusSet(CURSOR_LEFT);
		break;
	case MENU_KEY_UNITUP:
		lcd_cursor_pos++;
		if((numof(lcd_flowzero.data) + 1) <= lcd_cursor_pos){
			lcd_cursor_pos = 0;
		}
		LCD_Cursor_StatusSet(CURSOR_RIGHT);
		break;
	case MENU_KEY_UNITCONFIRM:
		Lcd_StrToNum_Convert(lcd_flowzero.data, &check_num, numof(lcd_flowzero.data));
		if(NUM_NEGATIVE == lcd_flowzero.sign){
			check_num = 0 - check_num;
		}
		Lcd_Setting_SetValue(MENU_LEVEL_3, MENU_L3_08, &check_num);
		LCD_AutoMeasure_Transfer(MENU_L1_PARAMSET);
		break;
	case MENU_KEY_LONGCONFIRM:
		Lcd_StrToNum_Convert(lcd_flowzero.data, &check_num, numof(lcd_flowzero.data));
		if(NUM_NEGATIVE == lcd_flowzero.sign){
			check_num = 0 - check_num;
		}
		Lcd_Setting_SetValue(MENU_LEVEL_3, MENU_L3_08, &check_num);
		LCD_AutoMeasure_Transfer(MENU_L0_AUTOMEASURE);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}

static DisplayReq_t LCD_Menu_L3_03(MenuKey_t key,
										uint8_t menu_id,
										uint8_t pre_menu,
										uint8_t* obj,
										uint32_t obj_min,
										uint32_t obj_max)
{
	DisplayReq_t disp_req = REQ_ON;
	int32_t value = 0;
	uint8_t str[4] = {0};
	uint8_t idx = 0;

	switch(key)
	{
	case MENU_KEY_DOWN:
		if(obj_min == *obj){
			*obj = obj_max;
		}
		*obj -= 1;
		value = SnsrSize[*obj];
		Lcd_NumToStr_Convert(str, &value, numof(str));
		for(idx = 0; idx < numof(str); idx++){
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[idx]).pstr = Menu_Number_Tbl[str[idx]];;
		}
		LCD_Menu_SetID(menu_id);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
		break;
	case MENU_KEY_UP:
		*obj += 1;
		if(obj_max == *obj){
			*obj = obj_min;
		}
		value = SnsrSize[*obj];
		Lcd_NumToStr_Convert(str, &value, numof(str));
		for(idx = 0; idx < numof(str); idx++){
			(((Stringinfo_t*)Current_Menu_Info->p_menu)[idx]).pstr = Menu_Number_Tbl[str[idx]];;
		}
		LCD_Menu_SetID(menu_id);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
		break;
	case MENU_KEY_CONFIRM:
		value = *obj;
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &value);
		LCD_Menu_SetLevel(MENU_LEVEL_2);
		LCD_Menu_SetID(pre_menu);
		LCD_Cursor_StatusSet(CURSOR_FREEZE);
		break;
	case MENU_KEY_UNITCONFIRM:
		value = *obj;
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &value);
		LCD_AutoMeasure_Transfer(MENU_L1_PARAMSET);
		break;
	case MENU_KEY_LONGCONFIRM:
		value = *obj;
		Lcd_Setting_SetValue(MENU_LEVEL_3, menu_id, &value);
		LCD_AutoMeasure_Transfer(MENU_L0_AUTOMEASURE);
		break;
	default:
		disp_req = REQ_OFF;
		break;
	}

	return disp_req;
}
