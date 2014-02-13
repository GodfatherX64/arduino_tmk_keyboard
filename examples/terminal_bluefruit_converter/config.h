#ifndef KEYBOARDFIRMWARE_CONFIG_H
#define KEYBOARDFIRMWARE_CONFIG_H 1

#define RESET_BUTTON_PIN 8
#define PAIR_LED_PIN 7
#define PAIR_BUTTON_PIN 6
#define OUTPUT_LED_PIN 5
#define KEY_LED_PIN 4
#define OUTPUT_LED_ON HIGH
#define OUTPUT_LED_OFF LOW
#define DEBUGGING_LED 13
#define DEBUGGING_LED_ON HIGH
#define DEBUGGING_LED_OFF LOW

#define DEBUG_ENABLE true

#define EXTRAKEY_ENABLE 1
#define MOUSEKEY_ENABLE 1

#define MATRIX_ROWS 17
#define MATRIX_COLS 8

#define PS2_CLOCK_PORT  PORTD
#define PS2_CLOCK_PIN   PIND
#define PS2_CLOCK_DDR   DDRD
#define PS2_CLOCK_BIT   1

#define PS2_DATA_PORT   PORTD
#define PS2_DATA_PIN    PIND
#define PS2_DATA_DDR    DDRD
#define PS2_DATA_BIT    0

#define PS2_USE_BUSYWAIT true

#ifndef PS2_MATRIX_HAS_GHOSTING
#define PS2_MATRIX_HAS_GHOSTING true
#endif

#endif
