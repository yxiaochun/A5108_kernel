#ifndef __S6E3FA3_A7XE_PARAM_H__
#define __S6E3FA3_A7XE_PARAM_H__

#include <linux/types.h>
#include <linux/kernel.h>
#include "dynamic_aid_s6e3fa3_j7xe.h"

#define UI_MAX_BRIGHTNESS	255
#define UI_MIN_BRIGHTNESS	0
#define UI_DEFAULT_BRIGHTNESS	128
#define NORMAL_TEMPERATURE	25	/* 25 degrees Celsius */

#define GAMMA_CMD_CNT		ARRAY_SIZE(SEQ_GAMMA_CONDITION_SET)
#define ACL_CMD_CNT		ARRAY_SIZE(SEQ_ACL_OFF)
#define OPR_CMD_CNT		ARRAY_SIZE(SEQ_OPR_ACL_OFF)
#define ELVSS_CMD_CNT		ARRAY_SIZE(SEQ_ELVSS_SET)
#define AID_CMD_CNT		ARRAY_SIZE(SEQ_AID_SETTING)
#define HBM_CMD_CNT		ARRAY_SIZE(SEQ_HBM_OFF)
#define TSET_CMD_CNT		ARRAY_SIZE(SEQ_TSET_SETTING)

#define LDI_REG_ELVSS		0xB6
#define LDI_REG_COORDINATE	0xA1
#define LDI_REG_DATE		LDI_REG_MTP
#define LDI_REG_ID		0x04
#define LDI_REG_CHIP_ID		0xD6
#define LDI_REG_MTP		0xC8
#define LDI_REG_HBM		0xB4
#define LDI_REG_RDDPM		0x0A
#define LDI_REG_RDDSM		0x0E
#define LDI_REG_ESDERR		0xEE

/* len is read length */
#define LDI_LEN_ELVSS		(ELVSS_CMD_CNT - 1)
#define LDI_LEN_COORDINATE	4
#define LDI_LEN_DATE		7
#define LDI_LEN_ID		3
#define LDI_LEN_CHIP_ID		5
#define LDI_LEN_MTP		35
#define LDI_LEN_HBM		28
#define LDI_LEN_RDDPM		1
#define LDI_LEN_RDDSM		1
#define LDI_LEN_ESDERR		1

/* offset is position including addr, not only para */
#define LDI_OFFSET_AOR_1	1
#define LDI_OFFSET_AOR_2	2

#define LDI_OFFSET_ELVSS_1	1	/* B6h 1st Para: MPS_CON */
#define LDI_OFFSET_ELVSS_2	2	/* B6h 2nd Para: ELVSS_Dim_offset */
#define LDI_OFFSET_ELVSS_3	22	/* B6h 22nd Para: ELVSS Temp Compensation */

#define LDI_OFFSET_HBM		1
#define LDI_OFFSET_ACL		1
#define LDI_OFFSET_TSET		1

#define LDI_GPARA_DATE		40	/* 0xC8 41st Para */
#define LDI_GPARA_HBM_ELVSS	22	/* 0xB6 23th para */

#ifdef CONFIG_LCD_HMT
enum {
	HMT_OFF,
	HMT_ON,
	HMT_MAX
};

static const unsigned char SEQ_HMT_ON1[] = {    /* aid */
	0xB2,
	0x20, 0x46, /* AOR 70% Setting */
	0x12, 0x12, 0x12, 0x00 /* AID 1-Cycle */
};

static const unsigned char SEQ_HMT_OFF1[] = {   /* aid */
	0xB2,
	0x00, 0x10, /* AOR 0% Setting */
	0x12, 0x12, 0x12, 0x40 /* AID 4-Cycle */
};

static const unsigned char SEQ_HMT_REVERSE_PORCH[] = {
	0xF2,
	0x01, 0x00, 0x02, 0x5A, 0xF0,
	0x0C, 0x08 /* Reverse Porch Setting */
};

static const unsigned char SEQ_HMT_FORWARD_PORCH[] = {
	0xF2,
	0x01, 0x00, 0x02, 0x5A, 0xF0,
	0x09, 0x07 /* Forward Porch Setting */
};

