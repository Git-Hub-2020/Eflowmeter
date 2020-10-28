#include "common.h"
#include "lcd_screen_data.h"
#include "lcd_string_en.h"
#include "lcd_string_zh.h"

/********************************************
 *     各画面构成信息
 ********************************************/

/* 初始画面 */
Stringinfo_t Menu_Init_zh[] =
{
	{56, 0, STR_EN, str_en_0},
	{72, 0, STR_EN, str_en_0},
	{80, 0, STR_EN, str_en_0},
	{64, 0, STR_EN, str_en_dot},
	{24, 0, STR_EN, str_en_V},
	{32, 0, STR_EN, str_en_e},
	{40, 0, STR_EN, str_en_r},
	{24, 2, STR_ZH, str_zh_dian_1},
	{40, 2, STR_ZH, str_zh_ci},
	{56, 2, STR_ZH, str_zh_liu},
	{72, 2, STR_ZH, str_zh_liang},
	{88, 2, STR_ZH, str_zh_ji_1}
};

/* 初始画面Init */
Stringinfo_t Menu_Init_en[] =
{
	{56, 0, STR_EN, str_en_0},
	{72, 0, STR_EN, str_en_0},
	{80, 0, STR_EN, str_en_0},
	{64, 0, STR_EN, str_en_dot},
	{24, 0, STR_EN, str_en_V},
	{32, 0, STR_EN, str_en_e},
	{40, 0, STR_EN, str_en_r},
	{24, 2, STR_EN, str_en_S},
	{32, 2, STR_EN, str_en_y},
	{40, 2, STR_EN, str_en_s},
	{48, 2, STR_EN, str_en_t},
	{56, 2, STR_EN, str_en_e},
	{64, 2, STR_EN, str_en_m},
	{80, 2, STR_EN, str_en_I},
	{88, 2, STR_EN, str_en_n},
	{96, 2, STR_EN, str_en_i},
	{104, 2, STR_EN, str_en_t}
};

/* 初始画面(....) */
const Stringinfo_t Menu_Init_Dot[] =
{
	{40, 4, STR_EN, str_en_dot},
	{48, 4, STR_EN, str_en_dot},
	{56, 4, STR_EN, str_en_dot},
	{64, 4, STR_EN, str_en_dot}
};

/* 自动测量画面 */
Stringinfo_t Menu_AutoMeasure[] =
{
	{32, 0, STR_LARGE, str_en_0_large},
	{48, 0, STR_LARGE, str_en_dot_large},
	{64, 0, STR_LARGE, str_en_0_large},
	{80, 0, STR_LARGE, str_en_0_large},
	{96, 0, STR_LARGE, str_en_0_large},
	{112, 0, STR_LARGE, str_en_0_large},
	{0, 4, STR_ZH, str_pic_alerticon},
	{16, 4, STR_EN, str_en_S},
	{24, 4, STR_EN, str_en_Y},
	{32, 4, STR_EN, str_en_S},
	{96, 4, STR_ZH, str_pic_unit},
	{112, 4, STR_EN, str_en_line_1},
	{120, 4, STR_EN, str_en_h},
	{0, 6, STR_ZH, str_pic_flowicon},
	{72, 6, STR_EN, str_en_0},
	{80, 6, STR_EN, str_en_dot},
	{88, 6, STR_EN, str_en_0},
	{96, 6, STR_EN, str_en_0},
	{104, 6, STR_ZH, str_pic_unit}
};

/* 密码 */
Stringinfo_t Menu_Password_zh[] =
{
	{44, 4, STR_EN, str_en_0},
	{52, 4, STR_EN, str_en_0},
	{60, 4, STR_EN, str_en_0},
	{68, 4, STR_EN, str_en_0},
	{76, 4, STR_EN, str_en_0},
	{48, 2, STR_ZH, str_zh_mi},
	{64, 2, STR_ZH, str_zh_ma}
};

/* Password */
Stringinfo_t Menu_Password_en[] =
{
	{44, 4, STR_EN, str_en_0},
	{52, 4, STR_EN, str_en_0},
	{60, 4, STR_EN, str_en_0},
	{68, 4, STR_EN, str_en_0},
	{76, 4, STR_EN, str_en_0},
	{32, 2, STR_EN, str_en_P},
	{40, 2, STR_EN, str_en_a},
	{48, 2, STR_EN, str_en_s},
	{56, 2, STR_EN, str_en_s},
	{64, 2, STR_EN, str_en_w},
	{72, 2, STR_EN, str_en_o},
	{80, 2, STR_EN, str_en_r},
	{88, 2, STR_EN, str_en_d}
};

/* 参数设置 */
const Stringinfo_t Menu_ParamSet_zh[] =
{
	{32, 2, STR_ZH, str_zh_can},
	{48, 2, STR_ZH, str_zh_shu},
	{64, 2, STR_ZH, str_zh_she},
	{80, 2, STR_ZH, str_zh_zhi_1}
};

/* Parament Set */
const Stringinfo_t Menu_ParamSet_en[] =
{
	{16, 2, STR_EN, str_en_P},
	{24, 2, STR_EN, str_en_a},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_a},
	{48, 2, STR_EN, str_en_m},
	{56, 2, STR_EN, str_en_e},
	{64, 2, STR_EN, str_en_n},
	{72, 2, STR_EN, str_en_t},
	{88, 2, STR_EN, str_en_S},
	{96, 2, STR_EN, str_en_e},
	{104, 2, STR_EN, str_en_t}
};

/* 总量清零 */
const Stringinfo_t Menu_TotalClr_zh[] =
{
	{32, 2, STR_ZH, str_zh_zong},
	{48, 2, STR_ZH, str_zh_liang},
	{64, 2, STR_ZH, str_zh_qing},
	{80, 2, STR_ZH, str_zh_ling}
};

/* Total clear */
const Stringinfo_t Menu_TotalClr_en[] =
{
	{24, 2, STR_EN, str_en_T},
	{32, 2, STR_EN, str_en_o},
	{40, 2, STR_EN, str_en_t},
	{48, 2, STR_EN, str_en_a},
	{56, 2, STR_EN, str_en_l},
	{72, 2, STR_EN, str_en_c},
	{80, 2, STR_EN, str_en_l},
	{88, 2, STR_EN, str_en_e},
	{96, 2, STR_EN, str_en_a},
	{104, 2, STR_EN, str_en_r}
};

/* 01_语言 */
const Stringinfo_t Menu_ParamSet_01_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{48, 2, STR_ZH, str_zh_yu},
	{64, 2, STR_ZH, str_zh_yan}
};

/* 01_Language */
const Stringinfo_t Menu_ParamSet_01_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{32, 2, STR_EN, str_en_L},
	{40, 2, STR_EN, str_en_a},
	{48, 2, STR_EN, str_en_n},
	{56, 2, STR_EN, str_en_g},
	{64, 2, STR_EN, str_en_u},
	{72, 2, STR_EN, str_en_a},
	{80, 2, STR_EN, str_en_g},
	{88, 2, STR_EN, str_en_e},
};

/* 02_仪表通讯地址 */
const Stringinfo_t Menu_ParamSet_02_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{16, 2, STR_ZH, str_zh_yi},
	{32, 2, STR_ZH, str_zh_biao},
	{48, 2, STR_ZH, str_zh_tong},
	{64, 2, STR_ZH, str_zh_xun},
	{80, 2, STR_ZH, str_zh_di},
	{96, 2, STR_ZH, str_zh_zhi_2}
};

/* 02_Commaddress */
const Stringinfo_t Menu_ParamSet_02_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{24, 2, STR_EN, str_en_C},
	{32, 2, STR_EN, str_en_o},
	{40, 2, STR_EN, str_en_m},
	{48, 2, STR_EN, str_en_m},
	{56, 2, STR_EN, str_en_a},
	{64, 2, STR_EN, str_en_d},
	{72, 2, STR_EN, str_en_d},
	{80, 2, STR_EN, str_en_r},
	{88, 2, STR_EN, str_en_e},
	{96, 2, STR_EN, str_en_s},
	{104, 2, STR_EN, str_en_s}
};

/* 03_仪表通讯速度 */
const Stringinfo_t Menu_ParamSet_03_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{16, 2, STR_ZH, str_zh_yi},
	{32, 2, STR_ZH, str_zh_biao},
	{48, 2, STR_ZH, str_zh_tong},
	{64, 2, STR_ZH, str_zh_xun},
	{80, 2, STR_ZH, str_zh_su},
	{96, 2, STR_ZH, str_zh_du}
};

/* 03_Baud Rate */
const Stringinfo_t Menu_ParamSet_03_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{32, 2, STR_EN, str_en_B},
	{40, 2, STR_EN, str_en_a},
	{48, 2, STR_EN, str_en_u},
	{56, 2, STR_EN, str_en_d},
	{72, 2, STR_EN, str_en_R},
	{80, 2, STR_EN, str_en_a},
	{88, 2, STR_EN, str_en_t},
	{96, 2, STR_EN, str_en_e}
};

/* 04_测量管道口径 */
const Stringinfo_t Menu_ParamSet_04_zh[] =
{
	{0, 0, STR_EN, str_en_4},
	{16, 2, STR_ZH, str_zh_ce},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_guan},
	{64, 2, STR_ZH, str_zh_dao},
	{80, 2, STR_ZH, str_zh_kou},
	{96, 2, STR_ZH, str_zh_jing}
};

/* 04_Snsr Size */
const Stringinfo_t Menu_ParamSet_04_en[] =
{
	{0, 0, STR_EN, str_en_4},
	{32, 2, STR_EN, str_en_S},
	{40, 2, STR_EN, str_en_n},
	{48, 2, STR_EN, str_en_s},
	{56, 2, STR_EN, str_en_r},
	{72, 2, STR_EN, str_en_S},
	{80, 2, STR_EN, str_en_i},
	{88, 2, STR_EN, str_en_z},
	{96, 2, STR_EN, str_en_e}
};

/* 05_流量单位 */
const Stringinfo_t Menu_ParamSet_05_zh[] =
{
	{0, 0, STR_EN, str_en_5},
	{32, 2, STR_ZH, str_zh_liu},
	{48, 2, STR_ZH, str_zh_liang},
	{64, 2, STR_ZH, str_zh_dan},
	{80, 2, STR_ZH, str_zh_wei}
};

/* 05_Flow Unit */
const Stringinfo_t Menu_ParamSet_05_en[] =
{
	{0, 0, STR_EN, str_en_5},
	{32, 2, STR_EN, str_en_F},
	{40, 2, STR_EN, str_en_l},
	{48, 2, STR_EN, str_en_o},
	{56, 2, STR_EN, str_en_w},
	{72, 2, STR_EN, str_en_U},
	{80, 2, STR_EN, str_en_n},
	{88, 2, STR_EN, str_en_i},
	{96, 2, STR_EN, str_en_t}
};

/* 06_仪表量程设置 */
const Stringinfo_t Menu_ParamSet_06_zh[] =
{
	{0, 0, STR_EN, str_en_6},
	{16, 2, STR_ZH, str_zh_yi},
	{32, 2, STR_ZH, str_zh_biao},
	{48, 2, STR_ZH, str_zh_liang},
	{64, 2, STR_ZH, str_zh_cheng},
	{80, 2, STR_ZH, str_zh_she},
	{96, 2, STR_ZH, str_zh_zhi_1}
};

/* 06_Flow Range */
const Stringinfo_t Menu_ParamSet_06_en[] =
{
	{0, 0, STR_EN, str_en_6},
	{24, 2, STR_EN, str_en_F},
	{32, 2, STR_EN, str_en_l},
	{40, 2, STR_EN, str_en_o},
	{48, 2, STR_EN, str_en_w},
	{64, 2, STR_EN, str_en_R},
	{72, 2, STR_EN, str_en_a},
	{80, 2, STR_EN, str_en_n},
	{88, 2, STR_EN, str_en_g},
	{96, 2, STR_EN, str_en_e}
};

/* 07_测量阻尼时间 */
const Stringinfo_t Menu_ParamSet_07_zh[] =
{
	{0, 0, STR_EN, str_en_7},
	{16, 2, STR_ZH, str_zh_ce},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_zu},
	{64, 2, STR_ZH, str_zh_ni},
	{80, 2, STR_ZH, str_zh_shi},
	{96, 2, STR_ZH, str_zh_jian}
};

/* 07_Damp */
const Stringinfo_t Menu_ParamSet_07_en[] =
{
	{0, 0, STR_EN, str_en_7},
	{48, 2, STR_EN, str_en_D},
	{56, 2, STR_EN, str_en_a},
	{64, 2, STR_EN, str_en_m},
	{72, 2, STR_EN, str_en_p}
};

