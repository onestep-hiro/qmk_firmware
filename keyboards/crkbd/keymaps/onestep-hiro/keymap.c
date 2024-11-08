/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#define _QWERTY 0
#define _LOWER 1
#define _RAISE 2
#define _ADJUST 3
#define _OTHER 4

#define SPC_MO1 LT(1, KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_ESC,  KC_LGUI, SPC_MO1,     KC_SPC,   MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [_LOWER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        MO(3), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          XXXXXXX, XXXXXXX, _______,    XXXXXXX,   MO(3), KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_RAISE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(3),  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

    [_ADJUST] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX,KC_MS_BTN1,KC_MS_BTN2, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

      [_OTHER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

//ここから右側端末の ポインティングデバイス
#ifdef POINTING_DEVICE_ENABLE
#ifdef MASTER_RIGHT

#define ANGLE_UNIT 15
uint8_t angle = 0;
#define SCROLL_THRESHOLD 50
int cnt_mouse_y = 0;
int cnt_mouse_x = 0;


typedef union {
    uint32_t raw;
    struct {
        uint8_t cpi_idx;
        uint8_t scrl_div;
        uint8_t rotation_angle;
        int8_t scrl_inv;
        bool scrl_mode;
        report_mouse_t last_mouse;
    };
} cocot_config_t;

extern cocot_config_t cocot_config;

// Invert vertical scroll direction
#ifndef COCOT_SCROLL_INV_DEFAULT
#    define COCOT_SCROLL_INV_DEFAULT 1
#endif

#ifndef COCOT_CPI_OPTIONS
#    define COCOT_CPI_OPTIONS { 250, 500, 750, 1000, 1250 }
#endif
#ifndef COCOT_CPI_DEFAULT
#    define COCOT_CPI_DEFAULT 4
#endif

#ifndef COCOT_SCROLL_DIVIDERS
#    define COCOT_SCROLL_DIVIDERS { 1, 2, 3, 4, 5, 6 }
#endif
#ifndef COCOT_SCROLL_DIV_DEFAULT
#    define COCOT_SCROLL_DIV_DEFAULT 4
#endif


#ifndef COCOT_ROTATION_ANGLE
#    define COCOT_ROTATION_ANGLE { -60, -45, -30, -15, 0, 15, 30, 45, 60 }
#endif
#ifndef COCOT_ROTATION_DEFAULT
#    define COCOT_ROTATION_DEFAULT 2
#endif


// cocot_config構造体のインスタンスを宣言
// cocot_config_t cocot_config;
// CPIオプションの配列を定義
uint16_t cpi_array[] = COCOT_CPI_OPTIONS;
// スクロール分割オプションの配列を定義
uint16_t scrl_div_array[] = COCOT_SCROLL_DIVIDERS;
// 回転角度オプションの配列を定義
uint16_t angle_array[] = COCOT_ROTATION_ANGLE;
// CPIオプションの配列サイズを計算
#define CPI_OPTION_SIZE (sizeof(cpi_array) / sizeof(uint16_t))
// スクロール分割オプションの配列サイズを計算
#define SCRL_DIV_SIZE (sizeof(scrl_div_array) / sizeof(uint16_t))
// 回転角度オプションの配列サイズを計算
#define ANGLE_SIZE (sizeof(angle_array) / sizeof(uint16_t))

// この関数はキーボードのEEPROM設定を初期化します。
// cocot_config構造体の各フィールドをデフォルト値に設定し、
// その後、設定をEEPROMに書き込みます。
// 最後に、ユーザー定義の初期化関数を呼び出します。
// void eeconfig_init_kb(void) {
//     cocot_config.cpi_idx = COCOT_CPI_DEFAULT;
//     cocot_config.scrl_div = COCOT_SCROLL_DIV_DEFAULT;
//     cocot_config.rotation_angle = COCOT_ROTATION_DEFAULT;
//     cocot_config.scrl_inv = COCOT_SCROLL_INV_DEFAULT;
//     cocot_config.scrl_mode = false;
//     eeconfig_update_kb(cocot_config.raw);
//     eeconfig_init_user();
//     adns5050_write_reg(0x22, 0b10000 | 0x80);
// }

report_mouse_t pointing_device_task_kb(report_mouse_t mouse_report) {
    // // CPIを設定する
    // pointing_device_set_cpi(cpi_array[4]);
    // ADNS5050のレジスタに書き込む
    adns5050_write_reg(0x22, 0b10000 | 0x80);

    double speed_adjustment = 0.7;
    // MO(1)の時は高速モード
    if (layer_state_is(_LOWER)) {
        speed_adjustment = 3.5;
    }

    double rad = ANGLE_UNIT * angle * (M_PI / 180);

    // Mo(3)の時はスクロール
    if (layer_state_is(_ADJUST)) {
        // 縦スクロール
        cnt_mouse_y += mouse_report.y;
        int scrolling_y = 0;

        if (cnt_mouse_y > SCROLL_THRESHOLD) {
            scrolling_y = 1;
            cnt_mouse_y = 0;
        } else if (cnt_mouse_y < SCROLL_THRESHOLD * (-1)) {
            scrolling_y = -1;
            cnt_mouse_y = 0;
        }
        // 横スクロール
        cnt_mouse_x += mouse_report.x;
        int scrolling_x = 0;

        if (cnt_mouse_x > SCROLL_THRESHOLD) {
            scrolling_x = -1;
            cnt_mouse_x = 0;
        } else if (cnt_mouse_x < SCROLL_THRESHOLD * (-1)) {
            scrolling_x = 1;
            cnt_mouse_x = 0;
        }
        mouse_report.h = scrolling_x;
        mouse_report.v = scrolling_y;
        mouse_report.x = 0;
        mouse_report.y = 0;

    }else{
        int8_t x_rev   = +mouse_report.x * cos(rad) - mouse_report.y * sin(rad);
        int8_t y_rev   = +mouse_report.x * sin(rad) + mouse_report.y * cos(rad);
        mouse_report.x = x_rev * speed_adjustment;
        mouse_report.y = y_rev * speed_adjustment;
    }
    return pointing_device_task_user(mouse_report);
}
#endif
#endif