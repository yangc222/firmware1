#ifndef _VARIANT_ESP32C3_DIY_
#define _VARIANT_ESP32C3_DIY_

// ----------------------------------------------------------------
// 硬件定义：TinyLoRa-C3 (16MB Flash)
// ----------------------------------------------------------------

/* 1. LoRa 射频模组 (Ra-01SC / LLCC68) */
#define USE_SX1262
#define LORA_SCK    10
#define LORA_MISO   6
#define LORA_MOSI   7
#define LORA_NSS    8
#define LORA_DIO1   3
#define LORA_RESET  5
#define LORA_BUSY   4
#define SX126X_DIO2_AS_RF_SWITCH

/* 2. I2C 总线 & 屏幕 (SSD1306) */
#undef SDA
#undef SCL
#define SDA 2
#define SCL 1
#define USE_SSD1306
#define HAS_SCREEN 1

/* 3. 电池电压检测 */
#define BATTERY_PIN 0
#define ADC_MULTIPLIER 3.0

/* 4. 按键 & 其他 */
#define BUTTON_PIN 9 
#define LED_PIN -1

#endif