/* 08_流量方向择项 */
const Stringinfo_t Menu_ParamSet_08_zh[] =
{
	{0, 0, STR_EN, str_en_8},
	{16, 2, STR_ZH, str_zh_liu},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_fang},
	{64, 2, STR_ZH, str_zh_xiang},
	{80, 2, STR_ZH, str_zh_ze},
	{96, 2, STR_ZH, str_zh_xiang_1}
};

/* 08_Flow Direct */
const Stringinfo_t Menu_ParamSet_08_en[] =
{
	{0, 0, STR_EN, str_en_8},
	{24, 2, STR_EN, str_en_F},
	{32, 2, STR_EN, str_en_l},
	{40, 2, STR_EN, str_en_o},
	{48, 2, STR_EN, str_en_w},
	{64, 2, STR_EN, str_en_D},
	{72, 2, STR_EN, str_en_i},
	{80, 2, STR_EN, str_en_r},
	{88, 2, STR_EN, str_en_e},
	{96, 2, STR_EN, str_en_c},
	{104, 2, STR_EN, str_en_t}
};

/* 09_流量零点修正 */
const Stringinfo_t Menu_ParamSet_09_zh[] =
{
	{0, 0, STR_EN, str_en_9},
	{16, 2, STR_ZH, str_zh_liu},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_ling},
	{64, 2, STR_ZH, str_zh_dian},
	{80, 2, STR_ZH, str_zh_xiu},
	{96, 2, STR_ZH, str_zh_zheng}
};

/* 09_Flow Zero */
const Stringinfo_t Menu_ParamSet_09_en[] =
{
	{0, 0, STR_EN, str_en_9},
	{32, 2, STR_EN, str_en_F},
	{40, 2, STR_EN, str_en_l},
	{48, 2, STR_EN, str_en_o},
	{56, 2, STR_EN, str_en_w},
	{72, 2, STR_EN, str_en_Z},
	{80, 2, STR_EN, str_en_e},
	{88, 2, STR_EN, str_en_r},
	{96, 2, STR_EN, str_en_o}
};

/* 10_小信号切除点 */
const Stringinfo_t Menu_ParamSet_10_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_0},
	{16, 2, STR_ZH, str_zh_xiao},
	{32, 2, STR_ZH, str_zh_xin},
	{48, 2, STR_ZH, str_zh_hao},
	{64, 2, STR_ZH, str_zh_qie},
	{80, 2, STR_ZH, str_zh_chu},
	{96, 2, STR_ZH, str_zh_dian}
};

/* 10_Flow Cutoff */
const Stringinfo_t Menu_ParamSet_10_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_0},
	{24, 2, STR_EN, str_en_F},
	{32, 2, STR_EN, str_en_l},
	{40, 2, STR_EN, str_en_o},
	{48, 2, STR_EN, str_en_w},
	{64, 2, STR_EN, str_en_C},
	{72, 2, STR_EN, str_en_u},
	{80, 2, STR_EN, str_en_t},
	{88, 2, STR_EN, str_en_o},
	{96, 2, STR_EN, str_en_f},
	{104, 2, STR_EN, str_en_f}
};

/* 11_允许切除显示 */
const Stringinfo_t Menu_ParamSet_11_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_1},
	{16, 2, STR_ZH, str_zh_yun},
	{32, 2, STR_ZH, str_zh_xu},
	{48, 2, STR_ZH, str_zh_qie},
	{64, 2, STR_ZH, str_zh_chu},
	{80, 2, STR_ZH, str_zh_xian},
	{96, 2, STR_ZH, str_zh_shi_1}
};

/* 11_Cutoff Ena */
const Stringinfo_t Menu_ParamSet_11_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_1},
	{24, 2, STR_EN, str_en_C},
	{32, 2, STR_EN, str_en_u},
	{40, 2, STR_EN, str_en_t},
	{48, 2, STR_EN, str_en_o},
	{56, 2, STR_EN, str_en_f},
	{64, 2, STR_EN, str_en_f},
	{80, 2, STR_EN, str_en_E},
	{88, 2, STR_EN, str_en_n},
	{96, 2, STR_EN, str_en_a}
};

/* 12_流量积算单位 */
const Stringinfo_t Menu_ParamSet_12_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_2},
	{16, 2, STR_ZH, str_zh_liu},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_ji},
	{64, 2, STR_ZH, str_zh_suan},
	{80, 2, STR_ZH, str_zh_dan},
	{96, 2, STR_ZH, str_zh_wei}
};

/* 12_Total Unit */
const Stringinfo_t Menu_ParamSet_12_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_2},
	{24, 2, STR_EN, str_en_T},
	{32, 2, STR_EN, str_en_o},
	{40, 2, STR_EN, str_en_t},
	{48, 2, STR_EN, str_en_a},
	{56, 2, STR_EN, str_en_l},
	{72, 2, STR_EN, str_en_U},
	{80, 2, STR_EN, str_en_n},
	{88, 2, STR_EN, str_en_i},
	{96, 2, STR_EN, str_en_t}
};

/* 13_反向输出允许 */
const Stringinfo_t Menu_ParamSet_13_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_3},
	{16, 2, STR_ZH, str_zh_fan},
	{32, 2, STR_ZH, str_zh_xiang},
	{48, 2, STR_ZH, str_zh_shu_1},
	{64, 2, STR_ZH, str_zh_chu_1},
	{80, 2, STR_ZH, str_zh_yun},
	{96, 2, STR_ZH, str_zh_xu}
};

/* 13_SegmaN Ena */
const Stringinfo_t Menu_ParamSet_13_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_3},
	{24, 2, STR_EN, str_en_S},
	{32, 2, STR_EN, str_en_e},
	{40, 2, STR_EN, str_en_g},
	{48, 2, STR_EN, str_en_m},
	{56, 2, STR_EN, str_en_a},
	{64, 2, STR_EN, str_en_N},
	{80, 2, STR_EN, str_en_E},
	{88, 2, STR_EN, str_en_n},
	{96, 2, STR_EN, str_en_a}
};

/* 14_电流输出类型 */
const Stringinfo_t Menu_ParamSet_14_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_4},
	{16, 2, STR_ZH, str_zh_dian_1},
	{32, 2, STR_ZH, str_zh_liu},
	{48, 2, STR_ZH, str_zh_shu_1},
	{64, 2, STR_ZH, str_zh_chu_1},
	{80, 2, STR_ZH, str_zh_lei},
	{96, 2, STR_ZH, str_zh_xing}
};

/* 14_Analog Type */
const Stringinfo_t Menu_ParamSet_14_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_4},
	{24, 2, STR_EN, str_en_A},
	{32, 2, STR_EN, str_en_n},
	{40, 2, STR_EN, str_en_a},
	{48, 2, STR_EN, str_en_l},
	{56, 2, STR_EN, str_en_o},
	{64, 2, STR_EN, str_en_g},
	{80, 2, STR_EN, str_en_T},
	{88, 2, STR_EN, str_en_y},
	{96, 2, STR_EN, str_en_p},
	{104, 2, STR_EN, str_en_e}
};

/* 15_脉冲输出方式 */
const Stringinfo_t Menu_ParamSet_15_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_5},
	{16, 2, STR_ZH, str_zh_mai},
	{32, 2, STR_ZH, str_zh_chong},
	{48, 2, STR_ZH, str_zh_shu_1},
	{64, 2, STR_ZH, str_zh_chu_1},
	{80, 2, STR_ZH, str_zh_fang},
	{96, 2, STR_ZH, str_zh_shi_2}
};

/* 15_Pulse Type */
const Stringinfo_t Menu_ParamSet_15_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_5},
	{24, 2, STR_EN, str_en_P},
	{32, 2, STR_EN, str_en_u},
	{40, 2, STR_EN, str_en_l},
	{48, 2, STR_EN, str_en_s},
	{56, 2, STR_EN, str_en_e},
	{72, 2, STR_EN, str_en_T},
	{80, 2, STR_EN, str_en_y},
	{88, 2, STR_EN, str_en_p},
	{96, 2, STR_EN, str_en_e}
};

/* 16_脉冲单位当量 */
const Stringinfo_t Menu_ParamSet_16_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_6},
	{16, 2, STR_ZH, str_zh_mai},
	{32, 2, STR_ZH, str_zh_chong},
	{48, 2, STR_ZH, str_zh_dan},
	{64, 2, STR_ZH, str_zh_wei},
	{80, 2, STR_ZH, str_zh_dang},
	{96, 2, STR_ZH, str_zh_liang}
};

/* 16_Pulse Fact */
const Stringinfo_t Menu_ParamSet_16_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_6},
	{24, 2, STR_EN, str_en_P},
	{32, 2, STR_EN, str_en_u},
	{40, 2, STR_EN, str_en_l},
	{48, 2, STR_EN, str_en_s},
	{56, 2, STR_EN, str_en_e},
	{72, 2, STR_EN, str_en_F},
	{80, 2, STR_EN, str_en_a},
	{88, 2, STR_EN, str_en_c},
	{96, 2, STR_EN, str_en_t}
};

/* 17_频率输出范围 */
const Stringinfo_t Menu_ParamSet_17_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_7},
	{16, 2, STR_ZH, str_zh_pin},
	{32, 2, STR_ZH, str_zh_lv},
	{48, 2, STR_ZH, str_zh_shu_1},
	{64, 2, STR_ZH, str_zh_chu_1},
	{80, 2, STR_ZH, str_zh_fan_1},
	{96, 2, STR_ZH, str_zh_wei_1}
};

/* 17_Freque Max */
const Stringinfo_t Menu_ParamSet_17_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_7},
	{24, 2, STR_EN, str_en_F},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_e},
	{48, 2, STR_EN, str_en_q},
	{56, 2, STR_EN, str_en_u},
	{64, 2, STR_EN, str_en_e},
	{80, 2, STR_EN, str_en_M},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_x}
};

/* 18_空管报警允许 */
const Stringinfo_t Menu_ParamSet_18_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_8},
	{16, 2, STR_ZH, str_zh_kong},
	{32, 2, STR_ZH, str_zh_guan},
	{48, 2, STR_ZH, str_zh_bao},
	{64, 2, STR_ZH, str_zh_jing_1},
	{80, 2, STR_ZH, str_zh_yun},
	{96, 2, STR_ZH, str_zh_xu}
};

/* 18_Mtsnsr Ena */
const Stringinfo_t Menu_ParamSet_18_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_8},
	{24, 2, STR_EN, str_en_M},
	{32, 2, STR_EN, str_en_t},
	{40, 2, STR_EN, str_en_s},
	{48, 2, STR_EN, str_en_n},
	{56, 2, STR_EN, str_en_s},
	{64, 2, STR_EN, str_en_r},
	{80, 2, STR_EN, str_en_E},
	{88, 2, STR_EN, str_en_n},
	{96, 2, STR_EN, str_en_a}
};

/* 19_空管报警阈值 */
const Stringinfo_t Menu_ParamSet_19_zh[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_9},
	{16, 2, STR_ZH, str_zh_kong},
	{32, 2, STR_ZH, str_zh_guan},
	{48, 2, STR_ZH, str_zh_bao},
	{64, 2, STR_ZH, str_zh_jing_1},
	{80, 2, STR_ZH, str_zh_yu_1},
	{96, 2, STR_ZH, str_zh_zhi}
};

/* 19_Mtsnsr Trip */
const Stringinfo_t Menu_ParamSet_19_en[] =
{
	{0, 0, STR_EN, str_en_1},
	{8, 0, STR_EN, str_en_9},
	{24, 2, STR_EN, str_en_M},
	{32, 2, STR_EN, str_en_t},
	{40, 2, STR_EN, str_en_s},
	{48, 2, STR_EN, str_en_n},
	{56, 2, STR_EN, str_en_s},
	{64, 2, STR_EN, str_en_r},
	{80, 2, STR_EN, str_en_T},
	{88, 2, STR_EN, str_en_r},
	{96, 2, STR_EN, str_en_i},
	{104, 2, STR_EN, str_en_p}
};

/* 20_上限报警允许 */
const Stringinfo_t Menu_ParamSet_20_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_0},
	{16, 2, STR_ZH, str_zh_shang},
	{32, 2, STR_ZH, str_zh_xian_1},
	{48, 2, STR_ZH, str_zh_bao},
	{64, 2, STR_ZH, str_zh_jing_1},
	{80, 2, STR_ZH, str_zh_yun},
	{96, 2, STR_ZH, str_zh_xu}
};

