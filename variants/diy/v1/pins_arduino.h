#ifndef PINS_ARDUINO_H
#define PINS_ARDUINO_H

#include <stdint.h>

// I2C: 传感器、屏幕、摇杆 (原理图确认)
static const uint8_t SDA = 0; 
static const uint8_t SCL = 1; 

// SPI: LoRa 模块 (基于之前成功的逆向数据)
static const uint8_t SCK  = 4; 
static const uint8_t MISO = 5; 
static const uint8_t MOSI = 6; 
static const uint8_t SS   = 7; 

// LoRa 控制引脚
#define LORA_DIO1 1   
#define LORA_BUSY 10  
#define LORA_RST  11  // 对应熔断 eFuse 的引脚

// 电池检测: 分压电路接在 GPIO 2
#define BATTERY_PIN 2            
#define ADC_CHANNEL ADC1_CHANNEL_2
#define ADC_MULTIPLIER 2.1       

// 摇杆与中断
#define BUTTON_PIN 9             

// LED 定义 (如果 PCB 上有 LED 连在 GPIO 8)
#ifndef LED_PIN
#define LED_PIN 8
#endif

#endif /* PINS_ARDUINO_H */ // 必须有这一行来结束文件
