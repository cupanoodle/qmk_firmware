/* Copyright 2023 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

// clang-format off
enum layers{
  _BASE,
  _GAME,
  _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_109_ansi(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MPLY,    KC_PSCR,  KC_NO,    RGB_MOD,  _______,  _______,  _______,  _______,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,    KC_PPLS,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,              KC_UP,              KC_P1,    KC_P2,    KC_P3,    KC_PENT,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(_FN),    KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT         ),
    [_GAME] = LAYOUT_109_ansi(   
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                  _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,  _______,
        _______,  KC_NO,    _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______         ),
    [_FN] = LAYOUT_109_ansi(   
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    RGB_TOG,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                  _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  _______,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______         ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][1][2] = {
    [_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_GAME] = {ENCODER_CCW_CW(_______, _______) },
    [_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif // ENCODER_MAP_ENABLE

// https://docs.qmk.fm/#/feature_dip_switch?id=callbacks
bool dip_switch_update_mask_user(uint32_t state) {
    if (state) {
        default_layer_set(1UL << _BASE);
    }
    else {
        default_layer_set(1UL << _GAME);
    }

    return true;
}

void keyboard_post_init_user(void) {
    rgblight_sethsv(HSV_PURPLE);
    rgblight_mode(19); //solid_reactive_multiwide
    rgblight_set_speed(22);
}