#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_martin_3x3(
      KC_KB_VOLUME_UP, KC_B, KC_C, TO(2),
      KC_D, KC_E, KC_F, KC_G,
      KC_H, KC_I, 
    ),

    [1] = LAYOUT_martin_3x3(
      KC_A, KC_B, KC_C, TO(2),
      KC_D, KC_E, KC_F, KC_G,
      KC_H, KC_I, 
    ),

    [2] = LAYOUT_martin_3x3(
      KC_KP_1, KC_KP_2, KC_KP_3, TO(3),
      KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_7,
      KC_KP_8, KC_KP_9, 
    ),

    [3] = LAYOUT_martin_3x3(
      KC_1, KC_2, KC_3, TO(1),
      KC_4, KC_5, KC_6, KC_7,
      KC_8, QK_BOOT, 
    ),

   

};