/* 20_Alm Hi Ena */
const Stringinfo_t Menu_ParamSet_20_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_0},
	{24, 2, STR_EN, str_en_A},
	{32, 2, STR_EN, str_en_l},
	{40, 2, STR_EN, str_en_m},
	{56, 2, STR_EN, str_en_H},
	{64, 2, STR_EN, str_en_i},
	{80, 2, STR_EN, str_en_E},
	{88, 2, STR_EN, str_en_n},
	{96, 2, STR_EN, str_en_a}
};

/* 21_上限报警数值 */
const Stringinfo_t Menu_ParamSet_21_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_1},
	{16, 2, STR_ZH, str_zh_shang},
	{32, 2, STR_ZH, str_zh_xian_1},
	{48, 2, STR_ZH, str_zh_bao},
	{64, 2, STR_ZH, str_zh_jing_1},
	{80, 2, STR_ZH, str_zh_shu},
	{96, 2, STR_ZH, str_zh_zhi}
};

/* 21_Alm Hi Val */
const Stringinfo_t Menu_ParamSet_21_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_1},
	{24, 2, STR_EN, str_en_A},
	{32, 2, STR_EN, str_en_l},
	{40, 2, STR_EN, str_en_m},
	{56, 2, STR_EN, str_en_H},
	{64, 2, STR_EN, str_en_i},
	{80, 2, STR_EN, str_en_V},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_l}
};

/* 22_下限报警允许 */
const Stringinfo_t Menu_ParamSet_22_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_2},
	{16, 2, STR_ZH, str_zh_xia},
	{32, 2, STR_ZH, str_zh_xian_1},
	{48, 2, STR_ZH, str_zh_bao},
	{64, 2, STR_ZH, str_zh_jing_1},
	{80, 2, STR_ZH, str_zh_yun},
	{96, 2, STR_ZH, str_zh_xu}
};

/* 22_Alm Low Ena */
const Stringinfo_t Menu_ParamSet_22_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_2},
	{24, 2, STR_EN, str_en_A},
	{32, 2, STR_EN, str_en_l},
	{40, 2, STR_EN, str_en_m},
	{56, 2, STR_EN, str_en_L},
	{64, 2, STR_EN, str_en_o},
	{72, 2, STR_EN, str_en_w},
	{88, 2, STR_EN, str_en_E},
	{96, 2, STR_EN, str_en_n},
	{104, 2, STR_EN, str_en_a}
};

/* 23_下限报警数值 */
const Stringinfo_t Menu_ParamSet_23_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_3},
	{16, 2, STR_ZH, str_zh_xia},
	{32, 2, STR_ZH, str_zh_xian_1},
	{48, 2, STR_ZH, str_zh_bao},
	{64, 2, STR_ZH, str_zh_jing_1},
	{80, 2, STR_ZH, str_zh_shu},
	{96, 2, STR_ZH, str_zh_zhi}
};

/* 23_Alm Low Val */
const Stringinfo_t Menu_ParamSet_23_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_3},
	{24, 2, STR_EN, str_en_A},
	{32, 2, STR_EN, str_en_l},
	{40, 2, STR_EN, str_en_m},
	{56, 2, STR_EN, str_en_L},
	{64, 2, STR_EN, str_en_o},
	{72, 2, STR_EN, str_en_w},
	{88, 2, STR_EN, str_en_V},
	{96, 2, STR_EN, str_en_a},
	{104, 2, STR_EN, str_en_l}
};

/* 24_励磁报警允许 */
const Stringinfo_t Menu_ParamSet_24_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_4},
	{16, 2, STR_ZH, str_zh_li},
	{32, 2, STR_ZH, str_zh_ci},
	{48, 2, STR_ZH, str_zh_bao},
	{64, 2, STR_ZH, str_zh_jing_1},
	{80, 2, STR_ZH, str_zh_yun},
	{96, 2, STR_ZH, str_zh_xu}
};

/* 24_Coil Alm Ena */
const Stringinfo_t Menu_ParamSet_24_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_4},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_i},
	{40, 2, STR_EN, str_en_l},
	{56, 2, STR_EN, str_en_A},
	{64, 2, STR_EN, str_en_l},
	{72, 2, STR_EN, str_en_m},
	{88, 2, STR_EN, str_en_E},
	{96, 2, STR_EN, str_en_n},
	{104, 2, STR_EN, str_en_a}
};

/* 25_总量清零密码 */
const Stringinfo_t Menu_ParamSet_25_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_5},
	{16, 2, STR_ZH, str_zh_zong},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_qing},
	{64, 2, STR_ZH, str_zh_ling},
	{80, 2, STR_ZH, str_zh_mi},
	{96, 2, STR_ZH, str_zh_ma}
};

/* 25_Clr Sum Key */
const Stringinfo_t Menu_ParamSet_25_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_5},
	{24, 2, STR_EN, str_en_C},
	{32, 2, STR_EN, str_en_l},
	{40, 2, STR_EN, str_en_r},
	{56, 2, STR_EN, str_en_S},
	{64, 2, STR_EN, str_en_u},
	{72, 2, STR_EN, str_en_m},
	{88, 2, STR_EN, str_en_K},
	{96, 2, STR_EN, str_en_e},
	{104, 2, STR_EN, str_en_y}
};

/* 26_传感器编码1 */
const Stringinfo_t Menu_ParamSet_26_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_6},
	{16, 2, STR_ZH, str_zh_chuan},
	{32, 2, STR_ZH, str_zh_gan},
	{48, 2, STR_ZH, str_zh_qi},
	{64, 2, STR_ZH, str_zh_bian},
	{80, 2, STR_ZH, str_zh_ma},
	{96, 2, STR_EN, str_en_1}
};

/* 26_Sensor Code1 */
const Stringinfo_t Menu_ParamSet_26_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_6},
	{16, 2, STR_EN, str_en_S},
	{24, 2, STR_EN, str_en_e},
	{32, 2, STR_EN, str_en_n},
	{40, 2, STR_EN, str_en_s},
	{48, 2, STR_EN, str_en_o},
	{56, 2, STR_EN, str_en_r},
	{72, 2, STR_EN, str_en_C},
	{80, 2, STR_EN, str_en_o},
	{88, 2, STR_EN, str_en_d},
	{96, 2, STR_EN, str_en_e},
	{104, 2, STR_EN, str_en_1}
};


/* 27_传感器编码2 */
const Stringinfo_t Menu_ParamSet_27_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_7},
	{16, 2, STR_ZH, str_zh_chuan},
	{32, 2, STR_ZH, str_zh_gan},
	{48, 2, STR_ZH, str_zh_qi},
	{64, 2, STR_ZH, str_zh_bian},
	{80, 2, STR_ZH, str_zh_ma},
	{96, 2, STR_EN, str_en_2}
};

/* 27_Sensor Code2 */
const Stringinfo_t Menu_ParamSet_27_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_7},
	{16, 2, STR_EN, str_en_S},
	{24, 2, STR_EN, str_en_e},
	{32, 2, STR_EN, str_en_n},
	{40, 2, STR_EN, str_en_s},
	{48, 2, STR_EN, str_en_o},
	{56, 2, STR_EN, str_en_r},
	{72, 2, STR_EN, str_en_C},
	{80, 2, STR_EN, str_en_o},
	{88, 2, STR_EN, str_en_d},
	{96, 2, STR_EN, str_en_e},
	{104, 2, STR_EN, str_en_2}
};

/* 28_励磁方式选择 */
const Stringinfo_t Menu_ParamSet_28_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_8},
	{16, 2, STR_ZH, str_zh_li},
	{32, 2, STR_ZH, str_zh_ci},
	{48, 2, STR_ZH, str_zh_fang},
	{64, 2, STR_ZH, str_zh_shi_2},
	{80, 2, STR_ZH, str_zh_xuan},
	{96, 2, STR_ZH, str_zh_ze}
};

/* 28_Field Type */
const Stringinfo_t Menu_ParamSet_28_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_8},
	{24, 2, STR_EN, str_en_F},
	{32, 2, STR_EN, str_en_i},
	{40, 2, STR_EN, str_en_e},
	{48, 2, STR_EN, str_en_l},
	{56, 2, STR_EN, str_en_d},
	{72, 2, STR_EN, str_en_T},
	{80, 2, STR_EN, str_en_y},
	{88, 2, STR_EN, str_en_p},
	{96, 2, STR_EN, str_en_e}
};

/* 29_传感器系数值 */
const Stringinfo_t Menu_ParamSet_29_zh[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_9},
	{16, 2, STR_ZH, str_zh_chuan},
	{32, 2, STR_ZH, str_zh_gan},
	{48, 2, STR_ZH, str_zh_qi},
	{64, 2, STR_ZH, str_zh_xi},
	{80, 2, STR_ZH, str_zh_shu},
	{96, 2, STR_ZH, str_zh_zhi}
};

/* 29_Sensor Fact */
const Stringinfo_t Menu_ParamSet_29_en[] =
{
	{0, 0, STR_EN, str_en_2},
	{8, 0, STR_EN, str_en_9},
	{16, 2, STR_EN, str_en_S},
	{24, 2, STR_EN, str_en_e},
	{32, 2, STR_EN, str_en_n},
	{40, 2, STR_EN, str_en_s},
	{48, 2, STR_EN, str_en_o},
	{56, 2, STR_EN, str_en_r},
	{72, 2, STR_EN, str_en_F},
	{80, 2, STR_EN, str_en_a},
	{88, 2, STR_EN, str_en_c},
	{96, 2, STR_EN, str_en_t}
};

/* 30_修正系数0 */
const Stringinfo_t Menu_ParamSet_30_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_0},
	{32, 2, STR_ZH, str_zh_xiu},
	{48, 2, STR_ZH, str_zh_zheng},
	{64, 2, STR_ZH, str_zh_xi},
	{80, 2, STR_ZH, str_zh_shu},
	{96, 2, STR_EN, str_en_0}
};

/* 30_Correct Fact0 */
const Stringinfo_t Menu_ParamSet_30_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_0},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_F},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_c},
	{104, 2, STR_EN, str_en_t},
	{112, 2, STR_EN, str_en_0}
};

/* 31_流量修正点0 */
const Stringinfo_t Menu_ParamSet_31_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_1},
	{16, 2, STR_ZH, str_zh_liu},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_xiu},
	{64, 2, STR_ZH, str_zh_zheng},
	{80, 2, STR_ZH, str_zh_dian},
	{96, 2, STR_EN, str_en_0}
};

/* 31_Correct Valu0 */
const Stringinfo_t Menu_ParamSet_31_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_1},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_V},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_l},
	{104, 2, STR_EN, str_en_u},
	{112, 2, STR_EN, str_en_0}
};


/* 32_修正系数1 */
const Stringinfo_t Menu_ParamSet_32_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_2},
	{32, 2, STR_ZH, str_zh_xiu},
	{48, 2, STR_ZH, str_zh_zheng},
	{64, 2, STR_ZH, str_zh_xi},
	{80, 2, STR_ZH, str_zh_shu},
	{96, 2, STR_EN, str_en_1}
};

/* 32_Correct Fact1 */
const Stringinfo_t Menu_ParamSet_32_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_2},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_F},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_c},
	{104, 2, STR_EN, str_en_t},
	{112, 2, STR_EN, str_en_1}
};

/* 33_流量修正点1 */
const Stringinfo_t Menu_ParamSet_33_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_3},
	{16, 2, STR_ZH, str_zh_liu},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_xiu},
	{64, 2, STR_ZH, str_zh_zheng},
	{80, 2, STR_ZH, str_zh_dian},
	{96, 2, STR_EN, str_en_1}
};

/* 33_Correct Valu1 */
const Stringinfo_t Menu_ParamSet_33_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_3},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_V},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_l},
	{104, 2, STR_EN, str_en_u},
	{112, 2, STR_EN, str_en_1}
};

/* 34_修正系数2 */
const Stringinfo_t Menu_ParamSet_34_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_4},
	{32, 2, STR_ZH, str_zh_xiu},
	{48, 2, STR_ZH, str_zh_zheng},
	{64, 2, STR_ZH, str_zh_xi},
	{80, 2, STR_ZH, str_zh_shu},
	{96, 2, STR_EN, str_en_2}
};

/* 34_Correct Fact2 */
const Stringinfo_t Menu_ParamSet_34_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_4},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_F},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_c},
	{104, 2, STR_EN, str_en_t},
	{112, 2, STR_EN, str_en_2}
};

/* 35_流量修正点2 */
const Stringinfo_t Menu_ParamSet_35_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_5},
	{16, 2, STR_ZH, str_zh_liu},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_xiu},
	{64, 2, STR_ZH, str_zh_zheng},
	{80, 2, STR_ZH, str_zh_dian},
	{96, 2, STR_EN, str_en_2}
};

