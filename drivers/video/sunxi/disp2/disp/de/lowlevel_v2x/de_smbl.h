/*
 * linux-3.10/drivers/video/sunxi/disp2/disp/de/lowlevel_v2x/de_smbl.h
 *
 * Copyright (c) 2007-2017 Allwinnertech Co., Ltd.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

/**
 *	All Winner Tech, All Right Reserved. 2014-2015 Copyright (c)
 *
 *	File name   :       de_smbl.h
 *
 *	Description :       display engine 2.0 smbl basic function declaration
 *
 *	History     :       2014/05/15  vito cheng  v0.1  Initial version
 *
 */
#ifndef __DE_SMBL_H__
#define __DE_SMBL_H__

#include "de_rtmx.h"
#include "de_smbl_type.h"

int de_smbl_tasklet(unsigned int sel);
int de_smbl_apply(unsigned int sel, struct disp_smbl_info *info);
int de_smbl_update_regs(unsigned int sel);
int de_smbl_set_reg_base(unsigned int sel, void *base);
int de_smbl_sync(unsigned int sel);
int de_smbl_enable(unsigned int sel, unsigned int en);
int de_smbl_set_window(unsigned int sel, unsigned int win_enable,
		       struct disp_rect window);
int de_smbl_set_para(unsigned int sel, unsigned int width, unsigned int height);
int de_smbl_set_lut(unsigned int sel, unsigned short *lut);
int de_smbl_get_hist(unsigned int sel, unsigned int *cnt);
int de_smbl_get_status(unsigned int sel);
int de_smbl_init(unsigned int sel, uintptr_t reg_base);

extern u16 pwrsv_lgc_tab[1408][256];
extern u8 smbl_filter_coeff[272];
extern u8 hist_thres_drc[8];
extern u8 hist_thres_pwrsv[8];
extern u8 drc_filter[IEP_LH_PWRSV_NUM];
extern u32 csc_bypass_coeff[12];

#endif
