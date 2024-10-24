/*
 * Copyright 2024 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */
/*******************************************************************************
 * Size: 24 px
 * Bpp: 4
 * Opts: undefined
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_CUSTOMER_FONT_NSHREGULAR_24
#define LV_CUSTOMER_FONT_NSHREGULAR_24 1
#endif

#if LV_CUSTOMER_FONT_NSHREGULAR_24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0023 "#" */
    0x0, 0x0, 0x8e, 0x0, 0x7, 0xe0, 0x0, 0x0,
    0xa, 0xc0, 0x0, 0x9c, 0x0, 0x0, 0x0, 0xca,
    0x0, 0xc, 0xa0, 0x0, 0x0, 0xe, 0x80, 0x0,
    0xe8, 0x0, 0x0, 0x0, 0xf6, 0x0, 0xf, 0x60,
    0x0, 0x8f, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x4,
    0x9b, 0xfa, 0x99, 0xbf, 0xa9, 0x40, 0x0, 0x5f,
    0x10, 0x5, 0xf1, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x7f, 0x0, 0x0, 0x0, 0x9d, 0x0, 0xa, 0xd0,
    0x0, 0x9, 0x9e, 0xe9, 0x99, 0xee, 0x99, 0x0,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x0, 0xf,
    0x70, 0x0, 0xf7, 0x0, 0x0, 0x1, 0xf5, 0x0,
    0x1f, 0x50, 0x0, 0x0, 0x3f, 0x30, 0x3, 0xf3,
    0x0, 0x0, 0x4, 0xf1, 0x0, 0x5f, 0x10, 0x0,
    0x0, 0x6f, 0x0, 0x6, 0xf0, 0x0, 0x0, 0x8,
    0xe0, 0x0, 0x8e, 0x0, 0x0,

    /* U+002E "." */
    0x3, 0x71, 0xf, 0xfa, 0x2f, 0xfc, 0x9, 0xe5,

    /* U+0030 "0" */
    0x0, 0x7, 0xdf, 0xe9, 0x10, 0x0, 0x0, 0xbf,
    0xfe, 0xff, 0xe2, 0x0, 0x7, 0xff, 0x30, 0x1c,
    0xfc, 0x0, 0xe, 0xf5, 0x0, 0x1, 0xef, 0x40,
    0x4f, 0xe0, 0x0, 0x0, 0x9f, 0x90, 0x8f, 0xa0,
    0x0, 0x0, 0x4f, 0xd0, 0xaf, 0x70, 0x0, 0x0,
    0x2f, 0xf0, 0xcf, 0x50, 0x0, 0x0, 0xf, 0xf1,
    0xcf, 0x50, 0x0, 0x0, 0xf, 0xf1, 0xcf, 0x50,
    0x0, 0x0, 0xf, 0xf1, 0xcf, 0x50, 0x0, 0x0,
    0xf, 0xf1, 0xaf, 0x70, 0x0, 0x0, 0x2f, 0xf0,
    0x8f, 0xa0, 0x0, 0x0, 0x5f, 0xd0, 0x4f, 0xe0,
    0x0, 0x0, 0x9f, 0x90, 0xe, 0xf5, 0x0, 0x1,
    0xef, 0x40, 0x7, 0xfe, 0x30, 0x1b, 0xfc, 0x0,
    0x0, 0xbf, 0xfe, 0xff, 0xe2, 0x0, 0x0, 0x7,
    0xdf, 0xe9, 0x10, 0x0,

    /* U+0031 "1" */
    0x0, 0x28, 0xef, 0x30, 0x0, 0x1e, 0xff, 0xff,
    0x30, 0x0, 0x1a, 0xaa, 0xff, 0x30, 0x0, 0x0,
    0x0, 0xff, 0x30, 0x0, 0x0, 0x0, 0xff, 0x30,
    0x0, 0x0, 0x0, 0xff, 0x30, 0x0, 0x0, 0x0,
    0xff, 0x30, 0x0, 0x0, 0x0, 0xff, 0x30, 0x0,
    0x0, 0x0, 0xff, 0x30, 0x0, 0x0, 0x0, 0xff,
    0x30, 0x0, 0x0, 0x0, 0xff, 0x30, 0x0, 0x0,
    0x0, 0xff, 0x30, 0x0, 0x0, 0x0, 0xff, 0x30,
    0x0, 0x0, 0x0, 0xff, 0x30, 0x0, 0x0, 0x0,
    0xff, 0x30, 0x0, 0x0, 0x0, 0xff, 0x30, 0x0,
    0xce, 0xee, 0xff, 0xee, 0xeb, 0xef, 0xff, 0xff,
    0xff, 0xfc,

    /* U+0032 "2" */
    0x0, 0x5, 0xbe, 0xec, 0x70, 0x0, 0x0, 0x1b,
    0xff, 0xff, 0xff, 0xc0, 0x0, 0xc, 0xfc, 0x30,
    0x5, 0xef, 0x80, 0x0, 0x3a, 0x0, 0x0, 0x5,
    0xff, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xef, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xfd, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xbf, 0x60, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x1e, 0xf5, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xf9, 0x0, 0x0, 0x0, 0x0,
    0xa, 0xfc, 0x0, 0x0, 0x0, 0x0, 0x9, 0xfe,
    0x10, 0x0, 0x0, 0x0, 0x9, 0xfe, 0x20, 0x0,
    0x0, 0x0, 0xa, 0xfe, 0x20, 0x0, 0x0, 0x0,
    0xb, 0xff, 0xee, 0xef, 0xff, 0xff, 0x10, 0xef,
    0xff, 0xff, 0xff, 0xff, 0xf1,

    /* U+0033 "3" */
    0x0, 0x5, 0xbe, 0xfd, 0x92, 0x0, 0x1, 0xaf,
    0xff, 0xef, 0xff, 0x40, 0x4, 0xfb, 0x30, 0x1,
    0xbf, 0xf0, 0x0, 0x20, 0x0, 0x0, 0x1f, 0xf3,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x3f, 0xf1, 0x0, 0x0, 0x0, 0x6,
    0xef, 0x70, 0x0, 0x0, 0x9e, 0xff, 0xd5, 0x0,
    0x0, 0x0, 0xbf, 0xff, 0xc5, 0x0, 0x0, 0x0,
    0x2, 0x39, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0,
    0x2e, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x7, 0xfc,
    0x0, 0x0, 0x0, 0x0, 0x4, 0xfe, 0x0, 0x0,
    0x0, 0x0, 0x6, 0xfd, 0x9, 0x70, 0x0, 0x0,
    0xc, 0xf9, 0x1f, 0xfa, 0x30, 0x2, 0xbf, 0xf2,
    0x4, 0xef, 0xff, 0xff, 0xff, 0x50, 0x0, 0x17,
    0xce, 0xfd, 0x91, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x8, 0xff, 0x30, 0x0, 0x0,
    0x0, 0x2, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0,
    0xcf, 0xef, 0x30, 0x0, 0x0, 0x0, 0x6f, 0x9c,
    0xf3, 0x0, 0x0, 0x0, 0x1f, 0xf1, 0xdf, 0x30,
    0x0, 0x0, 0xb, 0xf7, 0xd, 0xf3, 0x0, 0x0,
    0x5, 0xfd, 0x0, 0xdf, 0x30, 0x0, 0x1, 0xef,
    0x30, 0xd, 0xf3, 0x0, 0x0, 0x9f, 0x80, 0x0,
    0xdf, 0x30, 0x0, 0x3f, 0xd0, 0x0, 0xd, 0xf3,
    0x0, 0xd, 0xf3, 0x0, 0x0, 0xdf, 0x30, 0x6,
    0xff, 0xdd, 0xdd, 0xdf, 0xfd, 0xd7, 0x8f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x80, 0x0, 0x0, 0x0,
    0xd, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0x30, 0x0, 0x0, 0x0, 0x0, 0xd, 0xf3, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xdf, 0x30, 0x0, 0x0,
    0x0, 0x0, 0xd, 0xf3, 0x0,

    /* U+0035 "5" */
    0x0, 0x6f, 0xff, 0xff, 0xff, 0xf2, 0x0, 0x7,
    0xff, 0xff, 0xff, 0xff, 0x20, 0x0, 0x8f, 0x70,
    0x0, 0x0, 0x0, 0x0, 0xa, 0xf6, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xbf, 0x40, 0x0, 0x0, 0x0,
    0x0, 0xc, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0x8d, 0xfd, 0xb3, 0x0, 0x0, 0xe, 0xff,
    0xdc, 0xff, 0xf7, 0x0, 0x0, 0x59, 0x10, 0x0,
    0x9f, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x6, 0xfd, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3f, 0xf0, 0x0, 0x0,
    0x0, 0x0, 0x4, 0xfe, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x7f, 0xb0, 0x7, 0x40, 0x0, 0x0, 0x1e,
    0xf7, 0x1, 0xff, 0x92, 0x0, 0x3d, 0xfd, 0x0,
    0x5, 0xef, 0xff, 0xff, 0xfd, 0x20, 0x0, 0x1,
    0x7c, 0xef, 0xc7, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x7d, 0xfd, 0xa4, 0x0, 0x0, 0x2e,
    0xff, 0xff, 0xff, 0x80, 0x0, 0xdf, 0xc3, 0x0,
    0x4d, 0x40, 0x7, 0xfb, 0x0, 0x0, 0x0, 0x0,
    0xe, 0xf2, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x6f, 0x90, 0x39, 0xa8,
    0x30, 0x0, 0x8f, 0x76, 0xff, 0xff, 0xf9, 0x0,
    0x9f, 0xdf, 0x61, 0x16, 0xff, 0x50, 0xaf, 0xf3,
    0x0, 0x0, 0x6f, 0xd0, 0x9f, 0x80, 0x0, 0x0,
    0xf, 0xf0, 0x8f, 0x90, 0x0, 0x0, 0xd, 0xf3,
    0x5f, 0xc0, 0x0, 0x0, 0xd, 0xf3, 0x1f, 0xf1,
    0x0, 0x0, 0xf, 0xf0, 0xb, 0xf8, 0x0, 0x0,
    0x6f, 0xc0, 0x3, 0xff, 0x60, 0x3, 0xef, 0x40,
    0x0, 0x6f, 0xff, 0xdf, 0xf8, 0x0, 0x0, 0x3,
    0xbe, 0xeb, 0x40, 0x0,

    /* U+0037 "7" */
    0xdf, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xcf, 0xff,
    0xff, 0xff, 0xff, 0xf1, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0x60, 0x0, 0x0, 0x0, 0x3, 0xfb, 0x0,
    0x0, 0x0, 0x0, 0xd, 0xf2, 0x0, 0x0, 0x0,
    0x0, 0x6f, 0x90, 0x0, 0x0, 0x0, 0x0, 0xdf,
    0x30, 0x0, 0x0, 0x0, 0x4, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0xf, 0xf1, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xe0,
    0x0, 0x0, 0x0, 0x0, 0x7f, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0x70, 0x0, 0x0, 0x0, 0x0,
    0xdf, 0x50, 0x0, 0x0, 0x0, 0x0, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0, 0xff, 0x30, 0x0, 0x0,
    0x0, 0x1, 0xff, 0x20, 0x0, 0x0, 0x0, 0x3,
    0xff, 0x10, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x7, 0xcf, 0xdb, 0x30, 0x0, 0x0, 0xdf,
    0xfb, 0xdf, 0xf6, 0x0, 0x9, 0xfc, 0x10, 0x5,
    0xff, 0x10, 0xe, 0xf2, 0x0, 0x0, 0x9f, 0x60,
    0xf, 0xf0, 0x0, 0x0, 0x5f, 0x80, 0xe, 0xf1,
    0x0, 0x0, 0x6f, 0x70, 0x7, 0xf9, 0x0, 0x0,
    0xaf, 0x10, 0x0, 0xaf, 0x90, 0x3, 0xf6, 0x0,
    0x0, 0xe, 0xfe, 0x8e, 0x80, 0x0, 0x2, 0xdf,
    0x6a, 0xff, 0xc1, 0x0, 0xd, 0xf3, 0x0, 0x2b,
    0xfe, 0x20, 0x7f, 0x70, 0x0, 0x0, 0xaf, 0xc0,
    0xcf, 0x20, 0x0, 0x0, 0x1f, 0xf1, 0xdf, 0x20,
    0x0, 0x0, 0xe, 0xf2, 0xaf, 0x70, 0x0, 0x0,
    0x2f, 0xf0, 0x4f, 0xf6, 0x0, 0x2, 0xcf, 0x90,
    0x7, 0xff, 0xec, 0xdf, 0xfc, 0x0, 0x0, 0x29,
    0xdf, 0xeb, 0x50, 0x0,

    /* U+0039 "9" */
    0x0, 0x2a, 0xef, 0xc6, 0x0, 0x0, 0x5f, 0xff,
    0xef, 0xfb, 0x0, 0x2f, 0xf6, 0x0, 0x2d, 0xf9,
    0x9, 0xf9, 0x0, 0x0, 0x1f, 0xf2, 0xcf, 0x40,
    0x0, 0x0, 0x8f, 0x7e, 0xf2, 0x0, 0x0, 0x4,
    0xfb, 0xcf, 0x40, 0x0, 0x0, 0x2f, 0xe9, 0xfa,
    0x0, 0x0, 0xa, 0xff, 0x2f, 0xf8, 0x20, 0x4c,
    0xdf, 0xf0, 0x6f, 0xff, 0xff, 0xb2, 0xfe, 0x0,
    0x27, 0xa9, 0x50, 0x3f, 0xd0, 0x0, 0x0, 0x0,
    0x6, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x9f, 0x80,
    0x0, 0x0, 0x0, 0xe, 0xf3, 0x1, 0x0, 0x0,
    0x8, 0xfc, 0x2, 0xe9, 0x20, 0x28, 0xff, 0x30,
    0x3e, 0xff, 0xff, 0xff, 0x50, 0x0, 0x19, 0xdf,
    0xea, 0x20, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 86, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 213, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 107, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 213, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 213, .box_w = 10, .box_h = 18, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 213, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 440, .adv_w = 213, .box_w = 12, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 213, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 665, .adv_w = 213, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 213, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 213, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 998, .adv_w = 213, .box_w = 12, .box_h = 18, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1106, .adv_w = 213, .box_w = 11, .box_h = 18, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x3, 0xe
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 3, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 4,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
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
    .cmap_num = 2,
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
const lv_font_t lv_customer_font_NSHRegular_24 = {
#else
lv_font_t lv_customer_font_NSHRegular_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 18,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_CUSTOMER_FONT_NSHREGULAR_24*/
