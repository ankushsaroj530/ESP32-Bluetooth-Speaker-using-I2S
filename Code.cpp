## Arduino Code


#include "AudioTools.h"
#include "BluetoothA2DPSink.h"

I2SStream i2s;
BluetoothA2DPSink a2dp_sink(i2s);

void setup() {

  Serial.begin(115200);

  auto cfg = i2s.defaultConfig();
  cfg.pin_bck = 26;      // Bit Clock
  cfg.pin_ws = 25;       // Left Right Clock
  cfg.pin_data = 22;     // Data
  cfg.sample_rate = 44100;

  i2s.begin(cfg);

  a2dp_sink.start("ESP32 Speaker");

  Serial.println("Bluetooth Speaker Started");
}

void loop() {
}
