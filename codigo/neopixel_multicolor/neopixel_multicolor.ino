#include <Adafruit_NeoPixel.h>

#define PIN            6
#define NUMPIXELS      10

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN);

void setup() {
  pixels.begin(); 
}

void loop() {
  for (int i = 0; i < NUMPIXELS; i++) { 
    int rojo = random(0, 100);
    int verde = random(0, 100);
    int azul = random(0, 100);
    pixels.setPixelColor(i, pixels.Color(rojo, verde, azul));
    pixels.show(); 
    delay(500);
  }
}
