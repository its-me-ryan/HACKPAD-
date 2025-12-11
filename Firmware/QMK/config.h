#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    Ryan
#define PRODUCT         Hackpad

/* Matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 2

/* ---- PIN MAPPING (CONFIRMED A) ----
   ROW0 = GP26
   ROW1 = GP27
   ROW2 = GP28
   ROW3 = GP0
   COL0 = GP29
   COL1 = GP6
   ENC1 = (GP0,GP1)
   ENC2 = (GP2,GP3)
   LED_DATA = GP3
*/
#define MATRIX_ROW_PINS { GP26, GP27, GP28, GP0 }
#define MATRIX_COL_PINS { GP29, GP6 }

/* Diode direction */
#define DIODE_DIRECTION COL2ROW

/* Encoders: two encoders (index 0 and 1) */
#define ENCODERS_PAD_A { GP0, GP2 }
#define ENCODERS_PAD_B { GP1, GP3 }
#define ENCODER_RESOLUTIONS { 4, 4 }

/* SK6812 / WS2812 data pin and LEDs */
#define RGB_DI_PIN GP3
#define RGBLED_NUM 10

/* RP2040 UF2 bootloader define */
#define RP2040_BOOTLOADER_UF2

/* Limit RGB brightness */
#define RGBLIGHT_LIMIT_VAL 120
