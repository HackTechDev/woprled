
#include "Adafruit_NeoPixel.h"
#ifdef __AVR__
  #include <avr/power.h>
#endif

const int ledPin6 = 6;
const int ledPin7 = 7;
const int ledPin8 = 8;

#define PINLEDSTRIP2          2
#define PINLEDSTRIP3          3
#define PINLEDSTRIP4          4
#define PINLEDSTRIP5          5

#define NUM      10

// When we setup the NeoPixel library, we tell it how many ledStrip2, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel ledStrip2 = Adafruit_NeoPixel(NUM, PINLEDSTRIP2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledStrip3 = Adafruit_NeoPixel(NUM, PINLEDSTRIP3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledStrip4 = Adafruit_NeoPixel(NUM, PINLEDSTRIP4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel ledStrip5 = Adafruit_NeoPixel(NUM, PINLEDSTRIP5, NEO_GRB + NEO_KHZ800);



int delayval = 500;

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
#if defined (__AVR_ATtiny85__)
  if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
#endif
  // End of trinket special code

  pinMode(ledPin6, OUTPUT);
  digitalWrite(ledPin6, HIGH);

  pinMode(ledPin7, OUTPUT);
  digitalWrite(ledPin7, HIGH);

  pinMode(ledPin8, OUTPUT);
  digitalWrite(ledPin8, HIGH);

    
  ledStrip2.setBrightness(255);
  ledStrip2.begin(); 

  ledStrip3.setBrightness(255);
  ledStrip3.begin(); 

  ledStrip4.setBrightness(255);
  ledStrip4.begin(); 

  ledStrip5.setBrightness(255);
  ledStrip5.begin(); 

  
}

void loop() {


    lightLedStrip2(255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 
                  255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom() );
    lightLedStrip3(255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 
                  255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom() );
    lightLedStrip4(255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 
                  255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom() );
    lightLedStrip5(255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 
                  255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom(), 255,242,colorRandom() );                                    
    delay(200);  

    lightLedStrip2(colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, 
                    colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0 );
    lightLedStrip3(colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, 
                    colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0 );
    lightLedStrip4(colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, 
                    colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0 );
    lightLedStrip5(colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, 
                    colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0, colorRandom(),0,0 );                                        
    delay(200);  

}


int colorRandom() {
  return random(0, 255);
}


void lightLedStrip2(int cr0, int cg0, int cb0, int cr1, int cg1, int cb1, int cr2, int cg2, int cb2,
                    int cr3, int cg3, int cb3, int cr4, int cg4, int cb4, int cr5, int cg5, int cb5,
                    int cr6, int cg6, int cb6, int cr7, int cg7, int cb7, int cr8, int cg8, int cb8,
                    int cr9, int cg9, int cb9
                   ) {

    ledStrip2.setPixelColor(0, ledStrip2.Color(cr0, cg0, cb0)); 
    ledStrip2.setPixelColor(1, ledStrip2.Color(cr1, cg1, cb1)); 
    ledStrip2.setPixelColor(2, ledStrip2.Color(cr2, cg2, cb2));
    ledStrip2.setPixelColor(3, ledStrip2.Color(cr3, cg3, cb3)); 
    ledStrip2.setPixelColor(4, ledStrip2.Color(cr4, cg4, cb4)); 
    ledStrip2.setPixelColor(5, ledStrip2.Color(cr5, cg5, cb5));
    ledStrip2.setPixelColor(6, ledStrip2.Color(cr6, cg6, cb6)); 
    ledStrip2.setPixelColor(7, ledStrip2.Color(cr7, cg7, cb7)); 
    ledStrip2.setPixelColor(8, ledStrip2.Color(cr8, cg8, cb8));
    ledStrip2.setPixelColor(9, ledStrip2.Color(cr9, cg9, cb9));
    ledStrip2.show();
}


