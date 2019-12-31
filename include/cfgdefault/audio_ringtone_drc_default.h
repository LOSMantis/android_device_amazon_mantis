/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 *
 * MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_acf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 * 04 22 2013 kh.hung
 * [ALPS00580843] [MT6572tdv1_phone[lca]][music][Symbio][Free test] ��?���񾹼���?��?��?�j?�p�A��?�w
 * Use default DRC setting.
 * 
 * Review: http://mtksap20:8080/go?page=NewReview&reviewid=59367
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_RINGTONE_DRC_DEFAULT_H
#define AUDIO_RINGTONE_DRC_DEFAULT_H

#define BES_LOUDNESS_RINGTONEDRC_L_HPF_FC       0
#define BES_LOUDNESS_RINGTONEDRC_L_HPF_ORDER    0
#define BES_LOUDNESS_RINGTONEDRC_L_BPF_FC       0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_RINGTONEDRC_L_BPF_BW       0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_RINGTONEDRC_L_BPF_GAIN     0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_RINGTONEDRC_L_LPF_FC       0
#define BES_LOUDNESS_RINGTONEDRC_L_LPF_ORDER    0
#define BES_LOUDNESS_RINGTONEDRC_R_HPF_FC       0
#define BES_LOUDNESS_RINGTONEDRC_R_HPF_ORDER    0
#define BES_LOUDNESS_RINGTONEDRC_R_BPF_FC       0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_RINGTONEDRC_R_BPF_BW       0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_RINGTONEDRC_R_BPF_GAIN     0, 0, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_RINGTONEDRC_R_LPF_FC       0
#define BES_LOUDNESS_RINGTONEDRC_R_LPF_ORDER    0

#define BES_LOUDNESS_RINGTONEDRC_SEP_LR_FILTER  0
	
#define BES_LOUDNESS_RINGTONEDRC_WS_GAIN_MAX    0
#define BES_LOUDNESS_RINGTONEDRC_WS_GAIN_MIN    0
#define BES_LOUDNESS_RINGTONEDRC_FILTER_FIRST   0

#define BES_LOUDNESS_RINGTONEDRC_NUM_BANDS      5
#define BES_LOUDNESS_RINGTONEDRC_FLT_BANK_ORDER 0
#define BES_LOUDNESS_RINGTONEDRC_DRC_DELAY      0
#define BES_LOUDNESS_RINGTONEDRC_CROSSOVER_FREQ 110, 440, 1760, 8000, 0, 0, 0
#define BES_LOUDNESS_RINGTONEDRC_SB_MODE        1, 1, 0, 0, 0, 0, 0, 0
#define BES_LOUDNESS_RINGTONEDRC_SB_GAIN        -40 << 8, -20 << 8, 0 << 8, 4 << 8, 0 << 8, 0 << 8, 0 << 8, 0 << 8
#define BES_LOUDNESS_RINGTONEDRC_GAIN_MAP_IN                \
        -60 << 8, -50 << 8, -40 << 8, -30 << 8, 0 << 8,     \
        -60 << 8, -50 << 8, -40 << 8, -30 << 8, 0 << 8,     \
        -60 << 8, -50 << 8, -40 << 8, -30 << 8, 0 << 8,     \
        -60 << 8, -50 << 8, -40 << 8, -30 << 8, 0 << 8,     \
        -60 << 8, -50 << 8, -40 << 8, -30 << 8, 0 << 8,     \
        -60 << 8, -50 << 8, -40 << 8, -30 << 8, 0 << 8,     \
        -60 << 8, -50 << 8, -40 << 8, -30 << 8, 0 << 8,     \
        -60 << 8, -50 << 8, -40 << 8, -30 << 8, 0 << 8
#define BES_LOUDNESS_RINGTONEDRC_GAIN_MAP_OUT               \
        24 << 8, 24 << 8, 24 << 8, 24 << 8, 0 << 8,         \
        24 << 8, 24 << 8, 24 << 8, 24 << 8, 0 << 8,         \
        24 << 8, 24 << 8, 24 << 8, 24 << 8, 0 << 8,         \
        24 << 8, 24 << 8, 24 << 8, 24 << 8, 0 << 8,         \
        24 << 8, 24 << 8, 24 << 8, 24 << 8, 0 << 8,         \
        24 << 8, 24 << 8, 24 << 8, 24 << 8, 0 << 8,         \
        24 << 8, 24 << 8, 24 << 8, 24 << 8, 0 << 8,         \
        24 << 8, 24 << 8, 24 << 8, 24 << 8, 0 << 8
#define BES_LOUDNESS_RINGTONEDRC_ATT_TIME                   \
        164, 164, 164, 164, 164, 164,                       \
        164, 164, 164, 164, 164, 164,                       \
        164, 164, 164, 164, 164, 164,                       \
        164, 164, 164, 164, 164, 164,                       \
        164, 164, 164, 164, 164, 164,                       \
        164, 164, 164, 164, 164, 164,                       \
        164, 164, 164, 164, 164, 164,                       \
        164, 164, 164, 164, 164, 164
#define BES_LOUDNESS_RINGTONEDRC_REL_TIME                   \
        16400, 16400, 16400, 16400, 16400, 16400,           \
        16400, 16400, 16400, 16400, 16400, 16400,           \
        16400, 16400, 16400, 16400, 16400, 16400,           \
        16400, 16400, 16400, 16400, 16400, 16400,           \
        16400, 16400, 16400, 16400, 16400, 16400,           \
        16400, 16400, 16400, 16400, 16400, 16400,           \
        16400, 16400, 16400, 16400, 16400, 16400,           \
        16400, 16400, 16400, 16400, 16400, 16400
#define BES_LOUDNESS_RINGTONEDRC_HYST_TH                    \
        1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8,     \
        1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8,     \
        1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8,     \
        1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8,     \
        1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8,     \
        1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8,     \
        1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8,     \
        1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8, 1 << 8
#define BES_LOUDNESS_RINGTONEDRC_LIM_TH     0x7FFF
#define BES_LOUDNESS_RINGTONEDRC_LIM_GN     0x7FFF
#define BES_LOUDNESS_RINGTONEDRC_LIM_CONST  4
#define BES_LOUDNESS_RINGTONEDRC_LIM_DELAY  0

#endif
