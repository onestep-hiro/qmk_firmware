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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

    [_LOWER] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT,   MO(3), KC_RALT
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
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};

#ifdef CONSOLE_ENABLE
  #include <print.h>
#endif

void keyboard_post_init_user(void) {
  debug_enable = true;
  debug_matrix = true;
  debug_mouse  = true;
}

//ここからポインティングデバイス

// #ifdef Flase
// // #ifdef MASTER_LEFT

// // Set Parameters
// uint16_t minAxisValue = 190;  // Depends on each stick
// uint16_t maxAxisValue = 840;

// uint8_t maxCursorSpeed = 10;
// uint8_t maxScrollSpeed = 1;
// uint8_t speedRegulator = 50;  // Lower Values Create Faster Movement

// int8_t xPolarity = -1;
// int8_t yPolarity = 1;
// int8_t hPolarity = 1;
// int8_t vPolarity = 1;

// uint8_t cursorTimeout = 10;
// uint8_t scrollTimeout = 100;

// int16_t xOrigin, yOrigin;

// uint16_t lastCursor = 0;

// int16_t axisCoordinate(uint8_t pin, uint16_t origin) {
//     int8_t  direction;
//     int16_t distanceFromOrigin;
//     int16_t range;

//     int16_t position = analogReadPin(pin);

//     if (origin == position) {
//         return 0;
//     } else if (origin > position) {
//         distanceFromOrigin = origin - position;
//         range              = origin - minAxisValue;
//         direction          = -1;
//     } else {
//         distanceFromOrigin = position - origin;
//         range              = maxAxisValue - origin;
//         direction          = 1;
//     }

//     float   percent    = (float)distanceFromOrigin  / range;
//     int16_t coordinate = (int16_t)(percent * 127);
//     if (coordinate < 0) {
//         return 0;
//     } else if (coordinate > 127) {
//         return 127 * direction;
//     } else {
//         return coordinate * direction;
//     }
// }

// int8_t axisToMouseComponent(uint8_t pin, int16_t origin, uint8_t maxSpeed, int8_t polarity) {
//     int coordinate = axisCoordinate(pin, origin);
//     if (coordinate == 0) {
//         return 0;
//     } else {
//         float percent = (float)coordinate / 127;
//         return percent * maxSpeed * polarity * (abs(coordinate) / speedRegulator);
//     }
// }

// #define is_master true

// // ポインティングデバイスの処理
// void pointing_device_task(void) {
//     uprintf("task is_master:%s",is_master);
//     if (is_master == true){
//         uprintf("task xOrigin:%s",xOrigin);
//         uprintf("task yOrigin:%s",yOrigin);
//         report_mouse_t report = pointing_device_get_report();
//         // Layer1: Scroll
//         if(layer_state_is(_LOWER)) {
//             if (timer_elapsed(lastCursor) > scrollTimeout) {
//                 lastCursor = timer_read();
//                 report.h   = axisToMouseComponent(B4, xOrigin, maxCursorSpeed, hPolarity);
//                 report.v   = axisToMouseComponent(B5, yOrigin, maxCursorSpeed, vPolarity);
//             }
//         // Layer0: Cursor
//         } else {
//             if (timer_elapsed(lastCursor) > cursorTimeout) {
//                 lastCursor = timer_read();
//                 report.x   = axisToMouseComponent(B4, xOrigin, maxCursorSpeed, xPolarity);
//                 report.y   = axisToMouseComponent(B5, yOrigin, maxCursorSpeed, yPolarity);
//             }
//         }

//         pointing_device_set_report(report);
//     }
//     return pointing_device_send();
// }

// // ポインティングデバイスの原点を初期化する
// void matrix_init_user(void) {
//     uprintf("user is_master :%s",is_master);
//     if (is_master == true){
//         // xOrigin = analogReadPin(B4) * 20;
//         // yOrigin = analogReadPin(B5);
//         uprintf("user xOrigin%s:",xOrigin);
//         uprintf("user yOrigin%s:",yOrigin);
//     }else{
//         xOrigin = 0;
//         yOrigin = 0;
//     }
// }
// #endif

#ifdef MASTER_RIGHT

#define set_scrolling false
#define ANGLE_UNIT 15
#define ANGLE_MAX (360 / ANGLE_UNIT)
uint8_t angle = 0;

report_mouse_t pointing_device_task_kb(report_mouse_t mouse_report) {
    double rad     = ANGLE_UNIT * angle * (M_PI / 180);
    int8_t x_rev   = +mouse_report.x * cos(rad) - mouse_report.y * sin(rad);
    int8_t y_rev   = +mouse_report.x * sin(rad) + mouse_report.y * cos(rad);
    mouse_report.x = x_rev;
    mouse_report.y = y_rev;
    return pointing_device_task_user(mouse_report);
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    uprintf("user pointing_device_task_user %s",mouse_report.x);
    if (layer_state_is(_LOWER)) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}
#endif