/* 35_Correct Valu2 */
const Stringinfo_t Menu_ParamSet_35_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_5},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_V},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_l},
	{104, 2, STR_EN, str_en_u},
	{112, 2, STR_EN, str_en_2}
};

/* 36_修正系数3 */
const Stringinfo_t Menu_ParamSet_36_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_6},
	{32, 2, STR_ZH, str_zh_xiu},
	{48, 2, STR_ZH, str_zh_zheng},
	{64, 2, STR_ZH, str_zh_xi},
	{80, 2, STR_ZH, str_zh_shu},
	{96, 2, STR_EN, str_en_3}
};

/* 36_Correct Fact3 */
const Stringinfo_t Menu_ParamSet_36_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_6},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_F},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_c},
	{104, 2, STR_EN, str_en_t},
	{112, 2, STR_EN, str_en_3}
};

/* 37_流量修正点3 */
const Stringinfo_t Menu_ParamSet_37_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_7},
	{16, 2, STR_ZH, str_zh_liu},
	{32, 2, STR_ZH, str_zh_liang},
	{48, 2, STR_ZH, str_zh_xiu},
	{64, 2, STR_ZH, str_zh_zheng},
	{80, 2, STR_ZH, str_zh_dian},
	{96, 2, STR_EN, str_en_3}
};

/* 37_Correct Valu3 */
const Stringinfo_t Menu_ParamSet_37_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_7},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_V},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_l},
	{104, 2, STR_EN, str_en_u},
	{112, 2, STR_EN, str_en_3}
};

/* 38_修正系数4 */
const Stringinfo_t Menu_ParamSet_38_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_8},
	{32, 2, STR_ZH, str_zh_xiu},
	{48, 2, STR_ZH, str_zh_zheng},
	{64, 2, STR_ZH, str_zh_xi},
	{80, 2, STR_ZH, str_zh_shu},
	{96, 2, STR_EN, str_en_4}
};

/* 38_Correct Fact4 */
const Stringinfo_t Menu_ParamSet_38_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_8},
	{16, 2, STR_EN, str_en_C},
	{24, 2, STR_EN, str_en_o},
	{32, 2, STR_EN, str_en_r},
	{40, 2, STR_EN, str_en_r},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_c},
	{64, 2, STR_EN, str_en_t},
	{80, 2, STR_EN, str_en_F},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_c},
	{104, 2, STR_EN, str_en_t},
	{112, 2, STR_EN, str_en_4}
};

/* 39_正向累计设定 */
const Stringinfo_t Menu_ParamSet_39_zh[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_9},
	{16, 2, STR_ZH, str_zh_zheng},
	{32, 2, STR_ZH, str_zh_xiang},
	{48, 2, STR_ZH, str_zh_lei_1},
	{64, 2, STR_ZH, str_zh_ji_1},
	{80, 2, STR_ZH, str_zh_she},
	{96, 2, STR_ZH, str_zh_ding}
};

/* 39_Fwd Total */
const Stringinfo_t Menu_ParamSet_39_en[] =
{
	{0, 0, STR_EN, str_en_3},
	{8, 0, STR_EN, str_en_9},
	{32, 2, STR_EN, str_en_F},
	{40, 2, STR_EN, str_en_w},
	{48, 2, STR_EN, str_en_d},
	{64, 2, STR_EN, str_en_T},
	{72, 2, STR_EN, str_en_o},
	{80, 2, STR_EN, str_en_t},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_l}
};

/* 40_反向累计设定 */
const Stringinfo_t Menu_ParamSet_40_zh[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_0},
	{16, 2, STR_ZH, str_zh_fan},
	{32, 2, STR_ZH, str_zh_xiang},
	{48, 2, STR_ZH, str_zh_lei_1},
	{64, 2, STR_ZH, str_zh_ji_1},
	{80, 2, STR_ZH, str_zh_she},
	{96, 2, STR_ZH, str_zh_ding}
};

/* 40_Rev Total */
const Stringinfo_t Menu_ParamSet_40_en[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_0},
	{32, 2, STR_EN, str_en_R},
	{40, 2, STR_EN, str_en_e},
	{48, 2, STR_EN, str_en_v},
	{64, 2, STR_EN, str_en_T},
	{72, 2, STR_EN, str_en_o},
	{80, 2, STR_EN, str_en_t},
	{88, 2, STR_EN, str_en_a},
	{96, 2, STR_EN, str_en_l}
};

/* 41_电流零点修正 */
const Stringinfo_t Menu_ParamSet_41_zh[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_1},
	{16, 2, STR_ZH, str_zh_dian_1},
	{32, 2, STR_ZH, str_zh_liu},
	{48, 2, STR_ZH, str_zh_ling},
	{64, 2, STR_ZH, str_zh_dian},
	{80, 2, STR_ZH, str_zh_xiu},
	{96, 2, STR_ZH, str_zh_zheng}
};

/* 41_Analog Zero */
const Stringinfo_t Menu_ParamSet_41_en[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_1},
	{24, 2, STR_EN, str_en_A},
	{32, 2, STR_EN, str_en_n},
	{40, 2, STR_EN, str_en_a},
	{48, 2, STR_EN, str_en_l},
	{56, 2, STR_EN, str_en_o},
	{64, 2, STR_EN, str_en_g},
	{80, 2, STR_EN, str_en_Z},
	{88, 2, STR_EN, str_en_e},
	{96, 2, STR_EN, str_en_r},
	{104, 2, STR_EN, str_en_o}
};

/* 42_电流满度修正 */
const Stringinfo_t Menu_ParamSet_42_zh[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_2},
	{16, 2, STR_ZH, str_zh_dian_1},
	{32, 2, STR_ZH, str_zh_liu},
	{48, 2, STR_ZH, str_zh_man},
	{64, 2, STR_ZH, str_zh_du},
	{80, 2, STR_ZH, str_zh_xiu},
	{96, 2, STR_ZH, str_zh_zheng}
};

/* 42_Analog Range */
const Stringinfo_t Menu_ParamSet_42_en[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_2},
	{16, 2, STR_EN, str_en_A},
	{24, 2, STR_EN, str_en_n},
	{32, 2, STR_EN, str_en_a},
	{40, 2, STR_EN, str_en_l},
	{48, 2, STR_EN, str_en_o},
	{56, 2, STR_EN, str_en_g},
	{72, 2, STR_EN, str_en_R},
	{80, 2, STR_EN, str_en_a},
	{88, 2, STR_EN, str_en_n},
	{96, 2, STR_EN, str_en_g},
	{104, 2, STR_EN, str_en_e}
};

/* 43_出厂标定系数 */
const Stringinfo_t Menu_ParamSet_43_zh[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_3},
	{16, 2, STR_ZH, str_zh_chu_1},
	{32, 2, STR_ZH, str_zh_chang},
	{48, 2, STR_ZH, str_zh_biao_1},
	{64, 2, STR_ZH, str_zh_ding},
	{80, 2, STR_ZH, str_zh_xi},
	{96, 2, STR_ZH, str_zh_shu}
};

/* 43_Meter Fact */
const Stringinfo_t Menu_ParamSet_43_en[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_3},
	{24, 2, STR_EN, str_en_M},
	{32, 2, STR_EN, str_en_e},
	{40, 2, STR_EN, str_en_t},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_r},
	{72, 2, STR_EN, str_en_F},
	{80, 2, STR_EN, str_en_a},
	{88, 2, STR_EN, str_en_c},
	{96, 2, STR_EN, str_en_t}
};

/* 44_设定密度 */
const Stringinfo_t Menu_ParamSet_44_zh[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_4},
	{32, 2, STR_ZH, str_zh_she},
	{48, 2, STR_ZH, str_zh_ding},
	{64, 2, STR_ZH, str_zh_mi},
	{80, 2, STR_ZH, str_zh_du}
};

/* 44_Set Density */
const Stringinfo_t Menu_ParamSet_44_en[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_4},
	{24, 2, STR_EN, str_en_S},
	{32, 2, STR_EN, str_en_e},
	{40, 2, STR_EN, str_en_t},
	{56, 2, STR_EN, str_en_D},
	{64, 2, STR_EN, str_en_e},
	{72, 2, STR_EN, str_en_n},
	{80, 2, STR_EN, str_en_s},
	{88, 2, STR_EN, str_en_i},
	{96, 2, STR_EN, str_en_t},
	{104, 2, STR_EN, str_en_y},
};

/* 45_远传间隔时间 */
const Stringinfo_t Menu_ParamSet_45_zh[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_5},
	{16, 2, STR_ZH, str_zh_yuan},
	{32, 2, STR_ZH, str_zh_chuan},
	{48, 2, STR_ZH, str_zh_jian},
	{64, 2, STR_ZH, str_zh_ge},
	{80, 2, STR_ZH, str_zh_shi},
	{96, 2, STR_ZH, str_zh_jian}
};

/* 45_Send Int */
const Stringinfo_t Menu_ParamSet_45_en[] =
{
	{0, 0, STR_EN, str_en_4},
	{8, 0, STR_EN, str_en_5},
	{32, 2, STR_EN, str_en_S},
	{40, 2, STR_EN, str_en_e},
	{48, 2, STR_EN, str_en_n},
	{56, 2, STR_EN, str_en_d},
	{72, 2, STR_EN, str_en_I},
	{80, 2, STR_EN, str_en_n},
	{88, 2, STR_EN, str_en_t}
};

/* Number Table */
const uint8_t* Menu_Number_Tbl[] =
{
	{str_en_0},
	{str_en_1},
	{str_en_2},
	{str_en_3},
	{str_en_4},
	{str_en_5},
	{str_en_6},
	{str_en_7},
	{str_en_8},
	{str_en_9}
};

/* 光标 */
const Stringinfo_t Menu_Cursor_default = {72, 4, STR_EN, str_en_line};

/* 语言_中文 */
const Stringinfo_t Menu_L3_00_Chn_zh[] =
{
	{48, 2, STR_ZH, str_zh_zhong},
	{64, 2, STR_ZH, str_zh_wen}
};

/* 语言_English */
const Stringinfo_t Menu_L3_00_Eng_en[] =
{
	{32, 2, STR_EN, str_en_E},
	{40, 2, STR_EN, str_en_n},
	{48, 2, STR_EN, str_en_g},
	{56, 2, STR_EN, str_en_l},
	{64, 2, STR_EN, str_en_i},
	{72, 2, STR_EN, str_en_s},
	{80, 2, STR_EN, str_en_h},
};

/* 仪表通讯速度_2400 */
const Stringinfo_t Menu_L3_02_2400[] =
{
	{48, 2, STR_EN, str_en_2},
	{56, 2, STR_EN, str_en_4},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
};

/* 仪表通讯速度_4800 */
const Stringinfo_t Menu_L3_02_4800[] =
{
	{48, 2, STR_EN, str_en_4},
	{56, 2, STR_EN, str_en_8},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
};

/* 仪表通讯速度_9600 */
const Stringinfo_t Menu_L3_02_9600[] =
{
	{48, 2, STR_EN, str_en_9},
	{56, 2, STR_EN, str_en_6},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
};

/* 仪表通讯速度_19200 */
const Stringinfo_t Menu_L3_02_19200[] =
{
	{48, 2, STR_EN, str_en_1},
	{56, 2, STR_EN, str_en_9},
	{64, 2, STR_EN, str_en_2},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_EN, str_en_0},
};

/* 流量单位_L/s */
const Stringinfo_t Menu_L3_04_Ls[] =
{
	{48, 2, STR_EN, str_en_L},
	{56, 2, STR_EN, str_en_line_1},
	{64, 2, STR_EN, str_en_s},
};

/* 流量单位_L/m */
const Stringinfo_t Menu_L3_04_Lm[] =
{
	{48, 2, STR_EN, str_en_L},
	{56, 2, STR_EN, str_en_line_1},
	{64, 2, STR_EN, str_en_m},
};

/* 流量单位_L/h */
const Stringinfo_t Menu_L3_04_Lh[] =
{
	{48, 2, STR_EN, str_en_L},
	{56, 2, STR_EN, str_en_line_1},
	{64, 2, STR_EN, str_en_h},
};

/* 流量单位_m3/s */
const Stringinfo_t Menu_L3_04_m3s[] =
{
	{48, 2, STR_ZH, str_pic_unit},
	{64, 2, STR_EN, str_en_line_1},
	{72, 2, STR_EN, str_en_s},
};

/* 流量单位_m3/m */
const Stringinfo_t Menu_L3_04_m3m[] =
{
	{48, 2, STR_ZH, str_pic_unit},
	{64, 2, STR_EN, str_en_line_1},
	{72, 2, STR_EN, str_en_m},
};

/* 流量方向择项_正向 */
const Stringinfo_t Menu_L3_07_Forward_zh[] =
{
	{48, 2, STR_ZH, str_zh_zheng},
	{64, 2, STR_ZH, str_zh_xiang},
};

