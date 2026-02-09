#ifndef _VARIANT_ESP32C3_DIY_
#define _VARIANT_ESP32C3_DIY_

// ============================================================
// 硬件定义：TinyLoRa-C3 (GitHub 修复版)
// ============================================================

// 1. LoRa 射频模组
#define USE_SX1262
#define LORA_SCK    10
#define LORA_MISO   6
#define LORA_MOSI   7
#define LORA_NSS    8
#define LORA_DIO1   3
#define LORA_RESET  5
#define LORA_BUSY   4
#define SX126X_DIO2_AS_RF_SWITCH

// 2. I2C 总线 & 屏幕
#undef SDA
#undef SCL
#define SDA 2
#define SCL 1
#define USE_SSD1306
#define HAS_SCREEN 1

// 3. 电池电压检测 (修复红字报错的关键!)
#define BATTERY_PIN 0
#define ADC_MULTIPLIER 3.0
// 【新增】手动指定 ADC 通道，解决 "not declared" 错误
#define ADC_CHANNEL ADC1_CHANNEL_0

// 4. 按键 & LED (修复红字报错的关键!)
#define BUTTON_PIN 9 
// 【修改】改为 255 (禁用)，之前的 -1 会导致编译崩溃
#define LED_PIN 255 

#endif
