/*
 * Copyright 2024 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */
/*******************************************************************************
 * Size: 30 px
 * Bpp: 4
 * Opts: undefined
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_CUSTOMER_FONT_NSHBOLD_30
#define LV_CUSTOMER_FONT_NSHBOLD_30 1
#endif

#if LV_CUSTOMER_FONT_NSHBOLD_30

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+4FDD "保" */
    0x0, 0x0, 0x0, 0x1, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x9, 0xfc, 0x70, 0x11, 0x11, 0x11,
    0x11, 0x11, 0x11, 0x11, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xff, 0xb4, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0x34, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf7, 0x0, 0x0, 0x0, 0x1, 0xef,
    0xfb, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf7, 0x0, 0x0, 0x0, 0x9, 0xff, 0xf3,
    0x4, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xf7, 0x0, 0x0, 0x0, 0x2f, 0xff, 0xb0, 0x4,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf7,
    0x0, 0x0, 0x0, 0xcf, 0xff, 0x40, 0x4, 0xff,
    0xf1, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf7, 0x0,
    0x0, 0x8, 0xff, 0xff, 0x20, 0x4, 0xff, 0xf1,
    0x0, 0x0, 0x0, 0x1, 0xff, 0xf7, 0x0, 0x0,
    0x4f, 0xff, 0xff, 0x20, 0x4, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x3, 0xff,
    0xff, 0xff, 0x20, 0x4, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf7, 0x0, 0x2e, 0xff, 0xff,
    0xff, 0x20, 0x4, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf7, 0x0, 0x1e, 0xff, 0xff, 0xff,
    0x20, 0x0, 0x33, 0x33, 0x38, 0xff, 0xf5, 0x33,
    0x33, 0x31, 0x0, 0x7, 0xff, 0x7f, 0xff, 0x20,
    0x0, 0x0, 0x0, 0x6, 0xff, 0xf2, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xe6, 0x3f, 0xff, 0x20, 0x11,
    0x11, 0x11, 0x17, 0xff, 0xf4, 0x11, 0x11, 0x11,
    0x10, 0x0, 0x20, 0x3f, 0xff, 0x24, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,
    0x0, 0x0, 0x3f, 0xff, 0x24, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x3f, 0xff, 0x24, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x3f, 0xff, 0x20, 0x22, 0x22, 0x28, 0xff, 0xff,
    0xff, 0xf5, 0x22, 0x22, 0x20, 0x0, 0x0, 0x3f,
    0xff, 0x20, 0x0, 0x0, 0x3f, 0xff, 0xff, 0xff,
    0xfd, 0x0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0x20, 0x0, 0x2, 0xef, 0xff, 0xff, 0xff, 0xff,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x20,
    0x0, 0x1d, 0xff, 0xfb, 0xff, 0xfa, 0xff, 0xf9,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xff, 0x20, 0x3,
    0xef, 0xff, 0x76, 0xff, 0xf3, 0xbf, 0xff, 0x90,
    0x0, 0x0, 0x0, 0x3f, 0xff, 0x20, 0x5f, 0xff,
    0xfb, 0x6, 0xff, 0xf2, 0x1e, 0xff, 0xfb, 0x10,
    0x0, 0x0, 0x3f, 0xff, 0x4b, 0xff, 0xff, 0xd0,
    0x6, 0xff, 0xf2, 0x4, 0xff, 0xff, 0xe3, 0x0,
    0x0, 0x3f, 0xff, 0x4c, 0xff, 0xfd, 0x10, 0x6,
    0xff, 0xf2, 0x0, 0x6f, 0xff, 0xf4, 0x0, 0x0,
    0x3f, 0xff, 0x21, 0xdf, 0xc1, 0x0, 0x6, 0xff,
    0xf2, 0x0, 0x6, 0xff, 0x50, 0x0, 0x0, 0x3f,
    0xff, 0x20, 0x39, 0x0, 0x0, 0x6, 0xff, 0xf2,
    0x0, 0x0, 0x48, 0x0, 0x0, 0x0, 0x3f, 0xff,
    0x20, 0x0, 0x0, 0x0, 0x6, 0xff, 0xf2, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+56DE "回" */
    0x79, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x98, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xcf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xfd, 0xcf, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xff,
    0xfd, 0xcf, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xfd, 0xcf, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0xfd, 0xcf, 0xfe, 0x0, 0x2, 0x22,
    0x22, 0x22, 0x22, 0x22, 0x20, 0x0, 0xff, 0xfd,
    0xcf, 0xfe, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0xff, 0xfd, 0xcf, 0xfe, 0x0,
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0xff, 0xfd, 0xcf, 0xfe, 0x0, 0x2f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xfd, 0xcf,
    0xfe, 0x0, 0x2f, 0xff, 0x20, 0x0, 0x8, 0xff,
    0xf0, 0x0, 0xff, 0xfd, 0xcf, 0xfe, 0x0, 0x2f,
    0xff, 0x20, 0x0, 0x8, 0xff, 0xf0, 0x0, 0xff,
    0xfd, 0xcf, 0xfe, 0x0, 0x2f, 0xff, 0x20, 0x0,
    0x8, 0xff, 0xf0, 0x0, 0xff, 0xfd, 0xcf, 0xfe,
    0x0, 0x2f, 0xff, 0x20, 0x0, 0x8, 0xff, 0xf0,
    0x0, 0xff, 0xfd, 0xcf, 0xfe, 0x0, 0x2f, 0xff,
    0x20, 0x0, 0x8, 0xff, 0xf0, 0x0, 0xff, 0xfd,
    0xcf, 0xfe, 0x0, 0x2f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf0, 0x0, 0xff, 0xfd, 0xcf, 0xfe, 0x0,
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0,
    0xff, 0xfd, 0xcf, 0xfe, 0x0, 0x2f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0xff, 0xfd, 0xcf,
    0xfe, 0x0, 0x2, 0x22, 0x22, 0x22, 0x22, 0x22,
    0x20, 0x0, 0xff, 0xfd, 0xcf, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff,
    0xfd, 0xcf, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xfd, 0xcf, 0xff,
    0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55,
    0x55, 0xff, 0xfd, 0xcf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfd,
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xcf, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xfd, 0xcf, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xfd, 0xcf,
    0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xff, 0xfd,

    /* U+5B58 "存" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x3, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xfd, 0x80, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x4f, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xff, 0x50, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x77, 0x77, 0x77,
    0x77, 0xef, 0xff, 0x87, 0x77, 0x77, 0x77, 0x77,
    0x77, 0x77, 0x40, 0x1, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x80, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0x80, 0x1, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0xcf, 0xff, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xfb, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1e, 0xff, 0xf2, 0xf, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfd, 0x20, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0xff, 0x90, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xe2, 0x0, 0x0, 0x0, 0x7, 0xff,
    0xfd, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x5f, 0xff, 0xf3,
    0x0, 0x4, 0x44, 0x44, 0x44, 0x7f, 0xff, 0xf8,
    0x0, 0x0, 0x0, 0x4, 0xff, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xff, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x6f, 0xff, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xf4, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xff, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0x20, 0x0, 0x0, 0x0, 0xc,
    0xff, 0xff, 0xff, 0xe0, 0x13, 0x33, 0x33, 0x33,
    0xcf, 0xfe, 0x33, 0x33, 0x33, 0x30, 0x4, 0xff,
    0xbb, 0xff, 0xe0, 0x4f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0xd8, 0xa,
    0xff, 0xe0, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf0, 0x0, 0x10, 0xa, 0xff,
    0xe0, 0x4f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf0, 0x0, 0x0, 0xa, 0xff, 0xe0,
    0x1, 0x11, 0x11, 0x11, 0xbf, 0xfe, 0x11, 0x11,
    0x11, 0x10, 0x0, 0x0, 0xa, 0xff, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0xbf, 0xfe, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xa, 0xff, 0xe0, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xff, 0xe0, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xa, 0xff, 0xe0, 0x0, 0x0, 0x54, 0x44,
    0xdf, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xff, 0xe0, 0x0, 0x0, 0xcf, 0xff, 0xff,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa,
    0xff, 0xe0, 0x0, 0x0, 0x7f, 0xff, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff,
    0xe0, 0x0, 0x0, 0x3f, 0xff, 0xea, 0x60, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+8FD4 "返" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x24, 0x0, 0x0, 0x0,
    0x5, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x1,
    0x34, 0x69, 0xbe, 0xff, 0x80, 0x0, 0x1, 0xaf,
    0xfb, 0x0, 0x0, 0x8, 0xbd, 0xef, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xf8, 0x0, 0x1, 0xef, 0xff,
    0xa0, 0x0, 0xc, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xfb, 0x30, 0x0, 0x3f, 0xff, 0xf8,
    0x0, 0xc, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xa7,
    0x52, 0x0, 0x0, 0x0, 0x5, 0xff, 0xff, 0x60,
    0xc, 0xff, 0xd4, 0x32, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xfd, 0x20, 0xc,
    0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xb, 0x90, 0x0, 0xc, 0xff,
    0xd4, 0x44, 0x44, 0x44, 0x44, 0x44, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xc, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0x5, 0x77, 0x77,
    0x77, 0x0, 0xd, 0xff, 0xb1, 0x11, 0x11, 0x11,
    0x2f, 0xff, 0x70, 0x0, 0xc, 0xff, 0xff, 0xff,
    0x10, 0xe, 0xff, 0x90, 0x78, 0x0, 0x0, 0x7f,
    0xff, 0x20, 0x0, 0xc, 0xff, 0xff, 0xff, 0x10,
    0xf, 0xff, 0x9a, 0xff, 0xa0, 0x0, 0xef, 0xfc,
    0x0, 0x0, 0xb, 0xee, 0xff, 0xff, 0x10, 0x2f,
    0xff, 0x9d, 0xff, 0xfc, 0x19, 0xff, 0xf3, 0x0,
    0x0, 0x0, 0x0, 0x7f, 0xff, 0x10, 0x5f, 0xff,
    0x41, 0xcf, 0xff, 0xef, 0xff, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0x10, 0xaf, 0xff, 0x10,
    0xa, 0xff, 0xff, 0xff, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xff, 0x10, 0xef, 0xfd, 0x0, 0x0,
    0xaf, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0x14, 0xff, 0xf8, 0x0, 0x7, 0xff,
    0xff, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xff, 0x1d, 0xff, 0xf3, 0x4, 0xcf, 0xff, 0xff,
    0xff, 0xfc, 0x10, 0x0, 0x0, 0x0, 0x7f, 0xff,
    0x8f, 0xff, 0xd5, 0xdf, 0xff, 0xff, 0x74, 0xff,
    0xff, 0xd1, 0x0, 0x0, 0x0, 0x7f, 0xff, 0x7e,
    0xff, 0x33, 0xff, 0xff, 0xe3, 0x0, 0x3e, 0xff,
    0xf4, 0x0, 0x0, 0x4, 0xdf, 0xff, 0x40, 0x99,
    0x0, 0x7f, 0xe7, 0x0, 0x0, 0x2, 0xee, 0x20,
    0x0, 0x0, 0xaf, 0xff, 0xff, 0xfb, 0x40, 0x0,
    0x6, 0x0, 0x0, 0x0, 0x0, 0x21, 0x0, 0x0,
    0x1c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xb9, 0x77,
    0x65, 0x55, 0x56, 0x78, 0x9a, 0xcd, 0xc0, 0x3f,
    0xff, 0xe3, 0x29, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x70, 0x7, 0xff,
    0x40, 0x0, 0x2a, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x30, 0x0, 0xca, 0x0,
    0x0, 0x0, 0x16, 0xad, 0xef, 0xff, 0xff, 0xff,
    0xff, 0xfe, 0xdc, 0x0, 0x0, 0x21, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x11, 0x11, 0x10, 0x0,
    0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 109, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 480, .box_w = 30, .box_h = 30, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 450, .adv_w = 480, .box_w = 26, .box_h = 28, .ofs_x = 2, .ofs_y = -3},
    {.bitmap_index = 814, .adv_w = 480, .box_w = 30, .box_h = 30, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 1264, .adv_w = 480, .box_w = 30, .box_h = 29, .ofs_x = 0, .ofs_y = -3}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x4fbd, 0x56be, 0x5b38, 0x8fb4
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 36789, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 5, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
const lv_font_t lv_customer_font_NSHBold_30 = {
#else
lv_font_t lv_customer_font_NSHBold_30 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = 4,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -4,
    .underline_thickness = 2,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_CUSTOMER_FONT_NSHBOLD_30*/