/* 流量方向择项_Forward */
const Stringinfo_t Menu_L3_07_Forward_en[] =
{
	{40, 2, STR_EN, str_en_F},
	{48, 2, STR_EN, str_en_o},
	{56, 2, STR_EN, str_en_r},
	{64, 2, STR_EN, str_en_w},
	{72, 2, STR_EN, str_en_a},
	{80, 2, STR_EN, str_en_r},
	{88, 2, STR_EN, str_en_d}
};

/* 流量方向择项_反向 */
const Stringinfo_t Menu_L3_07_Reverse_zh[] =
{
	{48, 2, STR_ZH, str_zh_fan},
	{64, 2, STR_ZH, str_zh_xiang},
};

/* 流量方向择项_Reverse */
const Stringinfo_t Menu_L3_07_Reverse_en[] =
{
	{40, 2, STR_EN, str_en_R},
	{48, 2, STR_EN, str_en_e},
	{56, 2, STR_EN, str_en_v},
	{64, 2, STR_EN, str_en_e},
	{72, 2, STR_EN, str_en_r},
	{80, 2, STR_EN, str_en_s},
	{88, 2, STR_EN, str_en_e}
};

/* 流量零点修正±0000 */
Stringinfo_t Menu_L3_08_Flowzero[] =
{
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_EN, str_en_0},
	{40, 2, STR_ZH, str_pic_plusminus},
};

/* 置数000.00% */
Stringinfo_t Menu_L3_NumPercent[] =
{
	{32, 2, STR_EN, str_en_0},
	{40, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
	{56, 2, STR_EN, str_en_dot},
	{80, 2, STR_EN, str_en_percent},
};

/* **_允许 */
const Stringinfo_t Menu_L3_Enable_zh[] =
{
	{48, 2, STR_ZH, str_zh_yun},
	{64, 2, STR_ZH, str_zh_xu},
};

/* **_Enable */
const Stringinfo_t Menu_L3_Enable_en[] =
{
	{40, 2, STR_EN, str_en_E},
	{48, 2, STR_EN, str_en_n},
	{56, 2, STR_EN, str_en_a},
	{64, 2, STR_EN, str_en_b},
	{72, 2, STR_EN, str_en_l},
	{80, 2, STR_EN, str_en_e},
};

/* **_禁止 */
const Stringinfo_t Menu_L3_Disable_zh[] =
{
	{48, 2, STR_ZH, str_zh_jin},
	{64, 2, STR_ZH, str_zh_zhi_3},
};

/* **_Disable */
const Stringinfo_t Menu_L3_Disable_en[] =
{
	{40, 2, STR_EN, str_en_D},
	{48, 2, STR_EN, str_en_i},
	{56, 2, STR_EN, str_en_s},
	{64, 2, STR_EN, str_en_a},
	{72, 2, STR_EN, str_en_b},
	{80, 2, STR_EN, str_en_l},
	{88, 2, STR_EN, str_en_e},
};

/* 流量_0.001L */
const Stringinfo_t Menu_L3_0001L[] =
{
	{40, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_dot},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_1},
	{80, 2, STR_EN, str_en_L},
};

/* 流量_0.010L */
const Stringinfo_t Menu_L3_0010L[] =
{
	{40, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_dot},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_1},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_EN, str_en_L},
};

/* 流量_0.100L */
const Stringinfo_t Menu_L3_0100L[] =
{
	{40, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_dot},
	{56, 2, STR_EN, str_en_1},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_EN, str_en_L},
};

/* 流量_1.000L */
const Stringinfo_t Menu_L3_1000L[] =
{
	{40, 2, STR_EN, str_en_1},
	{48, 2, STR_EN, str_en_dot},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_EN, str_en_L},
};

/* 流量_0.001m3 */
const Stringinfo_t Menu_L3_0001m3[] =
{
	{40, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_dot},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_1},
	{80, 2, STR_ZH, str_pic_unit},
};

/* 流量_0.010m3 */
const Stringinfo_t Menu_L3_0010m3[] =
{
	{40, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_dot},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_1},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_ZH, str_pic_unit},
};

/* 流量_0.100m3 */
const Stringinfo_t Menu_L3_0100m3[] =
{
	{40, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_dot},
	{56, 2, STR_EN, str_en_1},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_ZH, str_pic_unit},
};

/* 流量_1.000m3 */
const Stringinfo_t Menu_L3_1000m3[] =
{
	{40, 2, STR_EN, str_en_1},
	{48, 2, STR_EN, str_en_dot},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_ZH, str_pic_unit},
};

/* 电流输出类型0～10mA */
const Stringinfo_t Menu_L3_0to10mA[] =
{
	{32, 2, STR_EN, str_en_0},
	{40, 2, STR_ZH, str_pic_curve},
	{56, 2, STR_EN, str_en_1},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_m},
	{80, 2, STR_EN, str_en_A},
};

/* 电流输出类型4～20mA */
const Stringinfo_t Menu_L3_4to20mA[] =
{
	{32, 2, STR_EN, str_en_4},
	{40, 2, STR_ZH, str_pic_curve},
	{56, 2, STR_EN, str_en_2},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_m},
	{80, 2, STR_EN, str_en_A},
};

/* 脉冲输出方式_频率 */
const Stringinfo_t Menu_L3_Frequency_zh[] =
{
	{48, 2, STR_ZH, str_zh_pin},
	{64, 2, STR_ZH, str_zh_lv},
};

/* 脉冲输出方式_Frequency */
const Stringinfo_t Menu_L3_Frequency_en[] =
{
	{32, 2, STR_EN, str_en_F},
	{40, 2, STR_ZH, str_en_r},
	{48, 2, STR_ZH, str_en_e},
	{56, 2, STR_EN, str_en_q},
	{64, 2, STR_EN, str_en_u},
	{72, 2, STR_EN, str_en_e},
	{80, 2, STR_EN, str_en_n},
	{88, 2, STR_EN, str_en_c},
	{96, 2, STR_EN, str_en_y}
};

/* 脉冲输出方式_脉冲 */
const Stringinfo_t Menu_L3_Pulse_zh[] =
{
	{48, 2, STR_ZH, str_zh_mai},
	{64, 2, STR_ZH, str_zh_chong},
};

/* 脉冲输出方式_Pulse */
const Stringinfo_t Menu_L3_Pulse_en[] =
{
	{48, 2, STR_ZH, str_en_P},
	{56, 2, STR_EN, str_en_u},
	{64, 2, STR_EN, str_en_l},
	{72, 2, STR_EN, str_en_s},
	{80, 2, STR_EN, str_en_e}
};

/* 频率输出范围0001Hz */
Stringinfo_t Menu_L3_16_Freque[] =
{
	{40, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_0},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_1},
	{72, 2, STR_EN, str_en_H},
	{80, 2, STR_EN, str_en_z},
};

/* 励磁方式选择_方式1 */
const Stringinfo_t Menu_L3_Fieldtype1_zh[] =
{
	{48, 2, STR_ZH, str_zh_fang},
	{64, 2, STR_ZH, str_zh_shi_2},
	{80, 2, STR_EN, str_en_1}
};

/* 励磁方式选择_Type1 */
const Stringinfo_t Menu_L3_Fieldtype1_en[] =
{
	{48, 2, STR_EN, str_en_T},
	{56, 2, STR_EN, str_en_y},
	{64, 2, STR_EN, str_en_p},
	{72, 2, STR_EN, str_en_e},
	{80, 2, STR_EN, str_en_1}
};

/* 励磁方式选择_方式2 */
const Stringinfo_t Menu_L3_Fieldtype2_zh[] =
{
	{48, 2, STR_ZH, str_zh_fang},
	{64, 2, STR_ZH, str_zh_shi_2},
	{80, 2, STR_EN, str_en_2}
};

/* 励磁方式选择_Type2 */
const Stringinfo_t Menu_L3_Fieldtype2_en[] =
{
	{48, 2, STR_EN, str_en_T},
	{56, 2, STR_EN, str_en_y},
	{64, 2, STR_EN, str_en_p},
	{72, 2, STR_EN, str_en_e},
	{80, 2, STR_EN, str_en_2}
};

/* 励磁方式选择_方式3 */
const Stringinfo_t Menu_L3_Fieldtype3_zh[] =
{
	{48, 2, STR_ZH, str_zh_fang},
	{64, 2, STR_ZH, str_zh_shi_2},
	{80, 2, STR_EN, str_en_3}
};

/* 励磁方式选择_Type3 */
const Stringinfo_t Menu_L3_Fieldtype3_en[] =
{
	{48, 2, STR_EN, str_en_T},
	{56, 2, STR_EN, str_en_y},
	{64, 2, STR_EN, str_en_p},
	{72, 2, STR_EN, str_en_e},
	{80, 2, STR_EN, str_en_3}
};

/* XX纯数字置数型菜单 */
Stringinfo_t Menu_L3_Digit_XX[] =
{
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
};

/* XX.X置数型菜单 */
Stringinfo_t Menu_L3_Digit_XXpX[] =
{
	{48, 2, STR_EN, str_en_0},
	{56, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_dot},
};

/* XXXX纯数字置数型菜单 */
Stringinfo_t Menu_L3_Digit_XXXX[] =
{
	{48, 2, STR_EN, str_en_0},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
};

/* XXXXX纯数字置数型菜单 */
Stringinfo_t Menu_L3_Digit_XXXXX[] =
{
	{44, 2, STR_EN, str_en_0},
	{52, 2, STR_EN, str_en_0},
	{60, 2, STR_EN, str_en_0},
	{68, 2, STR_EN, str_en_0},
	{76, 2, STR_EN, str_en_0}
};

/* X.XXXX置数型菜单 */
Stringinfo_t Menu_L3_Digit_XpXXXX[] =
{
	{40, 2, STR_EN, str_en_0},
	{56, 2, STR_EN, str_en_0},
	{64, 2, STR_EN, str_en_0},
	{72, 2, STR_EN, str_en_0},
	{80, 2, STR_EN, str_en_0},
	{48, 2, STR_EN, str_en_dot}
};

/* XXXXXXXXX纯数字置数型菜单 */
Stringinfo_t Menu_L3_Digit_XXXXXXXXX[] =
{
	{28, 2, STR_EN, str_en_0},
	{36, 2, STR_EN, str_en_0},
	{44, 2, STR_EN, str_en_0},
	{52, 2, STR_EN, str_en_0},
	{60, 2, STR_EN, str_en_0},
	{68, 2, STR_EN, str_en_0},
	{76, 2, STR_EN, str_en_0},
	{84, 2, STR_EN, str_en_0},
	{92, 2, STR_EN, str_en_0}
};

/********** 参数设置子菜单画面构成信息 ********/
/* 1.语言 */
MenuList_t Menu_level3_01_zh[] =
{
	{numof(Menu_L3_00_Chn_zh), (void*)Menu_L3_00_Chn_zh},	/* 中文 */
	{numof(Menu_L3_00_Eng_en), (void*)Menu_L3_00_Eng_en},	/* English */
};

/* 2.仪表通讯地址 */
MenuList_t Menu_level3_02_zh[] =
{
	{numof(Menu_L3_Digit_XX), Menu_L3_Digit_XX},		/* 00 */
};

/* 3.仪表通讯速度 */
MenuList_t Menu_level3_03_zh[] =
{
	{numof(Menu_L3_02_2400), (void*)Menu_L3_02_2400},		/* 2400 */
	{numof(Menu_L3_02_4800), (void*)Menu_L3_02_4800},		/* 4800 */
	{numof(Menu_L3_02_9600), (void*)Menu_L3_02_9600},		/* 9600 */
	{numof(Menu_L3_02_19200), (void*)Menu_L3_02_19200},		/* 19200 */
};

/* 4.测量管道口径 */
MenuList_t Menu_level3_04_zh[] =
{
	{numof(Menu_L3_Digit_XXXX), Menu_L3_Digit_XXXX},	/* 0000 */
};

/* 5.流量单位 */
MenuList_t Menu_level3_05_zh[] =
{
	{numof(Menu_L3_04_Ls), (void*)Menu_L3_04_Ls},		/* L/s */
	{numof(Menu_L3_04_Lm), (void*)Menu_L3_04_Lm},		/* L/m */
	{numof(Menu_L3_04_Lh), (void*)Menu_L3_04_Lh},		/* L/h */
	{numof(Menu_L3_04_m3s), (void*)Menu_L3_04_m3s},	/* m3/s */
	{numof(Menu_L3_04_m3m), (void*)Menu_L3_04_m3m},	/* m3/m */
};

