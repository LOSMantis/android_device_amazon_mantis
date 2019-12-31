/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 * 
 * MediaTek Inc. (C) 2010. All rights reserved.
 * 
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

#ifndef AUDIO_SPEAKER_MONITOR_CUSTOM_H
#define AUDIO_SPEAKER_MONITOR_CUSTOM_H

/****************************************************
* Define default Speaker Monitor Param
*****************************************************/

#define DEFAULT_SPEAKER_MONITOR_PARAM \
0.000000f,   \
6.724226f,   \
6.974528f,   \
6.846275f,   \
6.827175f,   \
7.047107f,   \
7.119836f,   \
7.331464f,   \
7.688554f,   \
7.918128f,   \
9.524508f,   \
9.824244f,   \
9.784428f,   \
8.793557f,   \
8.132271f,   \
7.909787f,   \
7.412833f,   \
7.302618f,   \
7.104803f,   \
7.077705f,   \
6.944293f,   \
6.918779f,   \
6.927319f,   \
6.864192f,   \
6.887978f,   \
6.881207f,   \
6.837842f,   \
6.853567f,   \
6.831047f,   \
6.835002f,   \
6.853987f,   \
6.855708f,   \
6.855517f,   \
6.879707f,   \
6.879851f,   \
6.864088f,   \
6.895735f,   \
6.836673f,   \
6.839348f,   \
6.825389f,   \
6.797342f,   \
6.813182f,   \
6.799253f,   \
6.789910f,   \
6.840711f,   \
6.817069f,   \
6.837533f,   \
6.800495f,   \
6.823473f,   \
6.813232f,   \
6.798521f,   \
6.802952f,   \
6.821106f,   \
6.828176f,   \
6.832813f,   \
6.845280f,   \
6.816212f,   \
6.890805f,   \
6.847644f,   \
6.870790f,   \
6.908623f,   \
6.837619f,   \
6.877141f,   \
6.866852f,   \
6.877843f,   \
6.842310f,   \
6.853122f,   \
6.849436f,   \
6.897611f,   \
6.880357f,   \
6.772614f,   \
6.837955f,   \
6.844776f,   \
6.882747f,   \
6.903024f,   \
6.834239f,   \
6.851512f,   \
6.861617f,   \
6.828314f,   \
6.850456f,   \
6.914350f,   \
6.856041f,   \
6.837886f,   \
6.856701f,   \
6.873860f,   \
6.882756f,   \
6.856958f,   \
6.905285f,   \
6.846513f,   \
6.905928f,   \
6.838507f,   \
6.885972f,   \
6.832790f,   \
6.874806f,   \
6.866412f,   \
6.896636f,   \
6.938709f,   \
6.857732f,   \
6.871342f,   \
6.926673f,   \
6.990149f,   \
6.951657f,   \
6.985218f,   \
6.947751f,   \
7.019493f,   \
6.914910f,   \
6.977337f,   \
6.983798f,   \
6.950284f,   \
6.914060f,   \
6.953691f,   \
6.909161f,   \
6.972013f,   \
6.935135f,   \
6.960772f,   \
6.909254f,   \
6.948703f,   \
6.933710f,   \
6.901606f,   \
6.989258f,   \
6.968126f,   \
6.983894f,   \
7.018600f,   \
6.944714f,   \
6.964221f,   \
7.023781f,   \
6.989924f,   \
6.981969f,   \
6.981292f,   \
7.071301f,   \
7.063210f,   \
6.957207f,   \
7.035365f,   \
7.048344f,   \
7.028668f,   \
7.036113f,   \
7.030469f,   \
7.007527f,   \
7.053476f,   \
7.035308f,   \
7.086689f,   \
7.146161f,   \
7.024417f,   \
7.031446f,   \
7.073967f,   \
7.143930f,   \
7.428226f,   \
0.000000f,   \
6.993325f,   \
7.122999f,   \
7.127262f,   \
7.147401f,   \
7.116213f,   \
7.273460f,   \
7.084520f,   \
7.060570f,   \
7.081394f,   \
7.143188f,   \
7.205965f,   \
7.078080f,   \
7.079659f,   \
7.080306f,   \
7.144302f,   \
7.084785f,   \
7.257939f,   \
7.130643f,   \
7.097555f,   \
7.152971f,   \
7.040974f,   \
7.085166f,   \
7.071059f,   \
7.100259f,   \
7.160836f,   \
7.172592f,   \
7.152480f,   \
7.321774f,   \
7.143798f,   \
7.185150f,   \
7.074606f,   \
7.192005f,   \
7.032177f,   \
6.960763f,   \
7.295326f,   \
7.217050f,   \
7.162797f,   \
7.144925f,   \
7.171889f,   \
7.194613f,   \
7.221737f,   \
7.182446f,   \
7.056801f,   \
7.180799f,   \
7.155940f,   \
7.110633f,   \
7.163946f,   \
7.054243f,   \
0.000000f,   \
7.285683f,   \
7.089665f,   \
7.040215f,   \
7.128399f,   \
7.176611f,   \
7.282122f,   \
7.104584f,   \
7.137789f,   \
7.135109f,   \
7.306314f,   \
7.165412f,   \
7.144668f,   \
7.182379f,   \
7.370492f,   \
7.208850f,   \
7.139509f,   \
7.295280f,   \
7.267511f,   \
7.271372f,   \
7.192691f,   \
7.223773f,   \
7.207439f,   \
7.266832f,   \
7.350516f,   \
7.268063f,   \
7.267170f,   \
7.257799f,   \
7.315085f,   \
7.111807f,   \
7.378593f,   \
7.302648f,   \
7.218002f,   \
7.305216f,   \
7.213538f,   \
7.241156f,   \
7.190457f,   \
7.418906f,   \
7.315556f,   \
0.000000f,   \
7.288957f,   \
7.333023f,   \
7.139032f,   \
7.419845f,   \
7.359655f,   \
7.297998f,   \
7.204082f,   \
7.342434f,   \
7.426449f,   \
7.265158f,   \
7.409251f,   \
7.444800f,   \
7.316185f,   \
7.301837f,   \
7.299541f,   \
7.290207f,   \
7.354695f,   \
7.280741f,   \
7.342413f,   \
7.326562f,   \
7.464303f,   \
7.343559f,   \
7.374075f,   \
7.391737f,   \
7.482700f,   \
7.412315f,   \
7.374053f,   \
7.239961f,   \
7.433125f,   \
7.287411f,   \
7.376688f,   \
7.381767f,   \
7.458014f,   \
7.221640f,   \
7.299759f,   \
7.253643f,   \
7.429543f,   \
7.328827f,   \
7.388747f,   \
7.357351f,   \
7.367592f,   \
7.477061f,   \
7.383484f,   \
7.388175f,   \
7.369945f,   \
7.443092f,   \
7.605816f,   \
7.469241f,   \
7.617379f,   \
7.471801f,   \
7.439581f,   \
7.429914f,   \
7.540149f,   \
7.468150f,   \
7.542761f,   \
7.408623f,   \
7.433461f,   \
7.396984f,   \
7.358805f,   \
7.366835f,   \
7.386064f,   \
7.386212f,   \
7.348292f,   \
7.544761f,   \
7.507598f,   \
7.514112f,   \
7.428306f,   \
7.504209f,   \
7.442350f,   \
7.432697f,   \
7.572494f,   \
7.457337f,   \
7.433437f,   \
7.616264f,   \
7.584019f,   \
7.704144f,   \
7.638788f,   \
7.548791f,   \
7.533299f,   \
7.614974f,   \
7.436929f,   \
0.000000f,   \
7.470621f,   \
7.506228f,   \
7.550412f,   \
7.633528f,   \
7.458643f,   \
7.543236f,   \
7.515824f,   \
7.526042f,   \
7.850661f,   \
7.678246f,   \
7.682152f,   \
7.491266f,   \
7.491404f,   \
7.603360f,   \
7.597063f,   \
7.728959f,   \
7.719633f,   \
7.459821f,   \
7.609262f,   \
7.726784f,   \
7.551135f,   \
7.640534f,   \
7.734461f,   \
7.628714f,   \
7.304039f,   \
7.583868f,   \
7.539066f,   \
7.615777f,   \
7.805047f,   \
7.757169f,   \
7.817597f,   \
7.696222f,   \
7.574815f,   \
7.704673f,   \
7.708368f,   \
7.557793f,   \
7.758362f,   \
7.817715f,   \
7.620881f,   \
7.650286f,   \
7.589502f,   \
7.912412f,   \
0.000000f,   \
0.000000f,   \
7.622248f,   \
7.471659f,   \
7.034797f,   \
7.484396f,   \
7.432148f,   \
7.789283f,   \
7.689125f,   \
7.560812f,   \
7.589663f,   \
7.690178f,   \
7.539281f,   \
7.481449f,   \
7.628078f,   \
7.564785f,   \
7.828842f,   \
7.757295f,   \
7.761100f,   \
7.604434f,   \
7.611227f,   \
7.826819f,   \
7.595936f,   \
7.634809f,   \
7.847127f,   \
7.790264f,   \
7.762833f,   \
7.872057f,   \
7.618991f,   \
7.854398f,   \
7.724950f,   \
7.791582f,   \
7.883928f,   \
7.851706f,   \
7.876284f,   \
7.873750f,   \
7.886863f,   \
7.823014f,   \
7.848767f,   \
8.098789f,   \
7.813078f,   \
8.139100f,   \
7.728526f,   \
8.257166f,   \
7.928484f,   \
7.672758f,   \
7.724411f,   \
8.112217f,   \
7.800399f,   \
7.728940f,   \
7.859084f,   \
7.956226f,   \
7.932983f,   \
7.999975f,   \
7.904581f,   \
7.908185f,   \
7.954573f,   \
7.988237f,   \
8.113664f,   \
7.912639f,   \
7.891133f,   \
7.877574f,   \
8.014938f,   \
7.840498f,   \
7.902784f,   \
7.928629f,   \
7.921973f,   \
8.067985f,   \
7.951092f,   \
7.828674f,   \
7.979732f,   \
7.774290f,   \
7.994339f,   \
7.998278f,   \
7.884554f,   \
8.038289f,   \
8.081851f,   \
7.993627f,   \
7.887461f,   \
7.963169f,   \
8.006074f,   \
7.905819f,   \
7.708533f,   \
7.620054f,   \
8.092615f,   \
0.000000f,   \
7.908058f,   \
0.000000f,   \
7.754007f,   \
7.954754f,   \
8.220443f,   \
0.000000f,   \
7.981484f,   \
7.903817f,   \
7.920052f,   \
8.049402f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
7.928816f,   \
0.000000f,   \
8.227345f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f,   \
0.000000f


#define DEFAULT_SPEAKER_TEMP_INITIAL (25.0f)
#define DEFAULT_SPEAKER_CURRENT_SENSE_RESISTOR (0.5f)
#define DEFAULT_SPEAKER_RESONANT_FC (450)
#define DEFAULT_SPEAKER_RESONANT_BW (1000)
#define DEFAULT_SPEAKER_RESONANT_TH (0xFFEC)
#define DEFAULT_SPEAKER_PREFER_HIGH_BAND 90
#define DEFAULT_SPEAKER_PREFER_LOW_BAND  35
#define DEFAULT_SPEAKER_TEMP_CONTROL_HIGH 90
#define DEFAULT_SPEAKER_TEMP_CONTROL_LOW  85
#define DEFAULT_SPEAKER_TEMP_CONTROL_LOG  10
#define DEFAULT_SPEAKER_MONITOR_INTERVAL  1000
#endif
