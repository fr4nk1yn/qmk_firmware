// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Tap Dance declarations
enum {
    TD_R_1,
    TD_F_2,
	//TD_LCTL_MO,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [TD_R_1] = ACTION_TAP_DANCE_DOUBLE(KC_R, KC_1),
    [TD_F_2] = ACTION_TAP_DANCE_DOUBLE(KC_F, KC_2),
	//[TD_LCTL_MO] = ACTION_TAP_DANCE_LAYER_MOVE(KC_LCTL, 1),
};

#define TAPPING_TERM 100


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┌───┬───┬───┐
     *     │ Q │ X │ E │───┐
     * ┌───┼───┼───┼───│ R │
     * │Sft│ A │ W │ D ├───┤
     * ├───┼───┼───┼───│ F │
     * │Ctl│ Z │ S │ C ├───┘
     * └───┼───┼───┼───┼───┬───┐
     *     │Esc│Tab│ V │Spc│ B │
     *     └───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
                 KC_Q,    KC_X,    KC_E,    TD(TD_R_1),
        KC_LSFT, KC_A,    KC_W,    KC_D,    TD(TD_F_2),
        KC_LCTL, KC_Z,    KC_S,    KC_C,
                 KC_ESC, KC_TAB, KC_V, KC_SPC,  KC_B
    )
};
