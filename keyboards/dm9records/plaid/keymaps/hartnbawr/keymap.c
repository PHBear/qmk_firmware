/* Copyright 2019 Takuya Urakawa (dm9records.com)
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


enum plaid_layers {
  _BASE,
  _LOWER,
  _RAISE,
};


#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_ortho_4x12(
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_ESCAPE,      KC_W,           KC_F,           KC_P,           KC_B,         KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,    KC_J,       KC_L,           KC_U,           KC_Y,           KC_BSPC,
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_Q,           LCTL_T(KC_R),   LALT_T(KC_S),   LGUI_T(KC_T),   KC_G,           KC_MEDIA_STOP,  KC_NO,          KC_M,           RGUI_T(KC_N),   RALT_T(KC_E),   RCTL_T(KC_I),   KC_NO,
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        LSFT_T(KC_A),   KC_X,           KC_C,           KC_D,           KC_V,         KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK, KC_K,    KC_H,           KC_COMMA,       KC_DOT,         RSFT_T(KC_O),
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_Z,           KC_NO,          KC_TAB,         RAISE,          KC_SPC,         KC_NO,         KC_NO,        KC_SPC,         LOWER,          KC_CAPS_LOCK,      KC_NO,          KC_NO
),

[_LOWER] = LAYOUT_ortho_4x12(
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_NO,          KC_SLSH,        KC_LPRN,        KC_RPRN,        KC_BSLS,         KC_NO,           KC_NO,        KC_QUOT,        KC_1,           KC_2,           KC_3,           KC_SCLN,
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_LSFT,        KC_LCTL,        KC_LALT,        KC_LGUI,        KC_NO,           KC_NO,           KC_NO,        KC_MINS,        KC_4,           KC_5,           KC_6,           KC_EQL,
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_NO,          KC_LT,          KC_LBRC,        KC_RBRC,        KC_GT,           KC_NO,           KC_NO,        KC_GRV,         KC_7,           KC_8,           KC_9,           KC_0,
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_NO,          KC_TRNS,        KC_NO,          KC_NO
),

[_RAISE] = LAYOUT_ortho_4x12(
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_NO,          KC_NO,          KC_BTN1,        KC_BTN2,        RGB_TOG,       KC_NO,          KC_NO,          KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         KC_NO,
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_LSFT,        KC_LCTL,        KC_LALT,        KC_LGUI,        KC_DEL,        KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        KC_BSPC,
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        RGB_MOD,        RGB_SPD,        RGB_SPI,        RGB_VAI,        RGB_VAD,       KC_NO,          KC_NO,          KC_ENT,         KC_TAB,         KC_NO,          KC_NO,          KC_ENT,
// ||---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------|---------------||
        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRNS,       KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_NO,           KC_TRNS,        KC_NO,          KC_NO
)
};

void keyboard_post_init_user(void) {
  //writePinHigh(LED_RED);
  writePinHigh(LED_GREEN);
}


