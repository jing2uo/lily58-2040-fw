#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 10
#define VIAL_COMBO_ENTRIES 20
#define VIAL_KEY_OVERRIDE_ENTRIES 20
#define VIAL_TAP_DANCE_ENTRIES 20
#define DYNAMIC_KEYMAP_MACRO_COUNT 50

#define USB_VBUS_PIN 19
#define USE_SERIAL
#define SERIAL_PIO_USE_PIO0
#define SERIAL_USART_TX_PIN GP1

#define EE_HANDS
/* Reset. */
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U