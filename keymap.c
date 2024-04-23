#include QMK_KEYBOARD_H
#include "ergohaven.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        [_BASE] = LAYOUT( \
       KC_ESC,     KC_1,    KC_2,    KC_3,   KC_4,  KC_5,     KC_6,  KC_7,  KC_8,    KC_9,   KC_0,     KC_RBRC,
       KC_TAB,     KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,     KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,     KC_LBRC,
       KC_LCTL,    KC_A,    KC_S,    KC_D,   KC_F,  KC_G,     KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOTE,
       KC_LSFT,    KC_Z,    KC_X,    KC_C,   KC_V,  KC_B,     KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,

           _______,  _______,  KC_LSFT, KC_LCTL, KC_LGUI,   KC_DEL,  KC_ENT,  KC_SPC,   _______,  _______,
                                     KC_LALT, MO(1),       KC_BSPC,  KC_ESC
        ),

        [_LOWER] = LAYOUT( \
       KC_ESC,     KC_1,    KC_2,    KC_3,   KC_4,  KC_5,     KC_6,  KC_7,  KC_8,    KC_9,   KC_0,     KC_RBRC,
       KC_TAB,     KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,     KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,     KC_LBRC,
       KC_LCTL,    KC_A,    KC_S,    KC_D,   KC_F,  KC_G,     KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOTE,
       KC_LSFT,    KC_Z,    KC_X,    KC_C,   KC_V,  KC_B,     KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,

           _______,  _______,  KC_LSFT, KC_LCTL, KC_LGUI,   KC_DEL,  KC_ENT,  KC_SPC,   _______,  _______,
                                     KC_LALT, MO(1),       KC_BSPC,  KC_ESC
        ),

        [_RAISE] = LAYOUT( \
       KC_ESC,     KC_1,    KC_2,    KC_3,   KC_4,  KC_5,     KC_6,  KC_7,  KC_8,    KC_9,   KC_0,     KC_RBRC,
       KC_TAB,     KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,     KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,     KC_LBRC,
       KC_LCTL,    KC_A,    KC_S,    KC_D,   KC_F,  KC_G,     KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOTE,
       KC_LSFT,    KC_Z,    KC_X,    KC_C,   KC_V,  KC_B,     KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,

           _______,  _______,  KC_LSFT, KC_LCTL, KC_LGUI,   KC_DEL,  KC_ENT,  KC_SPC,   _______,  _______,
                                     KC_LALT, MO(1),       KC_BSPC,  KC_ESC
        ),

      [_ADJUST] = LAYOUT( 
       KC_ESC,     KC_1,    KC_2,    KC_3,   KC_4,  KC_5,     KC_6,  KC_7,  KC_8,    KC_9,   KC_0,     KC_RBRC,
       KC_TAB,     KC_Q,    KC_W,    KC_E,   KC_R,  KC_T,     KC_Y,  KC_U,  KC_I,    KC_O,   KC_P,     KC_LBRC,
       KC_LCTL,    KC_A,    KC_S,    KC_D,   KC_F,  KC_G,     KC_H,  KC_J,  KC_K,    KC_L,   KC_SCLN, KC_QUOTE,
       KC_LSFT,    KC_Z,    KC_X,    KC_C,   KC_V,  KC_B,     KC_N,  KC_M,  KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,

           _______,  _______,  KC_LSFT, KC_LCTL, KC_LGUI,   KC_DEL,  KC_ENT,  KC_SPC,   _______,  _______,
                                     KC_LALT, MO(1),       KC_BSPC,  KC_ESC
       ),
};