static const unsigned char SEQ_HMT_AID_REVERSE1[] = {   /* G.Param */
	0xCB,
	0x28, 0x01, 0x01, 0x01, 0x10, 0x66, 0x88, 0x00,
	0x00, 0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x12, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x14,
	0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0xCF,
	0x11, 0x0D, 0x04, 0x05, 0x00, 0xC2, 0x00, 0x00,
	0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x84, 0xC5, 0xC2,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x8C, 0x6E, 0x00, 0x00, 0x14
};

static const unsigned char SEQ_HMT_AID_FORWARD1[] = {   /* G.Param */
	0xCB,
	0x28, 0x01, 0x01, 0x01, 0x10, 0x66, 0x88, 0x00,
	0x00, 0x05, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x12, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x74, 0x00, 0x00, 0xCF,
	0x11, 0x0D, 0x04, 0x05, 0x00, 0xC2, 0x00, 0x00,
	0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0x04, 0xC5, 0xC2,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x8C, 0x6E, 0x00, 0x00, 0x01
};
static unsigned char SEQ_ELVSS_SET_HMT[] = {
	0xB6,
	0xBC,	/* B6h 1st Para: MPS_CON */
	0x04	/* B6h 2nd Para: ELVSS_Dim_offset */
};
#endif

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static unsigned char SEQ_SLEEP_OUT[] = {
	0x11
};

static unsigned char SEQ_SLEEP_IN[] = {
	0x10
};

static unsigned char SEQ_DISPLAY_ON[] = {
	0x29
};

static unsigned char SEQ_DISPLAY_OFF[] = {
	0x28
};

static unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xF0,
	0x5A, 0x5A
};

static unsigned char SEQ_TEST_KEY_OFF_F0[] = {
	0xF0,
	0xA5, 0xA5
};

static unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xFC,
	0x5A, 0x5A
};

static unsigned char SEQ_TEST_KEY_OFF_FC[] = {
	0xFC,
	0xA5, 0xA5
};

static unsigned char SEQ_TE_ON[] = {
	0x35,
	0x00
};

static unsigned char SEQ_PCD_SET_DET_LOW[] = {
	0xCC,
	0x5C
};

static unsigned char SEQ_ERR_FG_SETTING[] = {
	0xED,
	0x44
};

static unsigned char SEQ_AVC_SETTING_1[] = {
	0xB0,
	0x1E
};

static unsigned char SEQ_AVC_SETTING_2[] = {
	0xFD,
	0xB2
};

static unsigned char SEQ_GAMMA_CONDITION_SET[] = {
	0xCA,
	0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x00
};

static unsigned char SEQ_AID_SETTING[] = {
	0xB2,
	0x00, 0x10
};

static unsigned char SEQ_ELVSS_SET[] = {
	0xB6,
	0xBC,	/* B6h 1st Para: MPS_CON */
	0x04,	/* B6h 2nd Para: ELVSS_Dim_offset */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00,
	0x00,	/* B6h 22nd Para: ELVSS Temp Compensation */
	0x00	/* B6h 23rd Para: OTP for B6h 22nd Para of HBM Interpolation */
};

static unsigned char SEQ_GAMMA_UPDATE[] = {
	0xF7,
	0x03
};

static unsigned char SEQ_HBM_OFF[] = {
	0x53,
	0x00
};

static unsigned char SEQ_HBM_ON[] = {
	0x53,
	0xC0
};

static unsigned char SEQ_OPR_ACL_OFF[] = {
	0xB5,
	0x40	/* 16 Frame Avg. at ACL Off */
};

static unsigned char SEQ_OPR_ACL_ON[] = {
	0xB5,
	0x50	/* 32 Frame Avg. at ACL On */
};

static unsigned char SEQ_ACL_OFF[] = {
	0x55,
	0x00
};

static unsigned char SEQ_ACL_ON[] = {
	0x55,
	0x01	/* 0x01 : ACL 15% (Default) */
};

static unsigned char SEQ_TSET_SETTING[] = {
	0xB8,
	0x19	/* (ex) 25 degree : 0x19 */
};

enum {
	ACL_STATUS_0P,
	ACL_STATUS_8P,
	ACL_STATUS_MAX
};

enum {
	OPR_STATUS_ACL_OFF,
	OPR_STATUS_ACL_ON,
	OPR_STATUS_MAX
};

enum {
	CAPS_OFF,
	CAPS_ON,
	CAPS_MAX
};