/* 6.仪表量程设置 */
MenuList_t Menu_level3_06_zh[] =
{
	{numof(Menu_L3_Digit_XXXXX), Menu_L3_Digit_XXXXX},	/* 00000 */
};

/* 7.测量阻尼时间 */
MenuList_t Menu_level3_07_zh[] =
{
	{numof(Menu_L3_Digit_XX), Menu_L3_Digit_XX},		/* 00 */
};

/* 8.流量方向择项 */
MenuList_t Menu_level3_08_zh[] =
{
	{numof(Menu_L3_07_Forward_zh), (void*)Menu_L3_07_Forward_zh},		/* 正向 */
	{numof(Menu_L3_07_Reverse_zh), (void*)Menu_L3_07_Reverse_zh},		/* 反向 */
};

/* 8.Flow Direct */
MenuList_t Menu_level3_08_en[] =
{
	{numof(Menu_L3_07_Forward_en), (void*)Menu_L3_07_Forward_en},		/* Forward */
	{numof(Menu_L3_07_Reverse_en), (void*)Menu_L3_07_Reverse_en},		/* Reverse */
};

/* 9.流量零点修正 */
MenuList_t Menu_level3_09_zh[] =
{
	{numof(Menu_L3_08_Flowzero), Menu_L3_08_Flowzero},	/* ±0000 */
};

/* 10.小信号切除点 */
MenuList_t Menu_level3_10_zh[] =
{
	{numof(Menu_L3_NumPercent), Menu_L3_NumPercent},	/* 000.00% */
};

/* 11.允许切除显示 */
MenuList_t Menu_level3_11_zh[] =
{
	{numof(Menu_L3_Enable_zh), (void*)Menu_L3_Enable_zh},		/* 允许 */
	{numof(Menu_L3_Disable_zh), (void*)Menu_L3_Disable_zh},		/* 禁止 */
};

/* 11.Cutoff Ena */
MenuList_t Menu_level3_11_en[] =
{
	{numof(Menu_L3_Enable_en), (void*)Menu_L3_Enable_en},		/* Enable */
	{numof(Menu_L3_Disable_en), (void*)Menu_L3_Disable_en},		/* Disable */
};

/* 12.流量积算单位 */
MenuList_t Menu_level3_12_zh[] =
{
	{numof(Menu_L3_0001L), (void*)Menu_L3_0001L},		/* 0.001L */
	{numof(Menu_L3_0010L), (void*)Menu_L3_0010L},		/* 0.010L */
	{numof(Menu_L3_0100L), (void*)Menu_L3_0100L},		/* 0.100L */
	{numof(Menu_L3_1000L), (void*)Menu_L3_1000L},		/* 1.000L */
	{numof(Menu_L3_0001m3), (void*)Menu_L3_0001m3},		/* 0.001m3 */
	{numof(Menu_L3_0010m3), (void*)Menu_L3_0010m3},		/* 0.010m3 */
	{numof(Menu_L3_0100m3), (void*)Menu_L3_0100m3},		/* 0.100m3 */
	{numof(Menu_L3_1000m3), (void*)Menu_L3_1000m3},		/* 1.000m3 */
};

/* 13.反向输出允许 */
MenuList_t Menu_level3_13_zh[] =
{
	{numof(Menu_L3_Enable_zh), (void*)Menu_L3_Enable_zh},		/* 允许 */
	{numof(Menu_L3_Disable_zh), (void*)Menu_L3_Disable_zh},		/* 禁止 */
};

/* 13.SegmaN Ena */
MenuList_t Menu_level3_13_en[] =
{
	{numof(Menu_L3_Enable_en), (void*)Menu_L3_Enable_en},		/* Enable */
	{numof(Menu_L3_Disable_en), (void*)Menu_L3_Disable_en},		/* Disable */
};

/* 14.电流输出类型 */
MenuList_t Menu_level3_14_zh[] =
{
	{numof(Menu_L3_0to10mA), (void*)Menu_L3_0to10mA},		/* 0～10mA */
	{numof(Menu_L3_4to20mA), (void*)Menu_L3_4to20mA},		/* 4～20mA */
};

/* 15.脉冲输出方式 */
MenuList_t Menu_level3_15_zh[] =
{
	{numof(Menu_L3_Frequency_zh), (void*)Menu_L3_Frequency_zh},	/* 频率 */
	{numof(Menu_L3_Pulse_zh), (void*)Menu_L3_Pulse_zh},			/* 脉冲 */
};

/* 15.Pulse Type */
MenuList_t Menu_level3_15_en[] =
{
	{numof(Menu_L3_Frequency_en), (void*)Menu_L3_Frequency_en},	/* Frequency */
	{numof(Menu_L3_Pulse_en), (void*)Menu_L3_Pulse_en},			/* Pulse */
};

/* 16.脉冲单位当量 */
MenuList_t Menu_level3_16_zh[] =
{
	{numof(Menu_L3_0001L), (void*)Menu_L3_0001L},		/* 0.001L */
	{numof(Menu_L3_0010L), (void*)Menu_L3_0010L},		/* 0.010L */
	{numof(Menu_L3_0100L), (void*)Menu_L3_0100L},		/* 0.100L */
	{numof(Menu_L3_1000L), (void*)Menu_L3_1000L},		/* 1.000L */
	{numof(Menu_L3_0001m3), (void*)Menu_L3_0001m3},		/* 0.001m3 */
	{numof(Menu_L3_0010m3), (void*)Menu_L3_0010m3},		/* 0.010m3 */
	{numof(Menu_L3_0100m3), (void*)Menu_L3_0100m3},		/* 0.100m3 */
	{numof(Menu_L3_1000m3), (void*)Menu_L3_1000m3},		/* 1.000m3 */
};

/* 17.频率输出范围 */
MenuList_t Menu_level3_17_zh[] =
{
	{numof(Menu_L3_16_Freque), Menu_L3_16_Freque},	/* 0001Hz */
};

/* 18.空管报警允许 */
MenuList_t Menu_level3_18_zh[] =
{
	{numof(Menu_L3_Enable_zh), (void*)Menu_L3_Enable_zh},		/* 允许 */
	{numof(Menu_L3_Disable_zh), (void*)Menu_L3_Disable_zh},		/* 禁止 */
};

/* 18.Mtsnsr Ena */
MenuList_t Menu_level3_18_en[] =
{
	{numof(Menu_L3_Enable_en), (void*)Menu_L3_Enable_en},		/* Enable */
	{numof(Menu_L3_Disable_en), (void*)Menu_L3_Disable_en},		/* Disable */
};

/* 19.空管报警阈值 */
MenuList_t Menu_level3_19_zh[] =
{
	{numof(Menu_L3_Digit_XXXXX), Menu_L3_Digit_XXXXX},	/* 00000 */
};

/* 20.上限报警允许 */
MenuList_t Menu_level3_20_zh[] =
{
	{numof(Menu_L3_Enable_zh), (void*)Menu_L3_Enable_zh},		/* 允许 */
	{numof(Menu_L3_Disable_zh), (void*)Menu_L3_Disable_zh},		/* 禁止 */
};

/* 20.Alm Hi Ena */
MenuList_t Menu_level3_20_en[] =
{
	{numof(Menu_L3_Enable_en), (void*)Menu_L3_Enable_en},		/* Enable */
	{numof(Menu_L3_Disable_en), (void*)Menu_L3_Disable_en},		/* Disable */
};

/* 21.上限报警数值 */
MenuList_t Menu_level3_21_zh[] =
{
	{numof(Menu_L3_NumPercent), Menu_L3_NumPercent},	/* 000.00% */
};

/* 22.下限报警允许 */
MenuList_t Menu_level3_22_zh[] =
{
	{numof(Menu_L3_Enable_zh), (void*)Menu_L3_Enable_zh},		/* 允许 */
	{numof(Menu_L3_Disable_zh), (void*)Menu_L3_Disable_zh},		/* 禁止 */
};

/* 22.Alm Low Ena */
MenuList_t Menu_level3_22_en[] =
{
	{numof(Menu_L3_Enable_en), (void*)Menu_L3_Enable_en},		/* Enable */
	{numof(Menu_L3_Disable_en), (void*)Menu_L3_Disable_en},		/* Disable */
};

/* 23.下限报警数值 */
MenuList_t Menu_level3_23_zh[] =
{
	{numof(Menu_L3_NumPercent), Menu_L3_NumPercent},	/* 000.00% */
};

/* 24.励磁报警允许 */
MenuList_t Menu_level3_24_zh[] =
{
	{numof(Menu_L3_Enable_zh), (void*)Menu_L3_Enable_zh},		/* 允许 */
	{numof(Menu_L3_Disable_zh), (void*)Menu_L3_Disable_zh},		/* 禁止 */
};

/* 24.Coil Alm Ena */
MenuList_t Menu_level3_24_en[] =
{
	{numof(Menu_L3_Enable_en), (void*)Menu_L3_Enable_en},		/* Enable */
	{numof(Menu_L3_Disable_en), (void*)Menu_L3_Disable_en},		/* Disable */
};

/* 25.总量清零密码 */
MenuList_t Menu_level3_25_zh[] =
{
	{numof(Menu_L3_Digit_XXXXX), Menu_L3_Digit_XXXXX},	/* 00000 */
};

/* 26.传感器编码1 */
MenuList_t Menu_level3_26_zh[] =
{
	{numof(Menu_L3_Digit_XXXXX), Menu_L3_Digit_XXXXX},	/* 00000 */
};

/* 27.传感器编码2 */
MenuList_t Menu_level3_27_zh[] =
{
	{numof(Menu_L3_Digit_XXXXX), Menu_L3_Digit_XXXXX},	/* 00000 */
};

/* 28.励磁方式选择 */
MenuList_t Menu_level3_28_zh[] =
{
	{numof(Menu_L3_Fieldtype1_zh), (void*)Menu_L3_Fieldtype1_zh},	/* 方式1 */
	{numof(Menu_L3_Fieldtype2_zh), (void*)Menu_L3_Fieldtype2_zh},	/* 方式2 */
	{numof(Menu_L3_Fieldtype3_zh), (void*)Menu_L3_Fieldtype3_zh},	/* 方式3 */
};

/* 28.Field Type */
MenuList_t Menu_level3_28_en[] =
{
	{numof(Menu_L3_Fieldtype1_en), (void*)Menu_L3_Fieldtype1_en},	/* Type1 */
	{numof(Menu_L3_Fieldtype2_en), (void*)Menu_L3_Fieldtype2_en},	/* Type2 */
	{numof(Menu_L3_Fieldtype3_en), (void*)Menu_L3_Fieldtype3_en},	/* Type3 */
};

/* 29.传感器系数值 */
MenuList_t Menu_level3_29_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 30.修正系数0 */
MenuList_t Menu_level3_30_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 31.流量修正点0 */
MenuList_t Menu_level3_31_zh[] =
{
	{numof(Menu_L3_Digit_XXpX), Menu_L3_Digit_XXpX},	/* 00.0 */
};

/* 32.修正系数1 */
MenuList_t Menu_level3_32_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 33.流量修正点1 */
MenuList_t Menu_level3_33_zh[] =
{
	{numof(Menu_L3_Digit_XXpX), Menu_L3_Digit_XXpX},	/* 00.0 */
};

/* 34.修正系数2 */
MenuList_t Menu_level3_34_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 35.流量修正点2 */
MenuList_t Menu_level3_35_zh[] =
{
	{numof(Menu_L3_Digit_XXpX), Menu_L3_Digit_XXpX},	/* 00.0 */
};

/* 36.修正系数3 */
MenuList_t Menu_level3_36_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 37.流量修正点3 */
MenuList_t Menu_level3_37_zh[] =
{
	{numof(Menu_L3_Digit_XXpX), Menu_L3_Digit_XXpX},	/* 00.0 */
};

/* 38.修正系数4 */
MenuList_t Menu_level3_38_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 39.正向累计设定 */
MenuList_t Menu_level3_39_zh[] =
{
	{numof(Menu_L3_Digit_XXXXXXXXX), Menu_L3_Digit_XXXXXXXXX},	/* 000000000 */
};

/* 40.反向累计设定 */
MenuList_t Menu_level3_40_zh[] =
{
	{numof(Menu_L3_Digit_XXXXXXXXX), Menu_L3_Digit_XXXXXXXXX},	/* 000000000 */
};

/* 41.电流零点修正 */
MenuList_t Menu_level3_41_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 42.电流满度修正 */
MenuList_t Menu_level3_42_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 43.出厂标定系数 */
MenuList_t Menu_level3_43_zh[] =
{
	{numof(Menu_L3_Digit_XpXXXX), Menu_L3_Digit_XpXXXX},	/* 0.0000 */
};

