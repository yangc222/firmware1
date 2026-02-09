#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

// =========================================================
// 1. LoRa 射频模组 (专用名 + 通用名)
// =========================================================
#define USE_SX1262

// 原始定义 (根据原理图)
#define LORA_SCK    10
#define LORA_MISO   6
#define LORA_MOSI   7
#define LORA_CS     8
#define LORA_RST    5
#define LORA_DIO1   3
#define LORA_BUSY   4

// 【核心修复】这里是补全刚才报错缺失的“通用大名”
// 告诉标准 SPI 库：默认的 SCK/MISO/MOSI 是哪几个脚
#define SCK         LORA_SCK
#define MISO        LORA_MISO
#define MOSI        LORA_MOSI
#define SS          LORA_CS

// Meshtastic 官方库需要的马甲
#define SX126X_CS    LORA_CS
#define SX126X_RESET LORA_RST
#define SX126X_BUSY  LORA_BUSY
#define SX126X_DIO1  LORA_DIO1

// 射频开关
#define SX126X_DIO2_AS_RF_SWITCH

// =========================================================
// 2. 屏幕与 I2C
// =========================================================
#undef SDA
#undef SCL
#define SDA 2
#define SCL 1
#define USE_SSD1306
#define HAS_SCREEN 1

// =========================================================
// 3. 电池与 ADC
// =========================================================
#define BATTERY_PIN 0
#define ADC_MULTIPLIER 3.0
#define ADC_CHANNEL ADC1_CHANNEL_0

// =========================================================
// 4. 按键与 LED
// =========================================================
#define BUTTON_PIN 9

// 强制覆盖 LED 定义
#undef LED_BUILTIN
#define LED_BUILTIN 255
#define LED_PIN 255

#endif /* Pins_Arduino_h */