enum {
	TEMP_ABOVE_MINUS_00_DEGREE,	/* T > 0 */
	TEMP_ABOVE_MINUS_20_DEGREE,	/* -20 < T <= 0 */
	TEMP_BELOW_MINUS_20_DEGREE,	/* T <= -20 */
	TEMP_MAX
};

enum {
	HBM_STATUS_OFF,
	HBM_STATUS_ON,
	HBM_STATUS_MAX
};

static unsigned char *HBM_TABLE[HBM_STATUS_MAX] = {SEQ_HBM_OFF, SEQ_HBM_ON};
static unsigned char *ACL_TABLE[ACL_STATUS_MAX] = {SEQ_ACL_OFF, SEQ_ACL_ON};
static unsigned char *OPR_TABLE[OPR_STATUS_MAX] = {SEQ_OPR_ACL_OFF, SEQ_OPR_ACL_ON};

static unsigned char elvss_mpscon_offset_data[IBRIGHTNESS_HBM_MAX][3] = {
	[IBRIGHTNESS_005NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_006NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_007NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_008NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_009NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_010NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_011NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_012NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_013NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_014NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_015NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_016NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_017NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_019NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_020NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_021NIT] = {0xB6, 0xAC, 0x0A},
	[IBRIGHTNESS_022NIT] = {0xB6, 0xAC, 0x0B},
	[IBRIGHTNESS_024NIT] = {0xB6, 0xAC, 0x0D},
	[IBRIGHTNESS_025NIT] = {0xB6, 0xAC, 0x0F},
	[IBRIGHTNESS_027NIT] = {0xB6, 0xAC, 0x11},
	[IBRIGHTNESS_029NIT] = {0xB6, 0xAC, 0x14},
	[IBRIGHTNESS_030NIT] = {0xB6, 0xAC, 0x17},
	[IBRIGHTNESS_032NIT] = {0xB6, 0xAC, 0x17},
	[IBRIGHTNESS_034NIT] = {0xB6, 0xAC, 0x17},
	[IBRIGHTNESS_037NIT] = {0xB6, 0xAC, 0x17},
	[IBRIGHTNESS_039NIT] = {0xB6, 0xAC, 0x17},
	[IBRIGHTNESS_041NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_044NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_047NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_050NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_053NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_056NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_060NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_064NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_068NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_072NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_077NIT] = {0xB6, 0xBC, 0x17},
	[IBRIGHTNESS_082NIT] = {0xB6, 0xBC, 0x16},
	[IBRIGHTNESS_087NIT] = {0xB6, 0xBC, 0x16},
	[IBRIGHTNESS_093NIT] = {0xB6, 0xBC, 0x16},
	[IBRIGHTNESS_098NIT] = {0xB6, 0xBC, 0x16},
	[IBRIGHTNESS_105NIT] = {0xB6, 0xBC, 0x15},
	[IBRIGHTNESS_111NIT] = {0xB6, 0xBC, 0x15},
	[IBRIGHTNESS_119NIT] = {0xB6, 0xBC, 0x14},
	[IBRIGHTNESS_126NIT] = {0xB6, 0xBC, 0x14},
	[IBRIGHTNESS_134NIT] = {0xB6, 0xBC, 0x14},
	[IBRIGHTNESS_143NIT] = {0xB6, 0xBC, 0x14},
	[IBRIGHTNESS_152NIT] = {0xB6, 0xBC, 0x13},
	[IBRIGHTNESS_162NIT] = {0xB6, 0xBC, 0x12},
	[IBRIGHTNESS_172NIT] = {0xB6, 0xBC, 0x11},
	[IBRIGHTNESS_183NIT] = {0xB6, 0xBC, 0x11},
	[IBRIGHTNESS_195NIT] = {0xB6, 0xBC, 0x10},
	[IBRIGHTNESS_207NIT] = {0xB6, 0xBC, 0x0F},
	[IBRIGHTNESS_220NIT] = {0xB6, 0xBC, 0x0E},
	[IBRIGHTNESS_234NIT] = {0xB6, 0xBC, 0x0D},
	[IBRIGHTNESS_249NIT] = {0xB6, 0xBC, 0x0C},
	[IBRIGHTNESS_265NIT] = {0xB6, 0xBC, 0x0B},
	[IBRIGHTNESS_282NIT] = {0xB6, 0xBC, 0x0A},
	[IBRIGHTNESS_300NIT] = {0xB6, 0xBC, 0x08},
	[IBRIGHTNESS_316NIT] = {0xB6, 0xBC, 0x07},
	[IBRIGHTNESS_333NIT] = {0xB6, 0xBC, 0x06},
	[IBRIGHTNESS_360NIT] = {0xB6, 0xBC, 0x04},
};

