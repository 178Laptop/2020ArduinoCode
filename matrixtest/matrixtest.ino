#include <Adafruit_GFX.h>
#include <Adafruit_SPITFT.h>
#include <Adafruit_SPITFT_Macros.h>
#include <gfxfont.h>

#include <Adafruit_NeoMatrix.h>
#include <gamma.h>

#include <Adafruit_NeoPixel.h>

#define PIN 5  // input pin Neopixel is attached to

#define NUMPIXELS      38 // number of neopixels in strip

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_NeoMatrix matrix = Adafruit_NeoMatrix(16, 16, PIN,
  NEO_MATRIX_TOP + NEO_MATRIX_LEFT +
  NEO_MATRIX_ROWS + NEO_MATRIX_PROGRESSIVE,
  NEO_GRB            + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  strip.clear();
  strip.begin();
  matrix.clear();
  matrix.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  matrix.drawPixel(0,0,matrix.Color(255,0,0));
  matrix.drawPixel(0,1,matrix.Color(255,0,0));
  matrix.drawPixel(0,2,matrix.Color(255,0,0));
  matrix.show();
}
