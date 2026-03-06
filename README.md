# ESP32 Bluetooth Speaker using A2DP and I2S

This project demonstrates how to build a **Wireless Bluetooth Speaker using ESP32**.  
The ESP32 receives audio through **Bluetooth A2DP** and outputs digital audio using the **I2S interface** to an audio amplifier.

This is a simple and powerful **Embedded Systems + IoT project** useful for learning **Bluetooth audio streaming with ESP32**.


##  Features

- Bluetooth audio streaming from mobile or laptop
- High quality digital audio using I2S
- Simple ESP32 implementation
- Compatible with Android, iOS and PC
- Low-cost DIY Bluetooth speaker


##  Hardware Required

| Component | Quantity |
|----------|----------|
| ESP32 Development Board | 1 |
| MAX98357A I2S Audio Amplifier | 1 |
| Speaker (4Ω or 8Ω) | 1 |
| Jumper Wires | Few |
| Breadboard | Optional |


##  Circuit Connections

| ESP32 Pin | I2S Amplifier Pin | Description |
|-----------|-------------------|-------------|
| GPIO26 | BCLK | Bit Clock |
| GPIO25 | LRC / WS | Word Select |
| GPIO22 | DIN | Data Input |
| 5V | VCC | Power |
| GND | GND | Ground |

##  Required Libraries

Install the following libraries in **Arduino IDE**:

### 1. ESP32 A2DP Library

https://github.com/pschatzmann/ESP32-A2DP

### 2. Arduino Audio Tools

https://github.com/pschatzmann/arduino-audio-tools
