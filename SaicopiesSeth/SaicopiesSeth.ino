#include <Adafruit_NeoPixel.h>


#define PIN 3
Adafruit_NeoPixel strip = Adafruit_NeoPixel(38, PIN, NEO_GRB + NEO_KHZ800);

int (enforcersColor1) = 0;

int (enforcersColor2) = 1; 

void enforcersColorsFlashing ()

{
  strip.setPixelColor (enforcersColor1, 255,0,0); //Orange
  strip.setPixelColor (enforcersColor2, 255, 94, 0); //Orange
  strip.show();
  delay(1000);

  strip.setPixelColor (enforcersColor1, 0,0,0);
  strip.setPixelColor (enforcersColor2, 0,0,0);

  enforcersColor1++;
  enforcersColor2++;

  if (enforcersColor1 == 38) {
    enforcersColor1 = 0;
  }
  if (enforcersColor2 == 38) {
    enforcersColor2 = 0;
    
  }
  
}
 void setup(){
  strip.begin();
  strip.show();
   
  
 }
void loop() {
  // put your main code here, to run repeatedly:
  enforcersColorsFlashing();


}
