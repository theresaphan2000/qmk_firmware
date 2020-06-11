/* Copyright 2020 theresaphan2000
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

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    mac1 = SAFE_RANGE,
    mac2,mac3,mac4,mac5,mac6,mac7,mac8
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */
    [_BASE] = LAYOUT(
        mac1,   mac2, MO(_FN),
        mac3,   mac4, mac5,
        mac6,   mac7, mac8 
    ),
    [_FN] = LAYOUT(
        XXXXXXX, XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX,
        XXXXXXX,XXXXXXX,XXXXXXX
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case mac1:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("Hello World");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case mac2:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("Goodbye World");
            } else {
                // when keycode QMKURL is released
            }
            break;
            case mac3:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("git add *");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case mac4:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("git commit");
            } else {
                // when keycode QMKURL is released
            }
            break;
        case mac5:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("git push origin master");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case mac6:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("Finals are almost done!");
            } else {
                // when keycode QMKURL is released
            }
            break;
        case mac7:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("Stay safe!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case mac8:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("More homework? Oh no...");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