/* 44.设定密度 */
MenuList_t Menu_level3_44_zh[] =
{
	{numof(Menu_L3_Digit_XXXXX), Menu_L3_Digit_XXXXX},	/* 00000 */
};

/* 45.远传间隔时间 */
MenuList_t Menu_level3_45_zh[] =
{
	{numof(Menu_L3_Digit_XXXX), Menu_L3_Digit_XXXX},	/* 0000 */
};

/********************************************
 *      各层级菜单构成信息
 ********************************************/

MenuList_t Menu_level0_list_zh[MENU_L0_MAX] =
{
	{numof(Menu_Init_zh), Menu_Init_zh},			/* 初始画面 */
	{numof(Menu_AutoMeasure), Menu_AutoMeasure},	/* 自动测量画面 */
};

MenuList_t Menu_level0_list_en[MENU_L0_MAX] =
{
	{numof(Menu_Init_en), Menu_Init_en},			/* 初始画面 */
	{numof(Menu_AutoMeasure), Menu_AutoMeasure},	/* 自动测量画面 */
};

MenuList_t Menu_level1_list_zh[MENU_L1_MAX] =
{
	{numof(Menu_ParamSet_zh), (void*)Menu_ParamSet_zh},	/* 参数设置 */
	{numof(Menu_TotalClr_zh), (void*)Menu_TotalClr_zh},	/* 总量清零 */
};

MenuList_t Menu_level1_list_en[MENU_L1_MAX] =
{
	{numof(Menu_ParamSet_en), (void*)Menu_ParamSet_en},	/* Parament Set */
	{numof(Menu_TotalClr_en), (void*)Menu_TotalClr_en},	/* Total clear */
};

MenuList_t Menu_level2_list_zh[MENU_L2_MAX] =
{
	{numof(Menu_ParamSet_01_zh), (void*)Menu_ParamSet_01_zh},	/* 语言 */
	{numof(Menu_ParamSet_02_zh), (void*)Menu_ParamSet_02_zh},	/* 仪表通讯地址 */
	{numof(Menu_ParamSet_03_zh), (void*)Menu_ParamSet_03_zh},	/* 仪表通讯速度 */
	{numof(Menu_ParamSet_04_zh), (void*)Menu_ParamSet_04_zh},	/* 测量管道口径 */
	{numof(Menu_ParamSet_05_zh), (void*)Menu_ParamSet_05_zh},	/* 流量单位 */
	{numof(Menu_ParamSet_06_zh), (void*)Menu_ParamSet_06_zh},	/* 仪表量程设置 */
	{numof(Menu_ParamSet_07_zh), (void*)Menu_ParamSet_07_zh},	/* 测量阻尼时间 */
	{numof(Menu_ParamSet_08_zh), (void*)Menu_ParamSet_08_zh},	/* 流量方向择项 */
	{numof(Menu_ParamSet_09_zh), (void*)Menu_ParamSet_09_zh},	/* 流量零点修正 */
	{numof(Menu_ParamSet_10_zh), (void*)Menu_ParamSet_10_zh},	/* 小信号切除点 */
	{numof(Menu_ParamSet_11_zh), (void*)Menu_ParamSet_11_zh},	/* 允许切除显示 */
	{numof(Menu_ParamSet_12_zh), (void*)Menu_ParamSet_12_zh},	/* 流量积算单位 */
	{numof(Menu_ParamSet_13_zh), (void*)Menu_ParamSet_13_zh},	/* 反向输出允许 */
	{numof(Menu_ParamSet_14_zh), (void*)Menu_ParamSet_14_zh},	/* 电流输出类型 */
	{numof(Menu_ParamSet_15_zh), (void*)Menu_ParamSet_15_zh},	/* 脉冲输出方式 */
	{numof(Menu_ParamSet_16_zh), (void*)Menu_ParamSet_16_zh},	/* 脉冲单位当量 */
	{numof(Menu_ParamSet_17_zh), (void*)Menu_ParamSet_17_zh},	/* 频率输出范围 */
	{numof(Menu_ParamSet_18_zh), (void*)Menu_ParamSet_18_zh},	/* 空管报警允许 */
	{numof(Menu_ParamSet_19_zh), (void*)Menu_ParamSet_19_zh},	/* 空管报警阈值 */
	{numof(Menu_ParamSet_20_zh), (void*)Menu_ParamSet_20_zh},	/* 上限报警允许 */
	{numof(Menu_ParamSet_21_zh), (void*)Menu_ParamSet_21_zh},	/* 上限报警数值 */
	{numof(Menu_ParamSet_22_zh), (void*)Menu_ParamSet_22_zh},	/* 下限报警允许 */
	{numof(Menu_ParamSet_23_zh), (void*)Menu_ParamSet_23_zh},	/* 下限报警数值 */
	{numof(Menu_ParamSet_24_zh), (void*)Menu_ParamSet_24_zh},	/* 励磁报警允许 */
	{numof(Menu_ParamSet_25_zh), (void*)Menu_ParamSet_25_zh},	/* 总量清零密码 */
	{numof(Menu_ParamSet_26_zh), (void*)Menu_ParamSet_26_zh},	/* 传感器编码1 */
	{numof(Menu_ParamSet_27_zh), (void*)Menu_ParamSet_27_zh},	/* 传感器编码2 */
	{numof(Menu_ParamSet_28_zh), (void*)Menu_ParamSet_28_zh},	/* 励磁方式选择 */
	{numof(Menu_ParamSet_29_zh), (void*)Menu_ParamSet_29_zh},	/* 传感器系数值 */
	{numof(Menu_ParamSet_30_zh), (void*)Menu_ParamSet_30_zh},	/* 修正系数0 */
	{numof(Menu_ParamSet_31_zh), (void*)Menu_ParamSet_31_zh},	/* 流量修正点0 */
	{numof(Menu_ParamSet_32_zh), (void*)Menu_ParamSet_32_zh},	/* 修正系数1 */
	{numof(Menu_ParamSet_33_zh), (void*)Menu_ParamSet_33_zh},	/* 流量修正点1 */
	{numof(Menu_ParamSet_34_zh), (void*)Menu_ParamSet_34_zh},	/* 修正系数2 */
	{numof(Menu_ParamSet_35_zh), (void*)Menu_ParamSet_35_zh},	/* 流量修正点2 */
	{numof(Menu_ParamSet_36_zh), (void*)Menu_ParamSet_36_zh},	/* 修正系数3 */
	{numof(Menu_ParamSet_37_zh), (void*)Menu_ParamSet_37_zh},	/* 流量修正点3 */
	{numof(Menu_ParamSet_38_zh), (void*)Menu_ParamSet_38_zh},	/* 修正系数4 */
	{numof(Menu_ParamSet_39_zh), (void*)Menu_ParamSet_39_zh},	/* 正向累计设定 */
	{numof(Menu_ParamSet_40_zh), (void*)Menu_ParamSet_40_zh},	/* 反向累计设定 */
	{numof(Menu_ParamSet_41_zh), (void*)Menu_ParamSet_41_zh},	/* 电流零点修正 */
	{numof(Menu_ParamSet_42_zh), (void*)Menu_ParamSet_42_zh},	/* 电流满度修正 */
	{numof(Menu_ParamSet_43_zh), (void*)Menu_ParamSet_43_zh},	/* 出厂标定系数 */
	{numof(Menu_ParamSet_44_zh), (void*)Menu_ParamSet_44_zh},	/* 设定密度 */
	{numof(Menu_ParamSet_45_zh), (void*)Menu_ParamSet_45_zh},	/* 远传间隔时间 */
};

MenuList_t Menu_level2_list_en[MENU_L2_MAX] =
{
	{numof(Menu_ParamSet_01_en), (void*)Menu_ParamSet_01_en},	/* Language */
	{numof(Menu_ParamSet_02_en), (void*)Menu_ParamSet_02_en},	/* Commaddress */
	{numof(Menu_ParamSet_03_en), (void*)Menu_ParamSet_03_en},	/* Baud Rate */
	{numof(Menu_ParamSet_04_en), (void*)Menu_ParamSet_04_en},	/* Snsr Size */
	{numof(Menu_ParamSet_05_en), (void*)Menu_ParamSet_05_en},	/* Flow Unit */
	{numof(Menu_ParamSet_06_en), (void*)Menu_ParamSet_06_en},	/* Flow Range */
	{numof(Menu_ParamSet_07_en), (void*)Menu_ParamSet_07_en},	/* Damp */
	{numof(Menu_ParamSet_08_en), (void*)Menu_ParamSet_08_en},	/* Flow Direct */
	{numof(Menu_ParamSet_09_en), (void*)Menu_ParamSet_09_en},	/* Flow Zero */
	{numof(Menu_ParamSet_10_en), (void*)Menu_ParamSet_10_en},	/* Flow Cutoff */
	{numof(Menu_ParamSet_11_en), (void*)Menu_ParamSet_11_en},	/* Cutoff Ena */
	{numof(Menu_ParamSet_12_en), (void*)Menu_ParamSet_12_en},	/* Total Unit */
	{numof(Menu_ParamSet_13_en), (void*)Menu_ParamSet_13_en},	/* SegmaN Ena */
	{numof(Menu_ParamSet_14_en), (void*)Menu_ParamSet_14_en},	/* Analog Type */
	{numof(Menu_ParamSet_15_en), (void*)Menu_ParamSet_15_en},	/* Pulse Type */
	{numof(Menu_ParamSet_16_en), (void*)Menu_ParamSet_16_en},	/* Pulse Fact */
	{numof(Menu_ParamSet_17_en), (void*)Menu_ParamSet_17_en},	/* Freque Max */
	{numof(Menu_ParamSet_18_en), (void*)Menu_ParamSet_18_en},	/* Mtsnsr Ena */
	{numof(Menu_ParamSet_19_en), (void*)Menu_ParamSet_19_en},	/* Mtsnsr Trip */
	{numof(Menu_ParamSet_20_zh), (void*)Menu_ParamSet_20_en},	/* Alm Hi Ena */
	{numof(Menu_ParamSet_21_en), (void*)Menu_ParamSet_21_en},	/* Alm Hi Val */
	{numof(Menu_ParamSet_22_zh), (void*)Menu_ParamSet_22_en},	/* Alm Low Ena */
	{numof(Menu_ParamSet_23_zh), (void*)Menu_ParamSet_23_en},	/* Alm Low Val */
	{numof(Menu_ParamSet_24_zh), (void*)Menu_ParamSet_24_en},	/* Coil Alm Ena */
	{numof(Menu_ParamSet_25_en), (void*)Menu_ParamSet_25_en},	/* Clr Sum Key */
	{numof(Menu_ParamSet_26_zh), (void*)Menu_ParamSet_26_en},	/* Sensor Code1 */
	{numof(Menu_ParamSet_27_zh), (void*)Menu_ParamSet_27_en},	/* Sensor Code2 */
	{numof(Menu_ParamSet_28_zh), (void*)Menu_ParamSet_28_en},	/* Field Type */
	{numof(Menu_ParamSet_29_zh), (void*)Menu_ParamSet_29_en},	/* Sensor Fact */
	{numof(Menu_ParamSet_30_zh), (void*)Menu_ParamSet_30_en},	/* Correct Fact0 */
	{numof(Menu_ParamSet_31_zh), (void*)Menu_ParamSet_31_en},	/* Correct Valu0 */
	{numof(Menu_ParamSet_32_zh), (void*)Menu_ParamSet_32_en},	/* Correct Fact1 */
	{numof(Menu_ParamSet_33_zh), (void*)Menu_ParamSet_33_en},	/* Correct Valu1 */
	{numof(Menu_ParamSet_34_zh), (void*)Menu_ParamSet_34_en},	/* Correct Fact2 */
	{numof(Menu_ParamSet_35_zh), (void*)Menu_ParamSet_35_en},	/* Correct Valu2 */
	{numof(Menu_ParamSet_36_zh), (void*)Menu_ParamSet_36_en},	/* Correct Fact3 */
	{numof(Menu_ParamSet_37_zh), (void*)Menu_ParamSet_37_en},	/* Correct Valu3 */
	{numof(Menu_ParamSet_38_zh), (void*)Menu_ParamSet_38_en},	/* Correct Fact4 */
	{numof(Menu_ParamSet_39_zh), (void*)Menu_ParamSet_39_en},	/* Fwd Total */
	{numof(Menu_ParamSet_40_zh), (void*)Menu_ParamSet_40_en},	/* Rev Total */
	{numof(Menu_ParamSet_41_zh), (void*)Menu_ParamSet_41_en},	/* Analog Zero */
	{numof(Menu_ParamSet_42_zh), (void*)Menu_ParamSet_42_en},	/* Analog Range */
	{numof(Menu_ParamSet_43_zh), (void*)Menu_ParamSet_43_en},	/* Meter Fact */
	{numof(Menu_ParamSet_44_zh), (void*)Menu_ParamSet_44_en},	/* Set Density */
	{numof(Menu_ParamSet_45_zh), (void*)Menu_ParamSet_45_en},	/* Send Int */
};

