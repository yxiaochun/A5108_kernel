/* linux/drivers/video/exynos/decon_7580/panels/s6e3fa2_aid_dimming.h
 *
 * Header file for Samsung AID Dimming Driver.
 *
 * Copyright (c) 2013 Samsung Electronics
 * Minwoo Kim <minwoo7945.kim@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __EA8061_AID_DIMMING_H__
#define __EA8061_AID_DIMMING_H__
//rev D
static signed char D_aid9685[5] = {0xB3, 0x00, 0x00, 0x04, 0xEB};
static signed char D_aid9585[5] = {0xB3, 0x00, 0x00, 0x04, 0xDE};
static signed char D_aid9523[5] = {0xB3, 0x00, 0x00, 0x04, 0xD6};
static signed char D_aid9438[5] = {0xB3, 0x00, 0x00, 0x04, 0xCB};
static signed char D_aid9338[5] = {0xB3, 0x00, 0x00, 0x04, 0xBE};
static signed char D_aid9285[5] = {0xB3, 0x00, 0x00, 0x04, 0xB7};
static signed char D_aid9200[5] = {0xB3, 0x00, 0x00, 0x04, 0xAC};
static signed char D_aid9100[5] = {0xB3, 0x00, 0x00, 0x04, 0x9F};
static signed char D_aid9046[5] = {0xB3, 0x00, 0x00, 0x04, 0x98};
static signed char D_aid8954[5] = {0xB3, 0x00, 0x00, 0x04, 0x8C};
static signed char D_aid8923[5] = {0xB3, 0x00, 0x00, 0x04, 0x88};
static signed char D_aid8800[5] = {0xB3, 0x00, 0x00, 0x04, 0x78};
static signed char D_aid8715[5] = {0xB3, 0x00, 0x00, 0x04, 0x6D};
static signed char D_aid8546[5] = {0xB3, 0x00, 0x00, 0x04, 0x57};
static signed char D_aid8462[5] = {0xB3, 0x00, 0x00, 0x04, 0x4C};
static signed char D_aid8346[5] = {0xB3, 0x00, 0x00, 0x04, 0x3D};
static signed char D_aid8246[5] = {0xB3, 0x00, 0x00, 0x04, 0x30};
static signed char D_aid8085[5] = {0xB3, 0x00, 0x00, 0x04, 0x1B};
static signed char D_aid7969[5] = {0xB3, 0x00, 0x00, 0x04, 0x0C};
static signed char D_aid7769[5] = {0xB3, 0x00, 0x00, 0x03, 0xF2};
static signed char D_aid7577[5] = {0xB3, 0x00, 0x00, 0x03, 0xD9};
static signed char D_aid7508[5] = {0xB3, 0x00, 0x00, 0x03, 0xD0};
static signed char D_aid7323[5] = {0xB3, 0x00, 0x00, 0x03, 0xB8};
static signed char D_aid7138[5] = {0xB3, 0x00, 0x00, 0x03, 0xA0};
static signed char D_aid6892[5] = {0xB3, 0x00, 0x00, 0x03, 0x80};
static signed char D_aid6715[5] = {0xB3, 0x00, 0x00, 0x03, 0x69};
static signed char D_aid6531[5] = {0xB3, 0x00, 0x00, 0x03, 0x51};
static signed char D_aid6262[5] = {0xB3, 0x00, 0x00, 0x03, 0x2E};
static signed char D_aid6000[5] = {0xB3, 0x00, 0x00, 0x03, 0x0C};
static signed char D_aid5731[5] = {0xB3, 0x00, 0x00, 0x02, 0xE9};
static signed char D_aid5454[5] = {0xB3, 0x00, 0x00, 0x02, 0xC5};
static signed char D_aid5177[5] = {0xB3, 0x00, 0x00, 0x02, 0xA1};
static signed char D_aid4800[5] = {0xB3, 0x00, 0x00, 0x02, 0x70};
static signed char D_aid4438[5] = {0xB3, 0x00, 0x00, 0x02, 0x41};
static signed char D_aid4062[5] = {0xB3, 0x00, 0x00, 0x02, 0x10};
static signed char D_aid3662[5] = {0xB3, 0x00, 0x00, 0x01, 0xDC};
static signed char D_aid3200[5] = {0xB3, 0x00, 0x00, 0x01, 0xA0};
static signed char D_aid2708[5] = {0xB3, 0x00, 0x00, 0x01, 0x60};
static signed char D_aid2185[5] = {0xB3, 0x00, 0x00, 0x01, 0x1C};
static signed char D_aid1654[5] = {0xB3, 0x00, 0x00, 0x00, 0xD7};
static signed char D_aid1038[5] = {0xB3, 0x00, 0x00, 0x00, 0x87};
static signed char D_aid0369[5] = {0xB3, 0x00, 0x00, 0x00, 0x30};


static signed char D_rtbl5nit[10] = {0, 12, 11, 8, 6, 5, 4, 2, 4, 0};
static signed char D_rtbl6nit[10] = {0, 12, 11, 8, 6, 5, 4, 2, 4, 0};
static signed char D_rtbl7nit[10] = {0, 10, 9, 7, 5, 4, 3, 2, 4, 0};
static signed char D_rtbl8nit[10] = {0, 10, 9, 6, 4, 4, 3, 2, 4, 0};
static signed char D_rtbl9nit[10] = {0, 10, 9, 6, 4, 4, 3, 2, 4, 0};
static signed char D_rtbl10nit[10] = {0, 9, 8, 5, 4, 4, 3, 2, 4, 0};
static signed char D_rtbl11nit[10] = {0, 9, 8, 5, 3, 4, 3, 2, 4, 0};
static signed char D_rtbl12nit[10] = {0, 8, 7, 5, 3, 4, 3, 2, 4, 0};
static signed char D_rtbl13nit[10] = {0, 7, 6, 5, 3, 4, 3, 2, 4, 0};
static signed char D_rtbl14nit[10] = {0, 7, 6, 5, 3, 3, 3, 2, 4, 0};
static signed char D_rtbl15nit[10] = {0, 6, 5, 5, 3, 3, 3, 2, 4, 0};
static signed char D_rtbl16nit[10] = {0, 6, 5, 4, 3, 3, 3, 2, 4, 0};
static signed char D_rtbl17nit[10] = {0, 6, 5, 4, 3, 3, 3, 2, 4, 0};
static signed char D_rtbl19nit[10] = {0, 5, 4, 4, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl20nit[10] = {0, 5, 4, 4, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl21nit[10] = {0, 6, 5, 4, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl22nit[10] = {0, 7, 6, 4, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl24nit[10] = {0, 8, 7, 5, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl25nit[10] = {0, 8, 7, 5, 4, 4, 4, 2, 3, 0};
static signed char D_rtbl27nit[10] = {0, 8, 7, 5, 4, 4, 4, 3, 3, 0};
static signed char D_rtbl29nit[10] = {0, 8, 7, 5, 4, 4, 4, 3, 3, 0};
static signed char D_rtbl30nit[10] = {0, 8, 7, 5, 4, 4, 3, 3, 3, 0};
static signed char D_rtbl32nit[10] = {0, 7, 6, 5, 4, 4, 3, 3, 3, 0};
static signed char D_rtbl34nit[10] = {0, 7, 6, 5, 4, 4, 3, 2, 3, 0};
static signed char D_rtbl37nit[10] = {0, 7, 6, 5, 3, 4, 3, 2, 3, 0};
static signed char D_rtbl39nit[10] = {0, 6, 5, 4, 3, 4, 3, 2, 3, 0};
static signed char D_rtbl41nit[10] = {0, 6, 5, 4, 3, 4, 3, 2, 3, 0};
static signed char D_rtbl44nit[10] = {0, 6, 5, 4, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl47nit[10] = {0, 6, 5, 4, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl50nit[10] = {0, 5, 4, 3, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl53nit[10] = {0, 5, 4, 3, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl56nit[10] = {0, 5, 4, 3, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl60nit[10] = {0, 5, 4, 3, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl64nit[10] = {0, 5, 4, 3, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl68nit[10] = {0, 4, 3, 3, 3, 3, 3, 2, 3, 0};
static signed char D_rtbl72nit[10] = {0, 4, 3, 2, 2, 3, 3, 3, 3, 0};
static signed char D_rtbl77nit[10] = {0, 4, 3, 2, 2, 3, 3, 3, 3, 0};
static signed char D_rtbl82nit[10] = {0, 4, 3, 2, 2, 3, 3, 3, 3, 0};
static signed char D_rtbl87nit[10] = {0, 4, 3, 2, 2, 3, 3, 3, 3, 0};
static signed char D_rtbl93nit[10] = {0, 4, 3, 2, 2, 3, 3, 3, 2, 0};
static signed char D_rtbl98nit[10] = {0, 4, 3, 2, 2, 3, 4, 4, 2, 0};
static signed char D_rtbl105nit[10] = {0, 4, 2, 2, 2, 3, 4, 4, 2, 0};
static signed char D_rtbl111nit[10] = {0, 4, 2, 2, 3, 3, 4, 4, 2, 0};
static signed char D_rtbl119nit[10] = {0, 3, 2, 2, 3, 3, 4, 4, 2, 0};
static signed char D_rtbl126nit[10] = {0, 3, 2, 2, 3, 3, 4, 4, 2, 0};
static signed char D_rtbl134nit[10] = {0, 3, 2, 2, 3, 3, 4, 5, 2, 0};
static signed char D_rtbl143nit[10] = {0, 3, 2, 2, 3, 3, 4, 5, 2, 0};
static signed char D_rtbl152nit[10] = {0, 3, 2, 2, 2, 3, 4, 5, 2, 0};
static signed char D_rtbl162nit[10] = {0, 3, 2, 2, 2, 3, 4, 5, 2, 0};
static signed char D_rtbl172nit[10] = {0, 2, 2, 2, 2, 3, 4, 5, 2, 0};
static signed char D_rtbl183nit[10] = {0, 2, 2, 2, 2, 3, 4, 5, 2, 0};
static signed char D_rtbl195nit[10] = {0, 1, 2, 1, 2, 3, 3, 5, 2, 0};
static signed char D_rtbl207nit[10] = {0, 1, 2, 1, 2, 2, 3, 4, 1, 0};
static signed char D_rtbl220nit[10] = {0, 1, 1, 1, 2, 2, 3, 4, 1, 0};
static signed char D_rtbl234nit[10] = {0, 1, 1, 1, 2, 2, 3, 4, 1, 0};
static signed char D_rtbl249nit[10] = {0, 1, 1, 1, 1, 2, 2, 3, 1, 0};
static signed char D_rtbl265nit[10] = {0, 0, 0, 1, 1, 1, 2, 3, 1, 0};
static signed char D_rtbl282nit[10] = {0, 0, 0, 1, 1, 1, 2, 2, 1, 0};
static signed char D_rtbl300nit[10] = {0, 0, 0, 1, 1, 1, 2, 2, 1, 0};
static signed char D_rtbl316nit[10] = {0, 0, 0, 1, 1, 1, 1, 1, 1, 0};
static signed char D_rtbl333nit[10] = {0, 0, 0, 0, 1, 1, 1, 1, 0, 0};
static signed char D_rtbl350nit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static signed char D_ctbl5nit[30] = {0, 0, 0, 0, 0, 0,-42, 0, -11, -20, 0, -4, -7, 0, 0, -13, 0, 3, -7, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 1};
static signed char D_ctbl6nit[30] = {0, 0, 0, 0, 0, 0,-41, 0, -9, -17, 0, -4, -6, 0, 0, -13, 0, 3, -6, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 1};
static signed char D_ctbl7nit[30] = {0, 0, 0, 0, 0, 0,-40, 0, -9, -16, 0, -3, -7, 0, 0, -11, 0, 3, -5, 0, -1, 0, 0, 1, 0, 0, 0, 0, 0, 1};
static signed char D_ctbl8nit[30] = {0, 0, 0, 0, 0, 0,-38, 0, -8, -14, 0, -4, -7, 0, 0, -10, 0, 3, -4, 0, -1, 1, 0, 1, -1, 0, -1, 0, 0, 1};
static signed char D_ctbl9nit[30] = {0, 0, 0, 0, 0, 0,-36, 0, -6, -14, 0, -4, -7, 0, 0, -8, 0, 3, -4, 0, -1, 1, 0, 1, -1, 0, -1, 0, 0, 1};
static signed char D_ctbl10nit[30] = {0, 0, 0, 0, 0, 0,-34, 0, -6, -13, 0, -4, -5, 0, 0, -7, 0, 3, -4, 0, -1, 1, 0, 1, -1, 0, -1, 0, 0, 1};
static signed char D_ctbl11nit[30] = {0, 0, 0, 0, 0, 0,-32, 0, -5, -12, 0, -4, -5, 0, 0, -8, 0, 2, -3, 0, -1, 1, 0, 1, -1, 0, -1, 0, 0, 1};
static signed char D_ctbl12nit[30] = {0, 0, 0, 0, 0, 0,-30, 0, -5, -11, 0, -4, -5, 0, 0, -7, 0, 2, -2, 0, -1, 0, 0, 1, 0, 0, -1, 0, 0, 1};
static signed char D_ctbl13nit[30] = {0, 0, 0, 0, 0, 0,-29, 0, -5, -10, 0, -4, -5, 0, 0, -6, 0, 2, -2, 0, -1, 0, 0, 1, 0, 0, -1, 0, 0, 1};
static signed char D_ctbl14nit[30] = {0, 0, 0, 0, 0, 0,-28, 0, -5, -9, 0, -4, -5, 0, 0, -6, 0, 2, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 1};
static signed char D_ctbl15nit[30] = {0, 0, 0, 0, 0, 0,-27, 0, -5, -9, 0, -4, -3, 0, 0, -7, 0, 2, -1, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 1};
static signed char D_ctbl16nit[30] = {0, 0, 0, 0, 0, 0,-25, 0, -5, -8, 0, -4, -3, 0, 0, -7, 0, 1, -1, 0, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1};
static signed char D_ctbl17nit[30] = {0, 0, 0, 0, 0, 0,-23, 0, -6, -7, 0, -4, -3, 0, 0, -7, 0, 1, -1, 0, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1};
static signed char D_ctbl19nit[30] = {0, 0, 0, 0, 0, 0,-23, 0, -6, -5, 0, -4, -3, 0, 0, -6, 0, 1, -1, 0, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1};
static signed char D_ctbl20nit[30] = {0, 0, 0, 0, 0, 0,-20, 1, -3, -5, 0, -4, -3, 0, 0, -6, 0, 1, -1, 0, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1};
static signed char D_ctbl21nit[30] = {0, 0, 0, 0, 0, 0,-18, 0, -4, -4, 0, -4, -3, 0, 0, -5, 0, 1, -2, 0, -1, -1, 0, 0, 1, 0, -1, 0, 0, 1};
static signed char D_ctbl22nit[30] = {0, 0, 0, 0, 0, 0,-16, 0, -5, -4, 0, -5, -4, 0, 0, -4, 0, 1, -2, 0, -1, -1, 0, 0, 1, 0, 0, 0, 0, 0};
static signed char D_ctbl24nit[30] = {0, 0, 0, 0, 0, 0,-14, 0, -4, -3, 0, -4, -3, 0, -1, -4, 0, 1, -2, 0, -1, -1, 0, 0, 1, 0, 0, 0, 0, 0};
static signed char D_ctbl25nit[30] = {0, 0, 0, 0, 0, 0,-12, 0, -5, -3, 0, -4, -2, 0, -2, -5, 0, 0, -2, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl27nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -8, -4, 0, -5, -3, 0, -3, -5, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl29nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -10, -3, 0, -6, -3, 0, -3, -5, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl30nit[30] = {0, 0, 0, 0, 0, 0,-11, 0, -6, -2, 0, -5, -2, 0, -2, -5, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl32nit[30] = {0, 0, 0, 0, 0, 0,-15, 0, -10, -1, 0, -4, -2, 0, -2, -4, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl34nit[30] = {0, 0, 0, 0, 0, 0,-13, 0, -8, -1, 0, -4, -2, 0, -2, -4, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl37nit[30] = {0, 0, 0, 0, 0, 0,-12, 0, -6, -2, 0, -5, -2, 0, -2, -4, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl39nit[30] = {0, 0, 0, 0, 0, 0,-13, 0, -9, -2, 0, -5, -1, 0, -2, -4, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl41nit[30] = {0, 0, 0, 0, 0, 0,-12, 0, -8, -2, 0, -5, -1, 0, -2, -4, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl44nit[30] = {0, 0, 0, 0, 0, 0,-11, 0, -6, -2, 0, -5, -1, 0, -2, -4, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl47nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -4, -1, 0, -5, -1, 0, -2, -4, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl50nit[30] = {0, 0, 0, 0, 0, 0,-9, 0, -6, 0, 0, -5, -1, 0, -2, -4, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl53nit[30] = {0, 0, 0, 0, 0, 0,-8, 0, -4, 0, 0, -5, -1, 0, -2, -3, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl56nit[30] = {0, 0, 0, 0, 0, 0,-7, 0, -3, 0, 0, -5, -1, 0, -2, -3, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl60nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, -1, 1, 0, -5, -1, 0, -2, -3, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl64nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, -1, 2, 0, -5, -1, 0, -2, -3, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl68nit[30] = {0, 0, 0, 0, 0, 0,-5, 0, -2, 2, 0, -5, -1, 0, -2, -3, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl72nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, -2, 1, 0, -4, -1, 0, -3, -3, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 1, 0, 0};
static signed char D_ctbl77nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, -1, 1, 0, -5, 0, 0, -2, -3, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl82nit[30] = {0, 0, 0, 0, 0, 0,-5, 0, 0, 2, 0, -5, -1, 0, -2, -3, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 1, 0, 1};
static signed char D_ctbl87nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, 0, 1, 0, -5, -1, 0, -2, -2, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl93nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, 0, 1, 0, -5, -1, 0, -2, -2, 0, 0, 0, 0, 0, -1, 0, -1, 1, 0, 0, 0, 0, 1};
static signed char D_ctbl98nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, 0, 1, 0, -5, -1, 0, -2, -2, 0, 0, 0, 0, 0, -1, 0, -1, 1, 0, 0, 0, 0, 1};
static signed char D_ctbl105nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, -4, 1, 0, -3, -1, 0, -2, -1, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1};
static signed char D_ctbl111nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, -4, 1, 0, -1, 0, 0, -1, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl119nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -3, 1, 0, -3, 0, 0, -1, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl126nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -2, 0, 0, -3, 0, 0, -1, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl134nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -3, 0, 0, -2, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char D_ctbl143nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -2, 0, 0, -2, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1};
static signed char D_ctbl152nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -2, 0, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 1};
static signed char D_ctbl162nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -2, -1, 0, -1, 0, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char D_ctbl172nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -2, -1, 0, -1, 0, 0, 0, -1, 0, 0, 1, 0, 2, -1, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char D_ctbl183nit[30] = {0, 0, 0, 0, 0, 0,-2, 0, -1, -1, 0, -1, 0, 0, 0, -1, 0, 0, 1, 0, 2, -1, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char D_ctbl195nit[30] = {0, 0, 0, 0, 0, 0,-2, 0, -1, -1, 0, -2, 1, 0, 0, -1, 0, 0, 1, 0, 1, -1, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char D_ctbl207nit[30] = {0, 0, 0, 0, 0, 0,-2, 0, -1, -1, 0, -2, 1, 0, 0, -1, 0, 0, 1, 0, 1, -1, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char D_ctbl220nit[30] = {0, 0, 0, 0, 0, 0,-1, 0, 0, -1, 0, -2, 1, 0, 0, -1, 0, 0, 1, 0, 1, -1, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char D_ctbl234nit[30] = {0, 0, 0, 0, 0, 0,-1, 0, 0, 0, 0, -2, 1, 0, 0, -1, 0, 0, 1, 0, 1, -1, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char D_ctbl249nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl265nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl282nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl300nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl316nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl333nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char D_ctbl350nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};


//rev C
static signed char rtbl5nit[10] = {0, 4, 11, 8, 6, 5, 4, 3, 3, 0};
static signed char rtbl6nit[10] = {0, 4, 10, 7, 5, 4, 3, 3, 3, 0};
static signed char rtbl7nit[10] = {0, 3, 9, 6, 5, 4, 3, 3, 3, 0};
static signed char rtbl8nit[10] = {0, 3, 7, 6, 3, 4, 3, 3, 3, 0};
static signed char rtbl9nit[10] = {0, 3, 5, 5, 3, 4, 3, 3, 3, 0};
static signed char rtbl10nit[10] = {0, 3, 3, 5, 3, 3, 3, 3, 3, 0};
static signed char rtbl11nit[10] = {0, 3, 3, 4, 3, 3, 3, 3, 3, 0};
static signed char rtbl12nit[10] = {0, 3, 3, 4, 3, 3, 3, 3, 3, 0};
static signed char rtbl13nit[10] = {0, 3, 3, 4, 3, 3, 3, 3, 3, 0};
static signed char rtbl14nit[10] = {0, 3, 3, 4, 2, 3, 3, 3, 3, 0};
static signed char rtbl15nit[10] = {0, 3, 3, 3, 2, 3, 3, 3, 3, 0};
static signed char rtbl16nit[10] = {0, 3, 3, 3, 2, 3, 3, 3, 3, 0};
static signed char rtbl17nit[10] = {0, 3, 3, 3, 2, 3, 3, 3, 3, 0};
static signed char rtbl19nit[10] = {0, 3, 3, 3, 2, 3, 3, 3, 3, 0};
static signed char rtbl20nit[10] = {0, 3, 4, 3, 2, 3, 3, 3, 3, 0};
static signed char rtbl21nit[10] = {0, 3, 3, 3, 2, 3, 2, 3, 3, 0};
static signed char rtbl22nit[10] = {0, 3, 4, 3, 2, 3, 3, 3, 3, 0};
static signed char rtbl24nit[10] = {0, 3, 4, 4, 3, 3, 3, 3, 3, 0};
static signed char rtbl25nit[10] = {0, 3, 4, 3, 3, 3, 3, 3, 3, 0};
static signed char rtbl27nit[10] = {0, 3, 4, 3, 3, 3, 4, 3, 3, 0};
static signed char rtbl29nit[10] = {0, 3, 5, 3, 3, 3, 4, 3, 3, 0};
static signed char rtbl30nit[10] = {0, 2, 6, 4, 4, 4, 4, 3, 3, 0};
static signed char rtbl32nit[10] = {0, 2, 5, 4, 3, 4, 4, 3, 3, 0};
static signed char rtbl34nit[10] = {0, 2, 5, 4, 3, 4, 4, 3, 3, 0};
static signed char rtbl37nit[10] = {0, 2, 5, 4, 3, 4, 4, 0, 3, 0};
static signed char rtbl39nit[10] = {0, 2, 4, 4, 2, 3, 4, 3, 3, 0};
static signed char rtbl41nit[10] = {0, 2, 5, 4, 3, 3, 4, 3, 3, 0};
static signed char rtbl44nit[10] = {0, 2, 4, 3, 3, 3, 4, 3, 3, 0};
static signed char rtbl47nit[10] = {0, 2, 4, 3, 3, 3, 4, 3, 3, 0};
static signed char rtbl50nit[10] = {0, 2, 4, 3, 3, 3, 4, 3, 3, 0};
static signed char rtbl53nit[10] = {0, 2, 4, 3, 2, 3, 4, 3, 3, 0};
static signed char rtbl56nit[10] = {0, 2, 4, 3, 2, 3, 4, 3, 3, 0};
static signed char rtbl60nit[10] = {0, 2, 4, 3, 2, 3, 4, 3, 3, 0};
static signed char rtbl64nit[10] = {0, 2, 4, 3, 2, 3, 4, 3, 3, 0};
static signed char rtbl68nit[10] = {0, 2, 3, 2, 2, 3, 3, 3, 3, 0};
static signed char rtbl72nit[10] = {0, 2, 3, 2, 2, 3, 4, 3, 3, 0};
static signed char rtbl77nit[10] = {0, 2, 3, 2, 2, 3, 4, 3, 3, 0};
static signed char rtbl82nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 3, 0};
static signed char rtbl87nit[10] = {0, 2, 3, 3, 2, 3, 4, 4, 3, 0};
static signed char rtbl93nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 3, 0};
static signed char rtbl98nit[10] = {0, 2, 3, 3, 3, 3, 4, 4, 2, 0};
static signed char rtbl105nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 2, 0};
static signed char rtbl111nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 2, 0};
static signed char rtbl119nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 2, 0};
static signed char rtbl126nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 2, 0};
static signed char rtbl134nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 2, 0};
static signed char rtbl143nit[10] = {0, 2, 2, 2, 2, 4, 5, 4, 2, 0};
static signed char rtbl152nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 2, 0};
static signed char rtbl162nit[10] = {0, 2, 3, 2, 2, 3, 4, 4, 2, 0};
static signed char rtbl172nit[10] = {0, 2, 3, 1, 2, 3, 4, 4, 3, 0};
static signed char rtbl183nit[10] = {0, 2, 2, 1, 2, 3, 5, 4, 3, 0};
static signed char rtbl195nit[10] = {0, 2, 2, 1, 2, 2, 4, 4, 3, 0};
static signed char rtbl207nit[10] = {0, 1, 2, 1, 2, 2, 3, 3, 2, 0};
static signed char rtbl220nit[10] = {0, 1, 1, 1, 2, 2, 3, 3, 2, 0};
static signed char rtbl234nit[10] = {0, 1, 1, 1, 2, 2, 3, 3, 2, 0};
static signed char rtbl249nit[10] = {0, 1, 1, 1, 1, 2, 3, 2, 2, 0};
static signed char rtbl265nit[10] = {0, 0, 0, 1, 1, 2, 2, 2, 1, 0};
static signed char rtbl282nit[10] = {0, 0, 1, 0, 1, 2, 1, 3, 0, 0};
static signed char rtbl300nit[10] = {0, 1, 1, 1, 1, 1, 3, 2, 1, 0};
static signed char rtbl316nit[10] = {0, 0, 0, 1, 1, 1, 2, 2, 1, 0};
static signed char rtbl333nit[10] = {0, 0, 0, 0, 1, 1, 1, 1, 1, 0};
static signed char rtbl350nit[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static signed char ctbl5nit[30] = {0, 0, 0, 0, 0, 0,-11, 0, -10, -20, 0, -4, -5, 0, 0, -9, 0, 3, -8, 0, -1, -1, 0, 1, 0, 0, 1, -1, 0, 0};
static signed char ctbl6nit[30] = {0, 0, 0, 0, 0, 0,-11, 0, -8, -17, 0, -4, -5, 0, 0, -8, 0, 2, -8, 0, -1, -1, 0, 1, 0, 0, 1, -1, 0, 0};
static signed char ctbl7nit[30] = {0, 0, 0, 0, 0, 0,-11, 0, -6, -15, 0, -4, -5, 0, 0, -8, 0, 1, -6, 0, -1, -1, 0, 1, 0, 0, 1, -1, 0, 0};
static signed char ctbl8nit[30] = {0, 0, 0, 0, 0, 0,-11, 0, -6, -13, 0, -4, -4, 0, 0, -7, 0, 2, -5, 0, -1, -1, 0, 1, 0, 0, 1, -1, 0, 0};
static signed char ctbl9nit[30] = {0, 0, 0, 0, 0, 0,-12, 0, -6, -12, 0, -4, -3, 0, 0, -6, 0, 2, -6, 0, -1, -1, 0, 1, 0, 0, 1, -1, 0, 0};
static signed char ctbl10nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -10, 0, -4, -2, 0, 0, -5, 0, 2, -5, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl11nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -10, 0, -4, -2, 0, -1, -4, 0, 3, -5, 0, -1, -1, 0, 1, 0, 0, 1, -1, 0, 0};
static signed char ctbl12nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -10, 0, -4, -1, 0, -1, -4, 0, 3, -5, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl13nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -9, 0, -4, -1, 0, -1, -3, 0, 2, -5, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl14nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -9, 0, -4, -1, 0, -1, -3, 0, 2, -4, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl15nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -8, 0, -4, 0, 0, -1, -2, 0, 2, -4, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl16nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -7, 0, -4, 0, 0, -1, -2, 0, 2, -4, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl17nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -5, 0, -4, 0, 0, -1, -2, 0, 2, -4, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0, 0};
static signed char ctbl19nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -5, 0, -4, 0, 0, -1, -1, 0, 2, -4, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl20nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -5, 0, -4, 1, 0, -1, 0, 0, 1, -4, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0, 0};
static signed char ctbl21nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -7, 0, -4, -1, 0, -1, 0, 0, 1, -4, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl22nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -6, 0, -4, -1, 0, -1, 1, 0, 1, -4, 0, -1, -1, 0, 0, 0, 0, 1, -1, 0, 0};
static signed char ctbl24nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -4, 0, -4, -2, 0, -1, 1, 0, 1, -4, 0, -1, -1, 0, 0, 0, 0, 0, -1, 0, 0};
static signed char ctbl25nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -4, 0, -4, -1, 0, -1, 1, 0, 1, -3, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0, 0};
static signed char ctbl27nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -5, -2, 0, -4, 0, 0, -1, 1, 0, 1, -3, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0, -1};
static signed char ctbl29nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -4, -1, 0, -4, 1, 0, -1, 1, 0, 1, -3, 0, -1, -1, 0, 0, 1, 0, 1, -1, 0, -1};
static signed char ctbl30nit[30] = {0, 0, 0, 0, 0, 0,-15, 2, -8, -6, 1, -7, 1, 0, -1, 0, 0, 1, -3, 0, -1, -1, 0, 0, 2, 0, 1, -1, 0, -1};
static signed char ctbl32nit[30] = {0, 0, 0, 0, 0, 0,-15, 2, -8, -5, 1, -7, 0, 0, -1, 0, 0, 1, -3, 0, -1, -1, 0, 0, 2, 0, 1, -1, 0, -1};
static signed char ctbl34nit[30] = {0, 0, 0, 0, 0, 0,-15, 2, -8, -4, 0, -6, 0, 0, -1, 0, 0, 1, -3, 0, -1, -1, 0, 0, 2, 0, 1, -1, 0, -1};
static signed char ctbl37nit[30] = {0, 0, 0, 0, 0, 0,-15, 2, -8, -4, 0, -6, 1, 0, -1, 0, 0, 1, -3, 0, -1, -1, 0, 0, 2, 0, 1, -1, 0, -1};
static signed char ctbl39nit[30] = {0, 0, 0, 0, 0, 0,-13, 1, -5, -1, 0, -5, 1, 0, -1, 0, 0, 1, -3, 0, -1, 0, 0, 0, 1, 0, 1, -1, 0, -1};
static signed char ctbl41nit[30] = {0, 0, 0, 0, 0, 0,-15, 1, -7, -3, 0, -5, 1, 0, -1, 0, 0, 1, -3, 0, -1, 0, 0, 0, 1, 0, 1, -1, 0, -1};
static signed char ctbl44nit[30] = {0, 0, 0, 0, 0, 0,-13, 1, -5, -1, 0, -5, 1, 0, -1, 0, 0, 1, -3, 0, -1, 0, 0, 0, 1, 0, 1, -1, 0, -1};
static signed char ctbl47nit[30] = {0, 0, 0, 0, 0, 0,-13, 1, -5, -1, 0, -5, 1, 0, -1, 0, 0, 1, -3, 0, -1, 0, 0, 0, 1, 0, 1, -1, 0, -1};
static signed char ctbl50nit[30] = {0, 0, 0, 0, 0, 0,-13, 1, -5, -1, 0, -5, 1, 0, -1, 0, 0, 1, -3, 0, -1, 0, 0, 0, 2, 0, 1, -1, 0, -1};
static signed char ctbl53nit[30] = {0, 0, 0, 0, 0, 0,-14, 0, -6, -1, 0, -4, 2, 0, -2, 2, 0, 1, -3, 0, -1, -1, 0, 0, 0, 0, 1, 0, 0, -1};
static signed char ctbl56nit[30] = {0, 0, 0, 0, 0, 0,-11, 0, -4, -1, 0, -4, 2, 0, -2, 2, 0, 1, -3, 0, -1, -1, 0, 0, 0, 0, 1, 0, 0, -1};
static signed char ctbl60nit[30] = {0, 0, 0, 0, 0, 0,-10, 0, -2, -1, 0, -4, 3, 0, -2, 2, 0, 1, -3, 0, -1, -1, 0, 0, 0, 0, 1, 0, 0, -1};
static signed char ctbl64nit[30] = {0, 0, 0, 0, 0, 0,-9, 0, -1, 0, 0, -4, 3, 0, -2, 2, 0, 1, -3, 0, -1, -1, 0, 0, 0, 0, 1, 0, 0, -1};
static signed char ctbl68nit[30] = {0, 0, 0, 0, 0, 0,-9, 0, -1, 0, 0, -5, 2, 0, -2, 2, 0, 1, -3, 0, -2, -1, 0, 0, 0, 0, 1, 0, 0, -1};
static signed char ctbl72nit[30] = {0, 0, 0, 0, 0, 0,-9, 0, -1, 0, 0, -5, 3, 0, -2, 1, 0, 1, -2, 0, -1, -1, 0, 0, 0, 0, 1, 0, 0, -1};
static signed char ctbl77nit[30] = {0, 0, 0, 0, 0, 0,-9, 0, -1, 1, 0, -4, 2, 0, -2, 1, 0, 2, -2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, -1};
static signed char ctbl82nit[30] = {0, 0, 0, 0, 0, 0,-9, 0, -1, 1, 0, -3, 2, 0, -2, 0, 0, 2, -2, 0, -1, 1, 0, 1, 0, 0, 0, 0, 0, 0};
static signed char ctbl87nit[30] = {0, 0, 0, 0, 0, 0,-8, 0, -1, 1, 0, -3, 1, 0, -2, 1, 0, 1, -1, 0, 0, -1, 0, 0, -1, 0, -1, 0, 0, 0};
static signed char ctbl93nit[30] = {0, 0, 0, 0, 0, 0,-7, 0, -2, 2, 0, -3, 2, 0, -2, -1, 0, 1, -1, 0, -1, 0, 0, 1, -1, 0, -1, 0, 0, 0};
static signed char ctbl98nit[30] = {0, 0, 0, 0, 0, 0,-7, 0, -2, 1, 0, -2, -1, 0, -1, 1, 0, 0, -2, 0, -1, -1, 0, 0, -1, 0, -1, 1, 0, 0};
static signed char ctbl105nit[30] = {0, 0, 0, 0, 0, 0,-7, 0, -2, 0, 0, -3, 2, 0, -1, 1, 0, 1, -1, 0, 0, 0, 0, 0, -1, 0, -1, 1, 0, 0};
static signed char ctbl111nit[30] = {0, 0, 0, 0, 0, 0,-7, 0, -1, 0, 0, -4, 2, 0, 0, 0, 0, 1, -1, 0, 0, -1, 0, -3, 0, 0, 0, 0, 0, 1};
static signed char ctbl119nit[30] = {0, 0, 0, 0, 0, 0,-7, 0, -1, -1, 0, -4, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl126nit[30] = {0, 0, 0, 0, 0, 0,-5, 0, -1, -1, 0, -3, 2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl134nit[30] = {0, 0, 0, 0, 0, 0,-6, 0, -2, 0, 0, -2, 1, 0, 0, 1, 0, 0, -1, 0, 1, -1, 0, -1, 0, 0, 0, 0, 0, 0};
static signed char ctbl143nit[30] = {0, 0, 0, 0, 0, 0,-5, 0, -2, 1, 0, -2, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0};
static signed char ctbl152nit[30] = {0, 0, 0, 0, 0, 0,-5, 0, -1, 1, 0, -1, 3, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0};
static signed char ctbl162nit[30] = {0, 0, 0, 0, 0, 0,-5, 0, 0, -1, 0, -1, 1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, -1, -1, 0, -1, 1, 0, 1};
static signed char ctbl172nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -2, 1, 0, 0, -2, 0, -1, 1, 0, 1, -1, 0, 1, 0, 0, -1, -1, 0, -1, 1, 0, 1};
static signed char ctbl183nit[30] = {0, 0, 0, 0, 0, 0,-4, 0, -1, 1, 0, -1, 1, 0, 0, -1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0};
static signed char ctbl195nit[30] = {0, 0, 0, 0, 0, 0,-2, 0, 0, -1, 0, 0, 1, 0, 0, 2, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, -1, 0, 0, 0};
static signed char ctbl207nit[30] = {0, 0, 0, 0, 0, 0,-2, 0, 0, 2, 0, 0, -1, 0, 0, 2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0};
static signed char ctbl220nit[30] = {0, 0, 0, 0, 0, 0,-1, 0, 0, 2, 0, 0, -1, 0, 0, 2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0};
static signed char ctbl234nit[30] = {0, 0, 0, 0, 0, 0,-1, 0, 0, 2, 0, 0, -1, 0, 0, 2, 0, 0, -2, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0};
static signed char ctbl249nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl265nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl282nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl300nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl316nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl333nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0};
static signed char ctbl350nit[30] = {0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static signed char aid9685[5] = {0xB3, 0x00, 0x00, 0x04, 0xEB};
static signed char aid9592[5] = {0xB3, 0x00, 0x00, 0x04, 0xDF};
static signed char aid9523[5] = {0xB3, 0x00, 0x00, 0x04, 0xD6};
static signed char aid9446[5] = {0xB3, 0x00, 0x00, 0x04, 0xCC};
static signed char aid9354[5] = {0xB3, 0x00, 0x00, 0x04, 0xC0};
static signed char aid9285[5] = {0xB3, 0x00, 0x00, 0x04, 0xB7};
static signed char aid9215[5] = {0xB3, 0x00, 0x00, 0x04, 0xAE};
static signed char aid9123[5] = {0xB3, 0x00, 0x00, 0x04, 0xA2};
static signed char aid9069[5] = {0xB3, 0x00, 0x00, 0x04, 0x9B};
static signed char aid8985[5] = {0xB3, 0x00, 0x00, 0x04, 0x90};
static signed char aid8923[5] = {0xB3, 0x00, 0x00, 0x04, 0x88};
static signed char aid8831[5] = {0xB3, 0x00, 0x00, 0x04, 0x7C};
static signed char aid8746[5] = {0xB3, 0x00, 0x00, 0x04, 0x71};
static signed char aid8592[5] = {0xB3, 0x00, 0x00, 0x04, 0x5D};
static signed char aid8500[5] = {0xB3, 0x00, 0x00, 0x04, 0x51};
static signed char aid8423[5] = {0xB3, 0x00, 0x00, 0x04, 0x47};
static signed char aid8331[5] = {0xB3, 0x00, 0x00, 0x04, 0x3B};
static signed char aid8138[5] = {0xB3, 0x00, 0x00, 0x04, 0x22};
static signed char aid8054[5] = {0xB3, 0x00, 0x00, 0x04, 0x17};
static signed char aid7885[5] = {0xB3, 0x00, 0x00, 0x04, 0x01};
static signed char aid7692[5] = {0xB3, 0x00, 0x00, 0x03, 0xE8};
static signed char aid7562[5] = {0xB3, 0x00, 0x00, 0x03, 0xD7};
static signed char aid7362[5] = {0xB3, 0x00, 0x00, 0x03, 0xBD};
static signed char aid7192[5] = {0xB3, 0x00, 0x00, 0x03, 0xA7};
static signed char aid6931[5] = {0xB3, 0x00, 0x00, 0x03, 0x85};
static signed char aid6746[5] = {0xB3, 0x00, 0x00, 0x03, 0x6D};
static signed char aid6577[5] = {0xB3, 0x00, 0x00, 0x03, 0x57};
static signed char aid6292[5] = {0xB3, 0x00, 0x00, 0x03, 0x32};
static signed char aid6015[5] = {0xB3, 0x00, 0x00, 0x03, 0x0E};
static signed char aid5762[5] = {0xB3, 0x00, 0x00, 0x02, 0xED};
static signed char aid5515[5] = {0xB3, 0x00, 0x00, 0x02, 0xCD};
static signed char aid5254[5] = {0xB3, 0x00, 0x00, 0x02, 0xAB};
static signed char aid4846[5] = {0xB3, 0x00, 0x00, 0x02, 0x76};
static signed char aid4515[5] = {0xB3, 0x00, 0x00, 0x02, 0x4B};
static signed char aid4146[5] = {0xB3, 0x00, 0x00, 0x02, 0x1B};
static signed char aid3754[5] = {0xB3, 0x00, 0x00, 0x01, 0xE8};
static signed char aid3292[5] = {0xB3, 0x00, 0x00, 0x01, 0xAC};
static signed char aid2800[5] = {0xB3, 0x00, 0x00, 0x01, 0x6C};
static signed char aid2277[5] = {0xB3, 0x00, 0x00, 0x01, 0x28};
static signed char aid1708[5] = {0xB3, 0x00, 0x00, 0x00, 0xDE};
static signed char aid1077[5] = {0xB3, 0x00, 0x00, 0x00, 0x8C};
static signed char aid0369[5] = {0xB3, 0x00, 0x00, 0x00, 0x30};


static unsigned char elv0 [4] = {0x0F, 0x05, 0x0B, 0x11}; // 5 ~2 0
static unsigned char elv1 [4] = {0x0F, 0x07, 0x0D, 0x12}; // 21
static unsigned char elv2 [4] = {0x11, 0x08, 0x0B, 0x11}; // 22
static unsigned char elv3 [4] = {0x15, 0x07, 0x09, 0x0E}; // 24
static unsigned char elv4 [4] = {0x18, 0x07, 0x08, 0x0C}; //25
static unsigned char elv5 [4] = {0x1B, 0x07, 0x07, 0x0A}; //27
static unsigned char elv6 [4] = {0x19, 0x0C, 0x0B, 0x0D}; //29

static unsigned char elv7 [4] = {0x1C, 0x00, 0x00, 0x00}; //30 ~ 105
static unsigned char elv8 [4] = {0x1B, 0x00, 0x00, 0x00}; //111~119
static unsigned char elv9 [4] = {0x1A, 0x00, 0x00, 0x00}; //126~183
static unsigned char elv10 [4] = {0x19, 0x00, 0x00, 0x00};  //195
static unsigned char elv11 [4] = {0x18, 0x00, 0x00, 0x00};  //207
static unsigned char elv12 [4] = {0x17, 0x00, 0x00, 0x00};  //220
static unsigned char elv13 [4] = {0x16, 0x00, 0x00, 0x00};  //234
static unsigned char elv14 [4] = {0x15, 0x00, 0x00, 0x00};  //249
static unsigned char elv15 [4] = {0x14, 0x00, 0x00, 0x00};  //265
static unsigned char elv16 [4] = {0x13, 0x00, 0x00, 0x00};  //282
static unsigned char elv17 [4] = {0x12, 0x00, 0x00, 0x00};  //300
static unsigned char elv18 [4] = {0x11, 0x00, 0x00, 0x00};  //316
static unsigned char elv19 [4] = {0x10, 0x00, 0x00, 0x00};  //333
static unsigned char elv20 [4] = {0x0F, 0x00, 0x00, 0x00};  //350

#endif

