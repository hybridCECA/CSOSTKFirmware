/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x1257
#define DEVICE_VER      0x0200
#define MANUFACTURER    hybridCECA
#define PRODUCT         CSOSTK
#define DESCRIPTION     Split 60/65 percent staggered keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 10

#define DIODE_DIRECTION COL2ROW
// wiring of each half
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B3 }
#define MATRIX_COL_PINS { D4, E6, B4, B5, B6, B2, E0, E1, E2, E3 }
#define MATRIX_ROW_PINS_RIGHT { D2, D1, D4, C6, D7, E6 }
#define MATRIX_COL_PINS_RIGHT { B5, B4, B6, B2, B3, B1, F7, F6, F5, F4 }

#define MASTER_LEFT

#define BACKLIGHT_LED_COUNT 2
#undef BACKLIGHT_PIN
#define BACKLIGHT_PINS { C6, D7 } // For left
/*#define BACKLIGHT_PINS { E4, E5 } // For right */

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