MenuList_t Menu_level3_list_zh[MENU_L3_MAX] =
{
	{numof(Menu_level3_01_zh), Menu_level3_01_zh},	/* 语言_中文/English */
	{numof(Menu_level3_02_zh), Menu_level3_02_zh},	/* 仪表通讯地址_0～99 */
	{numof(Menu_level3_03_zh), Menu_level3_03_zh},	/* 仪表通讯速度_300～38400 */
	{numof(Menu_level3_04_zh), Menu_level3_04_zh},	/* 测量管道口径_3～3000 */
	{numof(Menu_level3_05_zh), Menu_level3_05_zh},	/* 流量单位 */
	{numof(Menu_level3_06_zh), Menu_level3_06_zh},	/* 仪表量程设置_0～99999 */
	{numof(Menu_level3_07_zh), Menu_level3_07_zh},	/* 测量阻尼时间_1～64 */
	{numof(Menu_level3_08_zh), Menu_level3_08_zh},	/* 流量方向择项_正向/反向 */
	{numof(Menu_level3_09_zh), Menu_level3_09_zh},	/* 流量零点修正_0～±9999 */
	{numof(Menu_level3_10_zh), Menu_level3_10_zh},	/* 小信号切除点_0～599.99% */
	{numof(Menu_level3_11_zh), Menu_level3_11_zh},	/* 允许切除显示_允许/禁止 */
	{numof(Menu_level3_12_zh), Menu_level3_12_zh},	/* 流量积算单位_0.001m3～1m3/0.001L～1L */
	{numof(Menu_level3_13_zh), Menu_level3_13_zh},	/* 反向输出允许_允许/禁止 */
	{numof(Menu_level3_14_zh), Menu_level3_14_zh},	/* 电流输出类型_0～10mA/4～20mA */
	{numof(Menu_level3_15_zh), Menu_level3_15_zh},	/* 脉冲输出方式_频率/脉冲 */
	{numof(Menu_level3_16_zh), Menu_level3_16_zh},	/* 脉冲单位当量_0.001m3～1m3/0.001L～1L */
	{numof(Menu_level3_17_zh), Menu_level3_17_zh},	/* 频率输出范围_1～ 5999 Hz */
	{numof(Menu_level3_18_zh), Menu_level3_18_zh},	/* 空管报警允许_允许/禁止 */
	{numof(Menu_level3_19_zh), Menu_level3_19_zh},	/* 空管报警阈值_59999 */
	{numof(Menu_level3_20_zh), Menu_level3_20_zh},	/* 上限报警允许_允许/禁止 */
	{numof(Menu_level3_21_zh), Menu_level3_21_zh},	/* 上限报警数值_0～599.99% */
	{numof(Menu_level3_22_zh), Menu_level3_22_zh},	/* 下限报警允许_允许/禁止 */
	{numof(Menu_level3_23_zh), Menu_level3_23_zh},	/* 下限报警数值_0～599.99% */
	{numof(Menu_level3_24_zh), Menu_level3_24_zh},	/* 励磁报警允许_允许/禁止 */
	{numof(Menu_level3_25_zh), Menu_level3_25_zh},	/* 总量清零密码_0-99999 */
	{numof(Menu_level3_26_zh), Menu_level3_26_zh},	/* 传感器编码1_0-99999 */
	{numof(Menu_level3_27_zh), Menu_level3_27_zh},	/* 传感器编码2_0-99999 */
	{numof(Menu_level3_28_zh), Menu_level3_28_zh},	/* 励磁方式选择_方式1、2、3 */
	{numof(Menu_level3_29_zh), Menu_level3_29_zh},	/* 传感器系数值_0.0000～5.9999 */
	{numof(Menu_level3_30_zh), Menu_level3_30_zh},	/* 修正系数0_0.0000～2.0000 */
	{numof(Menu_level3_31_zh), Menu_level3_31_zh},	/* 流量修正点0_00.0~10.0 */
	{numof(Menu_level3_32_zh), Menu_level3_32_zh},	/* 修正系数1_0.0000～2.0000 */
	{numof(Menu_level3_33_zh), Menu_level3_33_zh},	/* 流量修正点1_00.0~10.0 */
	{numof(Menu_level3_34_zh), Menu_level3_34_zh},	/* 修正系数2_0.0000～2.0000 */
	{numof(Menu_level3_35_zh), Menu_level3_35_zh},	/* 流量修正点2_00.0~10.0 */
	{numof(Menu_level3_36_zh), Menu_level3_36_zh},	/* 修正系数3_0.0000～2.0000 */
	{numof(Menu_level3_37_zh), Menu_level3_37_zh},	/* 流量修正点3_00.0~10.0 */
	{numof(Menu_level3_38_zh), Menu_level3_38_zh},	/* 修正系数4_0.0000～2.0000 */
	{numof(Menu_level3_39_zh), Menu_level3_39_zh},	/* 正向累计设定_0～999999999 */
	{numof(Menu_level3_40_zh), Menu_level3_40_zh},	/* 反向累计设定_0～999999999 */
	{numof(Menu_level3_41_zh), Menu_level3_41_zh},	/* 电流零点修正_0.0000～1.9999 */
	{numof(Menu_level3_42_zh), Menu_level3_42_zh},	/* 电流满度修正_0.0000～3.9999 */
	{numof(Menu_level3_43_zh), Menu_level3_43_zh},	/* 出厂标定系数_0.0000～5.9999 */
	{numof(Menu_level3_44_zh), Menu_level3_44_zh},	/* 设定密度_0～59999 */
	{numof(Menu_level3_45_zh), Menu_level3_45_zh},	/* 远传间隔时间_5~1440 */
};

MenuList_t Menu_level3_list_en[MENU_L3_MAX] =
{
	{numof(Menu_level3_01_zh), Menu_level3_01_zh},	/* 语言_中文/English */
	{numof(Menu_level3_02_zh), Menu_level3_02_zh},	/* 仪表通讯地址_0～99 */
	{numof(Menu_level3_03_zh), Menu_level3_03_zh},	/* 仪表通讯速度_300～38400 */
	{numof(Menu_level3_04_zh), Menu_level3_04_zh},	/* 测量管道口径_3～3000 */
	{numof(Menu_level3_05_zh), Menu_level3_05_zh},	/* 流量单位 */
	{numof(Menu_level3_06_zh), Menu_level3_06_zh},	/* 仪表量程设置_0～99999 */
	{numof(Menu_level3_07_zh), Menu_level3_07_zh},	/* 测量阻尼时间_1～64 */
	{numof(Menu_level3_08_en), Menu_level3_08_en},	/* 流量方向择项_Forward/Reverse */
	{numof(Menu_level3_09_zh), Menu_level3_09_zh},	/* 流量零点修正_0～±9999 */
	{numof(Menu_level3_10_zh), Menu_level3_10_zh},	/* 小信号切除点_0～599.99% */
	{numof(Menu_level3_11_en), Menu_level3_11_en},	/* 允许切除显示_Enable/Disable */
	{numof(Menu_level3_12_zh), Menu_level3_12_zh},	/* 流量积算单位_0.001m3～1m3/0.001L～1L */
	{numof(Menu_level3_13_en), Menu_level3_13_en},	/* 反向输出允许_Enable/Disable */
	{numof(Menu_level3_14_zh), Menu_level3_14_zh},	/* 电流输出类型_0～10mA/4～20mA */
	{numof(Menu_level3_15_en), Menu_level3_15_en},	/* 脉冲输出方式_Frequency/Pulse */
	{numof(Menu_level3_16_zh), Menu_level3_16_zh},	/* 脉冲单位当量_0.001m3～1m3/0.001L～1L */
	{numof(Menu_level3_17_zh), Menu_level3_17_zh},	/* 频率输出范围_1～ 5999 Hz */
	{numof(Menu_level3_18_en), Menu_level3_18_en},	/* 空管报警允许_Enable/Disable */
	{numof(Menu_level3_19_zh), Menu_level3_19_zh},	/* 空管报警阈值_59999 */
	{numof(Menu_level3_20_en), Menu_level3_20_en},	/* 上限报警允许_Enable/Disable */
	{numof(Menu_level3_21_zh), Menu_level3_21_zh},	/* 上限报警数值_0～599.99% */
	{numof(Menu_level3_22_en), Menu_level3_22_en},	/* 下限报警允许_Enable/Disable */
	{numof(Menu_level3_23_zh), Menu_level3_23_zh},	/* 下限报警数值_0～599.99% */
	{numof(Menu_level3_24_en), Menu_level3_24_en},	/* 励磁报警允许_Enable/Disable */
	{numof(Menu_level3_25_zh), Menu_level3_25_zh},	/* 总量清零密码_0-99999 */
	{numof(Menu_level3_26_zh), Menu_level3_26_zh},	/* 传感器编码1_0-99999 */
	{numof(Menu_level3_27_zh), Menu_level3_27_zh},	/* 传感器编码2_0-99999 */
	{numof(Menu_level3_28_en), Menu_level3_28_en},	/* 励磁方式选择_Type1、2、3 */
	{numof(Menu_level3_29_zh), Menu_level3_29_zh},	/* 传感器系数值_0.0000～5.9999 */
	{numof(Menu_level3_30_zh), Menu_level3_30_zh},	/* 修正系数0_0.0000～2.0000 */
	{numof(Menu_level3_31_zh), Menu_level3_31_zh},	/* 流量修正点0_00.0~10.0 */
	{numof(Menu_level3_32_zh), Menu_level3_32_zh},	/* 修正系数1_0.0000～2.0000 */
	{numof(Menu_level3_33_zh), Menu_level3_33_zh},	/* 流量修正点1_00.0~10.0 */
	{numof(Menu_level3_34_zh), Menu_level3_34_zh},	/* 修正系数2_0.0000～2.0000 */
	{numof(Menu_level3_35_zh), Menu_level3_35_zh},	/* 流量修正点2_00.0~10.0 */
	{numof(Menu_level3_36_zh), Menu_level3_36_zh},	/* 修正系数3_0.0000～2.0000 */
	{numof(Menu_level3_37_zh), Menu_level3_37_zh},	/* 流量修正点3_00.0~10.0 */
	{numof(Menu_level3_38_zh), Menu_level3_38_zh},	/* 修正系数4_0.0000～2.0000 */
	{numof(Menu_level3_39_zh), Menu_level3_39_zh},	/* 正向累计设定_0～999999999 */
	{numof(Menu_level3_40_zh), Menu_level3_40_zh},	/* 反向累计设定_0～999999999 */
	{numof(Menu_level3_41_zh), Menu_level3_41_zh},	/* 电流零点修正_0.0000～1.9999 */
	{numof(Menu_level3_42_zh), Menu_level3_42_zh},	/* 电流满度修正_0.0000～3.9999 */
	{numof(Menu_level3_43_zh), Menu_level3_43_zh},	/* 出厂标定系数_0.0000～5.9999 */
	{numof(Menu_level3_44_zh), Menu_level3_44_zh},	/* 设定密度_0～59999 */
	{numof(Menu_level3_45_zh), Menu_level3_45_zh},	/* 远传间隔时间_5~1440 */
};

MenuList_t Menu_level4_list_zh[MENU_L4_MAX] =
{
	{numof(Menu_Password_zh), Menu_Password_zh},		/* 参数设置密码 */
	{numof(Menu_Password_zh), Menu_Password_zh},		/* 总量清零密码 */
};

MenuList_t Menu_level4_list_en[MENU_L4_MAX] =
{
	{numof(Menu_Password_en), Menu_Password_en},		/* 参数设置密码 */
	{numof(Menu_Password_en), Menu_Password_en},		/* 总量清零密码 */
};

/********************************************
 *      各层级菜单 总管理列表
 ********************************************/

MenuList_t* Menu_level0_list[] =
{
	Menu_level0_list_zh,
	Menu_level0_list_en
};

MenuList_t* Menu_level1_list[] =
{
	Menu_level1_list_zh,
	Menu_level1_list_en
};

MenuList_t* Menu_level2_list[] =
{
	Menu_level2_list_zh,
	Menu_level2_list_en
};

MenuList_t* Menu_level3_list[] =
{
	Menu_level3_list_zh,
	Menu_level3_list_en
};

MenuList_t* Menu_level4_list[] =
{
	Menu_level4_list_zh,
	Menu_level4_list_en
};