struct elvss_otp_info {
	unsigned int	nit;
	int not_otp[TEMP_MAX];
};

struct elvss_otp_info elvss_otp_data[IBRIGHTNESS_MAX] = {
	[IBRIGHTNESS_005NIT] = {5,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_006NIT] = {6,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_007NIT] = {7,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_008NIT] = {8,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_009NIT] = {9,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_010NIT] = {10,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_011NIT] = {11,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_012NIT] = {12,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_013NIT] = {13,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_014NIT] = {14,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_015NIT] = {15,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_016NIT] = {16,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_017NIT] = {17,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_019NIT] = {19,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_020NIT] = {20,	{0x0F, 0x19, 0x1F}},
	[IBRIGHTNESS_021NIT] = {21,	{0x11, 0x1A, 0x1F}},
	[IBRIGHTNESS_022NIT] = {22,	{0x12, 0x1A, 0x1E}},
	[IBRIGHTNESS_024NIT] = {24,	{0x12, 0x19, 0x1C}},
	[IBRIGHTNESS_025NIT] = {25,	{0x12, 0x18, 0x1A}},
	[IBRIGHTNESS_027NIT] = {27,	{0x12, 0x17, 0x18}},
	[IBRIGHTNESS_029NIT] = {29,	{0x12, 0x15, 0x15}},
};

static unsigned char AOR_TABLE[256][AID_CMD_CNT] = {
	{0xB2, 0x70, 0x4F},/* 5nit */  
	{0xB2, 0x70, 0x43},            
	{0xB2, 0x70, 0x35},            
	{0xB2, 0x70, 0x27},            
	{0xB2, 0x70, 0x21},            
	{0xB2, 0x70, 0x11},            
	{0xB2, 0x70, 0x01},/* 11nit */ 
	{0xB2, 0x60, 0xF5},/* 12nit */ 
	{0xB2, 0x60, 0xE5},            
	{0xB2, 0x60, 0xD5},            
	{0xB2, 0x60, 0xC5},            
	{0xB2, 0x60, 0xB7},            
	{0xB2, 0x60, 0xB1},            
	{0xB2, 0x60, 0x93},            
	{0xB2, 0x60, 0x77},            
	{0xB2, 0x60, 0x68},            
	{0xB2, 0x60, 0x54},            
	{0xB2, 0x60, 0x27},            
	{0xB2, 0x60, 0x05},/* 25nit */ 
	{0xB2, 0x50, 0xE2},            
	{0xB2, 0x50, 0xA5},            
	{0xB2, 0x50, 0x77},            
	{0xB2, 0x50, 0x55},            
	{0xB2, 0x50, 0x33},/* 34nit */ 
	{0xB2, 0x40, 0xF6},/* 37nit */ 
	{0xB2, 0x40, 0xD2},            
	{0xB2, 0x40, 0xA7},            
	{0xB2, 0x40, 0x71},            
	{0xB2, 0x40, 0x33},/* 47nit */ 
	{0xB2, 0x30, 0xF6},/* 50nit */ 
	{0xB2, 0x30, 0xB7},            
	{0xB2, 0x30, 0x81},            
	{0xB2, 0x30, 0x02},/* 60nit */ 
	{0xB2, 0x20, 0xD7},/* 64nit */ 
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},            
	{0xB2, 0x20, 0xD5},/* 162nit */
	{0xB2, 0x20, 0x7F},            
	{0xB2, 0x20, 0x25},            
	{0xB2, 0x10, 0xC6},/* 195nit */
	{0xB2, 0x10, 0x67},            
	{0xB2, 0x10, 0x03},            
	{0xB2, 0x00, 0x8B},/* 234nit */
	{0xB2, 0x00, 0x10},            
	{0xB2, 0x00, 0x10},            
	{0xB2, 0x00, 0x10},            
	{0xB2, 0x00, 0x10},            
	{0xB2, 0x00, 0x10},            
	{0xB2, 0x00, 0x10},            
	{0xB2, 0x00, 0x10}/* 360nit */
};

