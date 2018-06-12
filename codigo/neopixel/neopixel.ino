#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      10

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN);

void setup() {
  pixels.begin(); 
}

void loop() {
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 50, 0));
    pixels.show(); 
    delay(500);
  }
  pixels.clear();
  pixels.show();
}
