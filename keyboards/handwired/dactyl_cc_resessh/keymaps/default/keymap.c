// Copyright 2022 mjohns
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layers {
    BASE,
    NAV
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                             KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                             KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                             KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                 KC_LPRN, KC_LBRC, KC_MINS,                                                                     KC_EQL,  KC_RBRC, KC_RPRN,
                                                                       MO(NAV),      KC_MPLY,
                                            KC_LALT, KC_LCMD, KC_SPC,  KC_DEL,       KC_BSPC, KC_ENT,  KC_RCMD, MO(NAV)
    ),
    [NAV] = LAYOUT(
        _______,  KC_F1,    KC_F2,   KC_F3,   KC_F4,   KC_F5,                                           KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
        _______,  _______,  _______, _______, _______, _______,                                         _______, KC_KP_7, KC_KP_8, KC_KP_9, _______, KC_F12,
        _______,  _______,  _______, _______, _______, _______,                                         _______, KC_KP_4, KC_KP_5, KC_KP_6, _______, _______,
        _______,  _______,  _______, _______, _______, _______,                                         _______, KC_KP_1, KC_KP_2, KC_KP_3, _______, _______,
                  _______,  _______, _______,                                                                             KC_KP_0, _______, _______,
                                                                       _______,      _______,
                                            _______, _______, _______, _______,      _______, _______,  _______, _______
    ),
};