/* platform brightness <-> gamma level */
static unsigned int brightness_table[] = {
	[0 ... 4] =		IBRIGHTNESS_005NIT,
	[5 ... 5] =		IBRIGHTNESS_006NIT,
	[6 ... 6] =		IBRIGHTNESS_007NIT,
	[7 ... 7] =		IBRIGHTNESS_008NIT,
	[8 ... 8] =		IBRIGHTNESS_009NIT,
	[9 ... 9] =		IBRIGHTNESS_010NIT,
	[10 ... 10] =		IBRIGHTNESS_011NIT,
	[11 ... 11] =		IBRIGHTNESS_012NIT,
	[12 ... 12] =		IBRIGHTNESS_013NIT,
	[13 ... 13] =		IBRIGHTNESS_014NIT,
	[14 ... 14] =		IBRIGHTNESS_015NIT,
	[15 ... 15] =		IBRIGHTNESS_016NIT,
	[16 ... 16] =		IBRIGHTNESS_017NIT,
	[17 ... 18] =		IBRIGHTNESS_019NIT,
	[19 ... 19] =		IBRIGHTNESS_020NIT,
	[20 ... 20] =		IBRIGHTNESS_021NIT,
	[21 ... 21] =		IBRIGHTNESS_022NIT,
	[22 ... 22] =		IBRIGHTNESS_024NIT,
	[23 ... 23] =		IBRIGHTNESS_025NIT,
	[24 ... 25] =		IBRIGHTNESS_027NIT,
	[26 ... 26] =		IBRIGHTNESS_029NIT,
	[27 ... 27] =		IBRIGHTNESS_030NIT,
	[28 ... 29] =		IBRIGHTNESS_032NIT,
	[30 ... 31] =		IBRIGHTNESS_034NIT,
	[32 ... 33] =		IBRIGHTNESS_037NIT,
	[34 ... 34] =		IBRIGHTNESS_039NIT,
	[35 ... 36] =		IBRIGHTNESS_041NIT,
	[37 ... 38] =		IBRIGHTNESS_044NIT,
	[39 ... 41] =		IBRIGHTNESS_047NIT,
	[42 ... 43] =		IBRIGHTNESS_050NIT,
	[44 ... 45] =		IBRIGHTNESS_053NIT,
	[46 ... 47] =		IBRIGHTNESS_056NIT,
	[48 ... 50] =		IBRIGHTNESS_060NIT,
	[51 ... 53] =		IBRIGHTNESS_064NIT,
	[54 ... 56] =		IBRIGHTNESS_068NIT,
	[57 ... 58] =		IBRIGHTNESS_072NIT,
	[59 ... 62] =		IBRIGHTNESS_077NIT,
	[63 ... 65] =		IBRIGHTNESS_082NIT,
	[66 ... 69] =		IBRIGHTNESS_087NIT,
	[70 ... 73] =		IBRIGHTNESS_093NIT,
	[74 ... 76] =		IBRIGHTNESS_098NIT,
	[77 ... 80] =		IBRIGHTNESS_105NIT,
	[81 ... 84] =		IBRIGHTNESS_111NIT,
	[85 ... 89] =		IBRIGHTNESS_119NIT,
	[90 ... 94] =		IBRIGHTNESS_126NIT,
	[95 ... 99] =		IBRIGHTNESS_134NIT,
	[100 ... 104] =		IBRIGHTNESS_143NIT,
	[105 ... 110] =		IBRIGHTNESS_152NIT,
	[111 ... 116] =		IBRIGHTNESS_162NIT,
	[117 ... 121] =		IBRIGHTNESS_172NIT,
	[122 ... 128] =		IBRIGHTNESS_183NIT,
	[129 ... 135] =		IBRIGHTNESS_195NIT,
	[136 ... 142] =		IBRIGHTNESS_207NIT,
	[143 ... 154] =		IBRIGHTNESS_220NIT,
	[155 ... 164] =		IBRIGHTNESS_234NIT,
	[165 ... 174] =		IBRIGHTNESS_249NIT,
	[175 ... 189] =		IBRIGHTNESS_265NIT,
	[190 ... 209] =		IBRIGHTNESS_282NIT,
	[210 ... 229] =		IBRIGHTNESS_300NIT,
	[230 ... 241] =		IBRIGHTNESS_316NIT,
	[242 ... 250] =		IBRIGHTNESS_333NIT,
	[251 ... 255] =		IBRIGHTNESS_360NIT,
	[256 ... 263] =		IBRIGHTNESS_500NIT
};

