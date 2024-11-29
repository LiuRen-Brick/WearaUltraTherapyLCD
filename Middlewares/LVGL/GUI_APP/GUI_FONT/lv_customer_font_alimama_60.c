/*
 * Copyright 2024 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */
/*******************************************************************************
 * Size: 60 px
 * Bpp: 4
 * Opts: undefined
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_CUSTOMER_FONT_ALIMAMA_60
#define LV_CUSTOMER_FONT_ALIMAMA_60 1
#endif

#if LV_CUSTOMER_FONT_ALIMAMA_60

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0030 "0" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x12,
    0x21, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x5, 0xae, 0xff, 0xff,
    0xff, 0xc7, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7e, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xb2, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf6, 0x0, 0x0, 0x0, 0x0, 0xcf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf2, 0x0, 0x0, 0x0, 0x5f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0xd, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x40, 0x0, 0x5, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x82, 0x1, 0x5d, 0xff, 0xff, 0xff,
    0xff, 0xfb, 0x0, 0x0, 0xbf, 0xff, 0xff, 0xff,
    0xfe, 0x30, 0x0, 0x0, 0xb, 0xff, 0xff, 0xff,
    0xff, 0xf1, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0x60, 0x0, 0x0, 0x0, 0x1e, 0xff, 0xff, 0xff,
    0xff, 0x60, 0x4, 0xff, 0xff, 0xff, 0xff, 0xd0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff,
    0xfb, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xf7, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xe0, 0xb, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xff, 0xff,
    0x10, 0xef, 0xff, 0xff, 0xff, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xff, 0xff, 0xff, 0xf4,
    0xf, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xff, 0xff, 0xff, 0x62,
    0xff, 0xff, 0xff, 0xff, 0xb0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0xff, 0xff, 0xf8, 0x3f,
    0xff, 0xff, 0xff, 0xf9, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3, 0xff, 0xff, 0xff, 0xff, 0x94, 0xff,
    0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0xff, 0xff, 0xfa, 0x5f, 0xff,
    0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xff, 0xff, 0xff, 0xb5, 0xff, 0xff,
    0xff, 0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xff, 0xff, 0xff, 0xfb, 0x5f, 0xff, 0xff,
    0xff, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0xff, 0xff, 0xff, 0xff, 0xc5, 0xff, 0xff, 0xff,
    0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1f,
    0xff, 0xff, 0xff, 0xfb, 0x5f, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xff, 0xff, 0xb4, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xff,
    0xff, 0xff, 0xfa, 0x3f, 0xff, 0xff, 0xff, 0xfa,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xff, 0xff,
    0xff, 0xff, 0x91, 0xff, 0xff, 0xff, 0xff, 0xb0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xff,
    0xff, 0xf8, 0xf, 0xff, 0xff, 0xff, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0xff, 0xff,
    0xff, 0x60, 0xdf, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0xff,
    0xf4, 0xb, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xff, 0xff,
    0x10, 0x7f, 0xff, 0xff, 0xff, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0x3, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x8f, 0xff, 0xff, 0xff, 0xfa, 0x0,
    0xf, 0xff, 0xff, 0xff, 0xff, 0x70, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0x50, 0x0,
    0xaf, 0xff, 0xff, 0xff, 0xff, 0x40, 0x0, 0x0,
    0x1c, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x0, 0x4,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xa4, 0x23, 0x7e,
    0xff, 0xff, 0xff, 0xff, 0xfa, 0x0, 0x0, 0xc,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x30, 0x0, 0x0, 0x4f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0, 0xaf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x1, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xbf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe4,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5c,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0x7b, 0xdf, 0xff, 0xec, 0x95, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+0032 "2" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x34, 0x43,
    0x21, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x3, 0x8c, 0xff, 0xff, 0xff, 0xff,
    0xea, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x28, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x91, 0x0, 0x0, 0x0, 0x0, 0x3b, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x50, 0x0, 0x0, 0x1a, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf7, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x60, 0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x0,
    0x3f, 0xff, 0xff, 0xfb, 0x73, 0x20, 0x1, 0x49,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x10, 0x3f,
    0xff, 0xb5, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1a,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x50, 0x3f, 0xb2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f,
    0xff, 0xff, 0xff, 0xff, 0x90, 0x13, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xff,
    0xff, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff,
    0xff, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xff,
    0xff, 0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xff, 0xff, 0xff, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xff, 0xff, 0xff, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2f, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf,
    0xff, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4, 0xff, 0xff,
    0xff, 0xff, 0xe1, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xff,
    0xff, 0x70, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0xff, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x4f, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2e, 0xff, 0xff,
    0xff, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xef, 0xff, 0xff, 0xff,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1d, 0xff, 0xff, 0xff, 0xff, 0xf9,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x2, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2e,
    0xff, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0xef, 0xff,
    0xff, 0xff, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0xff,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x90, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x70, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xcf, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x22, 0x22, 0x22, 0x22,
    0x22, 0x22, 0x22, 0x20, 0x2e, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf1, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf1,

    /* U+0033 "3" */
    0x0, 0x0, 0x0, 0x47, 0xac, 0xee, 0xff, 0xed,
    0xa7, 0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0x60, 0x0, 0x0, 0x0, 0x5, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x30,
    0x0, 0x0, 0x9, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x9, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x30, 0x0, 0x9, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd0, 0x0, 0x9, 0xff, 0xff, 0xff,
    0xff, 0xee, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf6, 0x0, 0x9, 0xff, 0xd9, 0x53, 0x0, 0x0,
    0x2, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x0,
    0x7, 0x71, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xff,
    0xff, 0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xff,
    0xff, 0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xff, 0xff, 0xff, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xff, 0xff, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xff,
    0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0x37, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0x30, 0x0, 0x0, 0x0,
    0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x30,
    0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x5f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd6, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x5f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xc2, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0x25, 0xaf, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2,
    0xbf, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0x40, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xff, 0xff,
    0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xff, 0xff, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0xff, 0xff, 0xff, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x4f,
    0xff, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xff,
    0xff, 0xf4, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff, 0xf3,
    0xb2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xcf, 0xff, 0xff, 0xff, 0xf1, 0xef, 0x91,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xff,
    0xff, 0xff, 0xff, 0xe0, 0xef, 0xff, 0xa4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xff,
    0xff, 0x90, 0xef, 0xff, 0xff, 0xfc, 0x86, 0x53,
    0x45, 0x8e, 0xff, 0xff, 0xff, 0xff, 0xff, 0x30,
    0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfb, 0x0, 0xef, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe1, 0x0, 0xef, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x40, 0x0, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x0, 0x0,
    0x6d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfb, 0x10, 0x0, 0x0, 0x0, 0x39,
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfa,
    0x30, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2, 0x68,
    0xbd, 0xef, 0xff, 0xec, 0x95, 0x10, 0x0, 0x0,
    0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x12, 0x10, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x59, 0xdf,
    0xff, 0xff, 0xff, 0xdb, 0x84, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x19, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x1, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x9f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xd0, 0x0, 0x0, 0x0, 0x4f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xa6, 0x21, 0x0, 0x13,
    0x69, 0xdc, 0x0, 0x0, 0x0, 0xd, 0xff, 0xff,
    0xff, 0xff, 0xfb, 0x10, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xdf, 0xff, 0xff, 0xff,
    0xfb, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4f, 0xff, 0xff, 0xff, 0xff,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xff, 0xff, 0xff, 0xff, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xef, 0xff, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0xff, 0xff, 0xff, 0xfb, 0x0, 0x38,
    0xbd, 0xef, 0xed, 0xb7, 0x20, 0x0, 0x0, 0x0,
    0x6, 0xff, 0xff, 0xff, 0xff, 0x86, 0xef, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xb2, 0x0, 0x0, 0x0,
    0xaf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf6, 0x0, 0x0, 0xd,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf6, 0x0, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf2, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xdf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xc0, 0x2, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x71, 0x0, 0x4, 0xcf,
    0xff, 0xff, 0xff, 0xff, 0x30, 0x2f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x30, 0x0, 0x0, 0x0, 0xbf,
    0xff, 0xff, 0xff, 0xfa, 0x3, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0xef,
    0xff, 0xff, 0xff, 0xe0, 0x3f, 0xff, 0xff, 0xff,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xff,
    0xff, 0xff, 0xff, 0x22, 0xff, 0xff, 0xff, 0xff,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff,
    0xff, 0xff, 0xf5, 0x1f, 0xff, 0xff, 0xff, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf, 0xff,
    0xff, 0xff, 0x60, 0xff, 0xff, 0xff, 0xff, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0xff,
    0xff, 0xf7, 0xf, 0xff, 0xff, 0xff, 0xff, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xff,
    0xff, 0x80, 0xcf, 0xff, 0xff, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9, 0xff, 0xff, 0xff,
    0xf8, 0xa, 0xff, 0xff, 0xff, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xff, 0xff, 0xff,
    0x70, 0x7f, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xff, 0xff, 0xff, 0xf6,
    0x3, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0x40,
    0xe, 0xff, 0xff, 0xff, 0xfd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0x9f, 0xff, 0xff, 0xff, 0xf6, 0x0, 0x0, 0x0,
    0x0, 0xe, 0xff, 0xff, 0xff, 0xfc, 0x0, 0x4,
    0xff, 0xff, 0xff, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0xb, 0xff, 0xff, 0xff, 0xff, 0x70, 0x0, 0xc,
    0xff, 0xff, 0xff, 0xff, 0xf9, 0x20, 0x1, 0x5d,
    0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x4f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x0, 0x0, 0xcf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfc, 0x0, 0x0, 0x0, 0x1, 0xef,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x20, 0x0, 0x0, 0x0, 0x3, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xfe, 0x30, 0x0, 0x0, 0x0, 0x0, 0x2, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc,
    0x10, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x6d,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc4, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3,
    0x7b, 0xde, 0xff, 0xed, 0xa6, 0x20, 0x0, 0x0,
    0x0, 0x0,

    /* U+2014 "—" */
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 250, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 566, .box_w = 31, .box_h = 44, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 682, .adv_w = 566, .box_w = 30, .box_h = 43, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1327, .adv_w = 566, .box_w = 28, .box_h = 43, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 1929, .adv_w = 566, .box_w = 31, .box_h = 44, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2611, .adv_w = 960, .box_w = 60, .box_h = 7, .ofs_x = 0, .ofs_y = 15}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x10, 0x12, 0x13, 0x16, 0x1ff4
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 8181, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 6, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t lv_customer_font_alimama_60 = {
#else
lv_font_t lv_customer_font_alimama_60 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 44,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -6,
    .underline_thickness = 3,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_CUSTOMER_FONT_ALIMAMA_60*/
