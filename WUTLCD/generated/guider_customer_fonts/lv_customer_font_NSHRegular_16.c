/*
 * Copyright 2024 NXP
 * NXP Confidential and Proprietary. This software is owned or controlled by NXP and may only be used strictly in
 * accordance with the applicable license terms. By expressly accepting such terms or by downloading, installing,
 * activating and/or otherwise using the software, you are agreeing that you have read, and that you agree to
 * comply with and are bound by, such license terms.  If you do not agree to be bound by the applicable license
 * terms, then you may not retain, install, activate or otherwise use the software.
 */
/*******************************************************************************
 * Size: 16 px
 * Bpp: 4
 * Opts: undefined
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl.h"
#endif

#ifndef LV_CUSTOMER_FONT_NSHREGULAR_16
#define LV_CUSTOMER_FONT_NSHREGULAR_16 1
#endif

#if LV_CUSTOMER_FONT_NSHREGULAR_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0025 "%" */
    0x3, 0xde, 0xa0, 0x0, 0x2, 0xc0, 0x0, 0x0,
    0xe4, 0xb, 0x80, 0x0, 0xb4, 0x0, 0x0, 0x4d,
    0x0, 0x4d, 0x0, 0x4b, 0x0, 0x0, 0x5, 0xc0,
    0x2, 0xe0, 0xc, 0x30, 0x0, 0x0, 0x3d, 0x0,
    0x4d, 0x5, 0xa1, 0xae, 0xa0, 0x0, 0xe5, 0xb,
    0x70, 0xd2, 0xa8, 0xa, 0x80, 0x3, 0xce, 0x90,
    0x69, 0xf, 0x10, 0x2e, 0x0, 0x0, 0x0, 0xd,
    0x12, 0xe0, 0x0, 0xf0, 0x0, 0x0, 0x7, 0x70,
    0x2e, 0x0, 0xf, 0x0, 0x0, 0x1, 0xd0, 0x0,
    0xf1, 0x2, 0xe0, 0x0, 0x0, 0x96, 0x0, 0xa,
    0x80, 0x99, 0x0, 0x0, 0x2d, 0x0, 0x0, 0x1b,
    0xea, 0x0,

    /* U+0030 "0" */
    0x0, 0x4c, 0xfb, 0x20, 0x0, 0x3f, 0x94, 0xae,
    0x10, 0xa, 0xc0, 0x0, 0xe8, 0x0, 0xf7, 0x0,
    0x9, 0xd0, 0x1f, 0x40, 0x0, 0x7f, 0x2, 0xf3,
    0x0, 0x5, 0xf0, 0x2f, 0x30, 0x0, 0x5f, 0x1,
    0xf4, 0x0, 0x7, 0xf0, 0xf, 0x70, 0x0, 0x9d,
    0x0, 0x9c, 0x0, 0xe, 0x70, 0x2, 0xf9, 0x3a,
    0xe1, 0x0, 0x3, 0xcf, 0xb2, 0x0,

    /* U+0031 "1" */
    0x4, 0x9f, 0x70, 0x0, 0xcc, 0xf7, 0x0, 0x0,
    0xf, 0x70, 0x0, 0x0, 0xf7, 0x0, 0x0, 0xf,
    0x70, 0x0, 0x0, 0xf7, 0x0, 0x0, 0xf, 0x70,
    0x0, 0x0, 0xf7, 0x0, 0x0, 0xf, 0x70, 0x0,
    0x0, 0xf7, 0x0, 0x23, 0x3f, 0x93, 0x39, 0xff,
    0xff, 0xfd,

    /* U+0032 "2" */
    0x1, 0x9d, 0xeb, 0x20, 0x1, 0xeb, 0x55, 0xde,
    0x0, 0x5, 0x0, 0x2, 0xf5, 0x0, 0x0, 0x0,
    0xf, 0x70, 0x0, 0x0, 0x1, 0xf4, 0x0, 0x0,
    0x0, 0x7f, 0x10, 0x0, 0x0, 0x1e, 0x80, 0x0,
    0x0, 0xb, 0xd0, 0x0, 0x0, 0x9, 0xf2, 0x0,
    0x0, 0x9, 0xf3, 0x0, 0x0, 0x9, 0xf7, 0x44,
    0x44, 0x4, 0xff, 0xff, 0xff, 0xf1,

    /* U+0033 "3" */
    0x1, 0x9d, 0xfc, 0x40, 0xd, 0xb5, 0x5b, 0xf3,
    0x1, 0x0, 0x0, 0xf8, 0x0, 0x0, 0x0, 0xf7,
    0x0, 0x0, 0x3b, 0xd1, 0x0, 0x2f, 0xfd, 0x10,
    0x0, 0x3, 0x5c, 0xe2, 0x0, 0x0, 0x0, 0xcb,
    0x0, 0x0, 0x0, 0x8e, 0x5, 0x0, 0x0, 0xbc,
    0x4f, 0xa5, 0x4a, 0xf5, 0x3, 0xad, 0xfc, 0x40,

    /* U+0034 "4" */
    0x0, 0x0, 0x2f, 0xc0, 0x0, 0x0, 0xb, 0xfc,
    0x0, 0x0, 0x4, 0xf9, 0xc0, 0x0, 0x0, 0xd9,
    0x8c, 0x0, 0x0, 0x7e, 0x19, 0xc0, 0x0, 0x1f,
    0x50, 0x9c, 0x0, 0xa, 0xc0, 0x9, 0xc0, 0x4,
    0xf2, 0x0, 0x9c, 0x0, 0xaf, 0xff, 0xff, 0xff,
    0x52, 0x22, 0x22, 0xad, 0x21, 0x0, 0x0, 0x9,
    0xc0, 0x0, 0x0, 0x0, 0x9c, 0x0,

    /* U+0035 "5" */
    0x4, 0xff, 0xff, 0xf7, 0x0, 0x5f, 0x43, 0x33,
    0x10, 0x6, 0xe0, 0x0, 0x0, 0x0, 0x7d, 0x0,
    0x0, 0x0, 0x9, 0xeb, 0xec, 0x50, 0x0, 0x5a,
    0x43, 0x9f, 0x50, 0x0, 0x0, 0x0, 0xcc, 0x0,
    0x0, 0x0, 0x8, 0xf0, 0x0, 0x0, 0x0, 0x8e,
    0x0, 0x40, 0x0, 0xd, 0xa0, 0x4f, 0xa5, 0x4c,
    0xf2, 0x0, 0x3a, 0xde, 0xb2, 0x0,

    /* U+0036 "6" */
    0x0, 0x8, 0xde, 0xb3, 0x0, 0xb, 0xd6, 0x49,
    0x90, 0x5, 0xf1, 0x0, 0x0, 0x0, 0xc9, 0x0,
    0x0, 0x0, 0xf, 0x67, 0xdd, 0x80, 0x1, 0xfd,
    0x93, 0x5f, 0x80, 0x1f, 0x80, 0x0, 0x7f, 0x0,
    0xf6, 0x0, 0x4, 0xf1, 0xd, 0x90, 0x0, 0x4f,
    0x10, 0x7e, 0x0, 0x8, 0xe0, 0x1, 0xeb, 0x36,
    0xf6, 0x0, 0x1, 0xae, 0xd6, 0x0,

    /* U+0037 "7" */
    0x3f, 0xff, 0xff, 0xff, 0x10, 0x33, 0x33, 0x3d,
    0xb0, 0x0, 0x0, 0x4, 0xf2, 0x0, 0x0, 0x0,
    0xd7, 0x0, 0x0, 0x0, 0x5f, 0x10, 0x0, 0x0,
    0xb, 0xa0, 0x0, 0x0, 0x0, 0xf5, 0x0, 0x0,
    0x0, 0x4f, 0x20, 0x0, 0x0, 0x7, 0xf0, 0x0,
    0x0, 0x0, 0x9d, 0x0, 0x0, 0x0, 0xb, 0xc0,
    0x0, 0x0, 0x0, 0xcb, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x5d, 0xfd, 0x50, 0x0, 0x4f, 0x62, 0x6f,
    0x40, 0x9, 0xb0, 0x0, 0xaa, 0x0, 0x8b, 0x0,
    0x9, 0xa0, 0x3, 0xf6, 0x0, 0xd4, 0x0, 0x5,
    0xfc, 0xb7, 0x0, 0x2, 0xd6, 0x9f, 0xc1, 0x0,
    0xe7, 0x0, 0x1d, 0xc0, 0x3f, 0x20, 0x0, 0x5f,
    0x12, 0xf3, 0x0, 0x6, 0xf0, 0xb, 0xd4, 0x25,
    0xe9, 0x0, 0x8, 0xdf, 0xd7, 0x0,

    /* U+0039 "9" */
    0x0, 0x8e, 0xea, 0x10, 0x9, 0xe5, 0x4b, 0xd0,
    0x1f, 0x50, 0x0, 0xe6, 0x4f, 0x10, 0x0, 0x9b,
    0x2f, 0x30, 0x0, 0x7d, 0xd, 0xb1, 0x6, 0xff,
    0x2, 0xdf, 0xf9, 0x7f, 0x0, 0x1, 0x0, 0x9d,
    0x0, 0x0, 0x0, 0xd9, 0x0, 0x0, 0x4, 0xf2,
    0xc, 0x94, 0x6f, 0x90, 0x3, 0xbe, 0xd7, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 57, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 236, .box_w = 15, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 90, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 144, .adv_w = 142, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 186, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 240, .adv_w = 142, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 288, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 142, .box_w = 9, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 142, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x5
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 6, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 2, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 10, .glyph_id_start = 3,
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
const lv_font_t lv_customer_font_NSHRegular_16 = {
#else
lv_font_t lv_customer_font_NSHRegular_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 12,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if LV_CUSTOMER_FONT_NSHREGULAR_16*/

