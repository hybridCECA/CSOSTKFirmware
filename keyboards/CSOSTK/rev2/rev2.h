#pragma once

#include "CSOSTK.h"
#include "quantum.h"

#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
    #include <avr/io.h>
    #include <avr/interrupt.h>
#endif
#endif

#define LAYOUT_88( \
  L00, L01, L02, L03, L04, L05, R00, R01, R02, R03, R04, R05, R06, R07, R08, R09, \
  L10, L11, L12, L13, L14, L15, R10, R11, R12, R13, R14, R15, R16, R17, R18, R19, \
  L20, L21, L22, L23, L24, L25, R20, R21, R22, R23, R24, R25, R26, R27, R28, R29, \
  L30, L31, L32, L33, L34, L35, R30, R31, R32, R33, R34, R35,      R37, R38, R39, \
  L40, L41, L42, L43, L44, L45, R40, R41, R42, R43, R44,      R46,      R48,      \
  L50,      L52, L53,      L55,      R51,      R53, R54, R55, R56, R57, R58, R59 \
  ) \
  { \
	{ L00,   L01,   L02,   L03,   L04,   L05,   KC_NO, KC_NO, KC_NO, KC_NO  }, \
        { L10,   L11,   L12,   L13,   L14,   L15,   KC_NO, KC_NO, KC_NO, KC_NO  }, \
        { L20,   L21,   L22,   L23,   L24,   L25,   KC_NO, KC_NO, KC_NO, KC_NO  }, \
        { L30,   L31,   L32,   L33,   L34,   L35,   KC_NO, KC_NO, KC_NO, KC_NO  }, \
        { L40,   L41,   L42,   L43,   L44,   L45,   KC_NO, KC_NO, KC_NO, KC_NO  }, \
        { L50,   KC_NO, L52,   L53,   KC_NO, L55,   KC_NO, KC_NO, KC_NO, KC_NO  }, \
        { R00,   R01,   R02,   R03,   R04,   R05,   R06,   R07,   R08,   R09    }, \
        { R10,   R11,   R12,   R13,   R14,   R15,   R16,   R17,   R18,   R19    }, \
        { R20,   R21,   R22,   R23,   R24,   R25,   R26,   R27,   R28,   R29    }, \
        { R30,   R31,   R32,   R33,   R34,   R35,   KC_NO, R37,   R38,   R39    }, \
        { R40,   R41,   R42,   R43,   R44,   KC_NO, R46,   KC_NO, R48,   KC_NO, }, \
        { KC_NO, R51,   KC_NO, R53,   R54,   R55,   R56,   R57,   R58,   R59    } \
  }

#define LAYOUT LAYOUT_88