void lightLedStrip3(int cr0, int cg0, int cb0, int cr1, int cg1, int cb1, int cr2, int cg2, int cb2,
                    int cr3, int cg3, int cb3, int cr4, int cg4, int cb4, int cr5, int cg5, int cb5,
                    int cr6, int cg6, int cb6, int cr7, int cg7, int cb7, int cr8, int cg8, int cb8,
                    int cr9, int cg9, int cb9
                   ) {

    ledStrip3.setPixelColor(0, ledStrip3.Color(cr0, cg0, cb0)); 
    ledStrip3.setPixelColor(1, ledStrip3.Color(cr1, cg1, cb1)); 
    ledStrip3.setPixelColor(2, ledStrip3.Color(cr2, cg2, cb2));
    ledStrip3.setPixelColor(3, ledStrip3.Color(cr3, cg3, cb3)); 
    ledStrip3.setPixelColor(4, ledStrip3.Color(cr4, cg4, cb4)); 
    ledStrip3.setPixelColor(5, ledStrip3.Color(cr5, cg5, cb5));
    ledStrip3.setPixelColor(6, ledStrip3.Color(cr6, cg6, cb6)); 
    ledStrip3.setPixelColor(7, ledStrip3.Color(cr7, cg7, cb7)); 
    ledStrip3.setPixelColor(8, ledStrip3.Color(cr8, cg8, cb8));
    ledStrip3.setPixelColor(9, ledStrip3.Color(cr9, cg9, cb9));
    ledStrip3.show();
}


void lightLedStrip4(int cr0, int cg0, int cb0, int cr1, int cg1, int cb1, int cr2, int cg2, int cb2,
                    int cr3, int cg3, int cb3, int cr4, int cg4, int cb4, int cr5, int cg5, int cb5,
                    int cr6, int cg6, int cb6, int cr7, int cg7, int cb7, int cr8, int cg8, int cb8,
                    int cr9, int cg9, int cb9
                   ) {

    ledStrip4.setPixelColor(0, ledStrip4.Color(cr0, cg0, cb0)); 
    ledStrip4.setPixelColor(1, ledStrip4.Color(cr1, cg1, cb1)); 
    ledStrip4.setPixelColor(2, ledStrip4.Color(cr2, cg2, cb2));
    ledStrip4.setPixelColor(3, ledStrip4.Color(cr3, cg3, cb3)); 
    ledStrip4.setPixelColor(4, ledStrip4.Color(cr4, cg4, cb4)); 
    ledStrip4.setPixelColor(5, ledStrip4.Color(cr5, cg5, cb5));
    ledStrip4.setPixelColor(6, ledStrip4.Color(cr6, cg6, cb6)); 
    ledStrip4.setPixelColor(7, ledStrip4.Color(cr7, cg7, cb7)); 
    ledStrip4.setPixelColor(8, ledStrip4.Color(cr8, cg8, cb8));
    ledStrip4.setPixelColor(9, ledStrip4.Color(cr9, cg9, cb9));
    ledStrip4.show();
}


void lightLedStrip5(int cr0, int cg0, int cb0, int cr1, int cg1, int cb1, int cr2, int cg2, int cb2,
                    int cr3, int cg3, int cb3, int cr4, int cg4, int cb4, int cr5, int cg5, int cb5,
                    int cr6, int cg6, int cb6, int cr7, int cg7, int cb7, int cr8, int cg8, int cb8,
                    int cr9, int cg9, int cb9
                   ) {

    ledStrip5.setPixelColor(0, ledStrip5.Color(cr0, cg0, cb0)); 
    ledStrip5.setPixelColor(1, ledStrip5.Color(cr1, cg1, cb1)); 
    ledStrip5.setPixelColor(2, ledStrip5.Color(cr2, cg2, cb2));
    ledStrip5.setPixelColor(3, ledStrip5.Color(cr3, cg3, cb3)); 
    ledStrip5.setPixelColor(4, ledStrip5.Color(cr4, cg4, cb4)); 
    ledStrip5.setPixelColor(5, ledStrip5.Color(cr5, cg5, cb5));
    ledStrip5.setPixelColor(6, ledStrip5.Color(cr6, cg6, cb6)); 
    ledStrip5.setPixelColor(7, ledStrip5.Color(cr7, cg7, cb7)); 
    ledStrip5.setPixelColor(8, ledStrip5.Color(cr8, cg8, cb8));
    ledStrip5.setPixelColor(9, ledStrip5.Color(cr9, cg9, cb9));
    ledStrip5.show();
}