static unsigned int hbm_auto_brightness_table[] = {
	[0 ... 5]=		IBRIGHTNESS_360NIT,
	[6 ...12] =		IBRIGHTNESS_500NIT
};

#ifdef CONFIG_LCD_HMT
static unsigned char AOR_TABLE_HMT[IBRIGHTNESS_HMT_MAX][AID_CMD_CNT] = {
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x10, 0x84},
	{0xB2, 0x20, 0x46},
	{0xB2, 0x20, 0x46},
	{0xB2, 0x20, 0x46},
	{0xB2, 0x20, 0x46},
	{0xB2, 0x20, 0x46},
	{0xB2, 0x20, 0x46},
	{0xB2, 0x20, 0x46}
};

/* platform brightness <-> gamma level */
static unsigned int brightness_table_hmt[256] = {
	[0 ... 26] = IBRIGHTNESS_HMT_010NIT,
	[27 ... 29] = IBRIGHTNESS_HMT_011NIT,
	[30 ... 31] = IBRIGHTNESS_HMT_012NIT,
	[32 ... 33] = IBRIGHTNESS_HMT_013NIT,
	[34 ... 36] = IBRIGHTNESS_HMT_014NIT,
	[37 ... 38] = IBRIGHTNESS_HMT_015NIT,
	[39 ... 41] = IBRIGHTNESS_HMT_016NIT,
	[42 ... 46] = IBRIGHTNESS_HMT_017NIT,
	[47 ... 48] = IBRIGHTNESS_HMT_019NIT,
	[49 ... 50] = IBRIGHTNESS_HMT_020NIT,
	[51 ... 53] = IBRIGHTNESS_HMT_021NIT,
	[54 ... 55] = IBRIGHTNESS_HMT_022NIT,
	[56 ... 60] = IBRIGHTNESS_HMT_023NIT,
	[61 ... 65] = IBRIGHTNESS_HMT_025NIT,
	[66 ... 70] = IBRIGHTNESS_HMT_027NIT,
	[71 ... 75] = IBRIGHTNESS_HMT_029NIT,
	[76 ... 80] = IBRIGHTNESS_HMT_031NIT,
	[81 ... 84] = IBRIGHTNESS_HMT_033NIT,
	[85 ... 89] = IBRIGHTNESS_HMT_035NIT,
	[90 ... 94] = IBRIGHTNESS_HMT_037NIT,
	[95 ... 99] = IBRIGHTNESS_HMT_039NIT,
	[100 ... 106] = IBRIGHTNESS_HMT_041NIT,
	[107 ... 114] = IBRIGHTNESS_HMT_044NIT,
	[115 ... 121] = IBRIGHTNESS_HMT_047NIT,
	[122 ... 128] = IBRIGHTNESS_HMT_050NIT,
	[129 ... 135] = IBRIGHTNESS_HMT_053NIT,
	[136 ... 145] = IBRIGHTNESS_HMT_056NIT,
	[146 ... 155] = IBRIGHTNESS_HMT_060NIT,
	[156 ... 165] = IBRIGHTNESS_HMT_064NIT,
	[166 ... 174] = IBRIGHTNESS_HMT_068NIT,
	[175 ... 186] = IBRIGHTNESS_HMT_072NIT,
	[187 ... 199] = IBRIGHTNESS_HMT_077NIT,
	[200 ... 211] = IBRIGHTNESS_HMT_082NIT,
	[212 ... 225] = IBRIGHTNESS_HMT_087NIT,
	[226 ... 240] = IBRIGHTNESS_HMT_093NIT,
	[241 ... 254] = IBRIGHTNESS_HMT_099NIT,
	[255 ... 255] = IBRIGHTNESS_HMT_105NIT
};
#endif /* CONFIG_LCD_HMT */
#endif /* __S6E3FA3_A7XE_PARAM_H__ */
