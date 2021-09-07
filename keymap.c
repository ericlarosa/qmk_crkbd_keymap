#include QMK_KEYBOARD_H

// ALIASES
#define E_LSA_TAB LSA_T(KC_TAB)
#define E_LT4_ESC LT(4, KC_ESC)
#define E_C_COL LCTL_T(KC_SCOLON)
#define E_S_QUO LSFT_T(KC_QUOTE)
#define E_GUI1 LGUI(KC_1)
#define E_GUI2 LGUI(KC_2)
#define E_GUI3 LGUI(KC_3)
#define E_GUI4 LGUI(KC_4)
#define E_A_SPC LALT(KC_SPACE)
#define E_GUI_V LGUI(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.       0  BASE      ,-----------------------------------------------------.
      E_LSA_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      E_LT4_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, E_C_COL,  KC_ENT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, E_S_QUO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI,   MO(1),  KC_SPC,  E_LT4_ESC,   MO(2), KC_RALT
                                        //`--------------------------'  `--------------------------'
  ),
  [1] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.       1 LOWER      ,-----------------------------------------------------.
       KC_GRAVE,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      E_LT4_ESC,  E_GUI1,  E_GUI2,  E_GUI3, E_A_SPC,   KC_NO,                        KC_NO, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI, KC_TRNS,  KC_SPC,  E_LT4_ESC,   MO(3), KC_RALT
                                        //`--------------------------'  `--------------------------'
  ),
  [2] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.       2 RAISE      ,-----------------------------------------------------.
        KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      E_LT4_ESC,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        KC_LSFT,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI,   MO(3),  KC_SPC,  E_LT4_ESC, KC_TRNS, KC_RALT
                                        //`--------------------------'  `--------------------------'
  ),
  [3] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.       3 ADJUST     ,-----------------------------------------------------.
          RESET,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI, KC_TRNS,  KC_SPC,  E_LT4_ESC,  KC_TRNS, KC_RALT
                                        //`--------------------------'  `--------------------------'
  ),
  [4] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.       4 VI-NORMAL  ,-----------------------------------------------------.
          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO, E_GUI_V,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                      KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,                        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI,   KC_NO,   KC_NO,  E_LT4_ESC,   KC_NO,   KC_NO
                                        //`--------------------------'  `--------------------------'
  )
};

#ifdef OLED_DRIVER_ENABLE
#include <stdio.h>

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

void oled_task_user(void) {
	oled_render_logo();
}
#endif // OLED_DRIVER_ENABLE
