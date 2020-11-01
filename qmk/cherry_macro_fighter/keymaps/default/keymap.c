#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_default(
		DF(1), KC_VOLU, _______,
		KC_MPRV, KC_MPLY, KC_MNXT,
		_______, KC_VOLD, KC_MUTE 
    ),
	[1] = LAYOUT_default(
		DF(0), KC_F13, KC_F14,
		KC_F15, KC_F16, KC_F17,
		KC_F18, KC_F19, KC_F20 
    )
};
