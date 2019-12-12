#include <Adafruit_NeoPixel.h>

#define PIN 3  // input pin Neopixel is attached to

#define NUMPIXELS      38 // number of neopixels in strip

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
  void red1()
  {
    for (int i = 0; i < 38; i++) {
      strip.setPixelColor(i, 255, 0, 0);
      strip.show();
    }
  }
  void green1()
  {
    for(int i=0; i<38; i++){
      strip.setPixelColor(i,0,255,0);
      strip.show();
    }
  }

  
  void alt()
  {
    for(int i=0; i<38; i+=3)
    {
     strip.setPixelColor(i,255,0,0);
     strip.setPixelColor(i+1,0,255,0);
     strip.setPixelColor(i+2,255,255,255);
     strip.show();
    }
  }
    void alt2()
  {
    for(int i=0; i<38; i++)
    {
     strip.setPixelColor(i,255,0,0);
     strip.show();
    }
    for(int i=0; i<38; i=i+2)
    {
    strip.setPixelColor(i,0,255,0);
    strip.show();
    }
    for(int i=0; i<38; i=i+3)
    {
      strip.setPixelColor(i,255,255,255);
      strip.show();
    }
    delay(200);
        for(int i=0; i<38; i++)
    {
     strip.setPixelColor(i,255,0,0);
     strip.show();
    }
    for(int i=1; i<38; i=i+2)
    {
    strip.setPixelColor(i,0,255,0);
    strip.show();
    }
    for(int i=1; i<38; i=i+3)
    {
      strip.setPixelColor(i,225,225,255);
      strip.show();
    }
    delay(200);
   
    }
void setup() {
  // Initialize the NeoPixel library.
  strip.clear();
  strip.begin();
 
}


void loop() {
  // put your main code here, to run repeatedly:
for(int i=0;i<10;i++)
{
red1();
delay(500);
green1();
delay(500);

}
for(int i=0;i<1;i++)
{
  alt();
  delay(500);
}
for(int i=0; i<20; i++)
{
  alt2();
}
}
