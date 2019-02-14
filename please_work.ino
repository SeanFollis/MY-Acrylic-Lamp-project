 




#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>+++++++++++++++++++++++++++-+-*-
#endif


#define PIN            6

#define NUMPIXELS      16


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(8, 4, NEO_GRB + NEO_KHZ800);

int delayval = 5 ; // delay for half a second

void setup() {

#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  
  Serial.begin(9600);
  pixels.begin();
}

void loop() {


for (int i = 0; i < NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(0,255,0));

    
  pixels.show();

 delay(800);
    
  
}  for (int i = 0; i < NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(255,0,0));

pixels.show();
    delay(800);
}  for (int i = 0; i < NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(255,255,0));

pixels.show();
     delay(800);
  
}  for (int i = 0; i < NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(200,0,300));

pixels.show();
     delay(800);
  
}  for (int i = 0; i < NUMPIXELS; i++) {

    pixels.setPixelColor(i, pixels.Color(0,0,255));

pixels.show();
     delay(800);
  
}}


