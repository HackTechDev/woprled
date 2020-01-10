// NeoPixel WOPR
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library

#include "Adafruit_NeoPixel.h"
#ifdef __AVR__
  #include <avr/power.h>
#endif

const int ledPin6 = 6;
const int ledPin7 = 7;
const int ledPin8 = 8;

// Which pin on the Arduino is connected to the NeoPixels?
// On a Trinket or Gemma we suggest changing this to 1
#define PINSTRIPLED2            2
#define PINSTRIPLED3            3
#define PINSTRIPLED4            4
#define PINSTRIPLED5            5


// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      10

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
// Note that for older NeoPixel strips you might need to change the third parameter--see the strandtest
// example for more information on possible values.
Adafruit_NeoPixel pixelled2 = Adafruit_NeoPixel(NUMPIXELS, PINSTRIPLED2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelled3 = Adafruit_NeoPixel(NUMPIXELS, PINSTRIPLED3, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelled4 = Adafruit_NeoPixel(NUMPIXELS, PINSTRIPLED4, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel pixelled5 = Adafruit_NeoPixel(NUMPIXELS, PINSTRIPLED5, NEO_GRB + NEO_KHZ800);


int delayval = 100; // delay for half a second

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

  
  pixelled2.setBrightness(255);
  pixelled2.begin();

  pixelled3.setBrightness(255);
  pixelled3.begin(); 


  pixelled4.setBrightness(255);
  pixelled4.begin();

  pixelled5.setBrightness(255);
  pixelled5.begin(); 
}

void loop() {

//sequence1();
//sequence2();
//sequence3();
sequence4();
}


void sequence4 () {


 

  int led_random20 = random(10);
  int led_random21 = random(10);
  int led_random22 = random(10);
  int led_random23 = random(10);

  int led_random30 = random(10);
  int led_random31 = random(10);
  int led_random32 = random(10);
  int led_random33 = random(10);

  int led_random40 = random(10);
  int led_random41 = random(10);
  int led_random42 = random(10);
  int led_random43 = random(10);

  int led_random50 = random(10);
  int led_random51 = random(10);
  int led_random52 = random(10);
  int led_random53 = random(10);


  pixelled2.setPixelColor(led_random20, pixelled2.Color(255,0,0)); 
  pixelled2.setPixelColor(led_random21, pixelled2.Color(255,0,0)); 
  pixelled2.setPixelColor(led_random22, pixelled2.Color(255,0,0)); 
  pixelled2.setPixelColor(led_random23, pixelled2.Color(255,0,0)); 


  pixelled3.setPixelColor(led_random30, pixelled3.Color(255,0,0)); 
  pixelled3.setPixelColor(led_random31, pixelled3.Color(255,0,0)); 
  pixelled3.setPixelColor(led_random32, pixelled3.Color(255,0,0)); 
  pixelled3.setPixelColor(led_random33, pixelled3.Color(255,0,0)); 
  

  pixelled4.setPixelColor(led_random40, pixelled4.Color(255,0,0)); 
  pixelled4.setPixelColor(led_random41, pixelled4.Color(255,0,0)); 
  pixelled4.setPixelColor(led_random42, pixelled4.Color(255,0,0)); 
  pixelled4.setPixelColor(led_random43, pixelled4.Color(255,0,0)); 


  pixelled5.setPixelColor(led_random50, pixelled5.Color(255,0,0)); 
  pixelled5.setPixelColor(led_random51, pixelled5.Color(255,0,0)); 
  pixelled5.setPixelColor(led_random52, pixelled5.Color(255,0,0)); 
  pixelled5.setPixelColor(led_random53, pixelled5.Color(255,0,0)); 


   pixelled2.show(); 
   pixelled3.show();    
   pixelled4.show(); 
   pixelled5.show(); 
    
   delay(delayval); 

  pixelled2.setPixelColor(led_random20, pixelled2.Color(0,0,0)); 
  pixelled3.setPixelColor(led_random30, pixelled3.Color(0,0,0)); 
  pixelled4.setPixelColor(led_random40, pixelled4.Color(0,0,0)); 
  pixelled5.setPixelColor(led_random50, pixelled5.Color(0,0,0)); 

  pixelled2.setPixelColor(led_random21, pixelled2.Color(0,0,0)); 
  pixelled3.setPixelColor(led_random31, pixelled3.Color(0,0,0)); 
  pixelled4.setPixelColor(led_random41, pixelled4.Color(0,0,0)); 
  pixelled5.setPixelColor(led_random51, pixelled5.Color(0,0,0)); 

  pixelled2.setPixelColor(led_random22, pixelled2.Color(0,0,0)); 
  pixelled3.setPixelColor(led_random32, pixelled3.Color(0,0,0)); 
  pixelled4.setPixelColor(led_random42, pixelled4.Color(0,0,0)); 
  pixelled5.setPixelColor(led_random52, pixelled5.Color(0,0,0)); 

  pixelled2.setPixelColor(led_random23, pixelled2.Color(0,0,0)); 
  pixelled3.setPixelColor(led_random33, pixelled3.Color(0,0,0)); 
  pixelled4.setPixelColor(led_random43, pixelled4.Color(0,0,0)); 
  pixelled5.setPixelColor(led_random53, pixelled5.Color(0,0,0)); 
  
 
}


void sequence3 () {

  digitalWrite(ledPin6, HIGH );
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);  

  
  for(int i=0;i<NUMPIXELS;i++){
    pixelled2.setPixelColor(i, pixelled2.Color(255,0,0)); 
    pixelled3.setPixelColor(9-i, pixelled3.Color(255,0,0));
    pixelled4.setPixelColor(i, pixelled4.Color(255,0,0)); 
    pixelled5.setPixelColor(9-i, pixelled5.Color(255,0,0)); 

    
    pixelled2.show(); 
    pixelled3.show();    
    pixelled4.show(); 
    pixelled5.show();     
    delay(delayval); 
  }

  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);


 for(int i=0;i<NUMPIXELS;i++){

    pixelled2.setPixelColor(i, pixelled2.Color(0,0,0)); 
    pixelled3.setPixelColor(9-i, pixelled3.Color(0,0,0));
    pixelled4.setPixelColor(9-i, pixelled4.Color(0,0,0)); 
    pixelled5.setPixelColor(i, pixelled5.Color(0,0,0)); 

    pixelled2.show(); 
    pixelled3.show();
    pixelled4.show(); 
    pixelled5.show();     
    delay(delayval); 
  }

  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);

 
}

void sequence2 () {

  digitalWrite(ledPin6, HIGH );
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);  


  for(int i=0;i<NUMPIXELS;i++){
  
    pixelled2.setPixelColor(i, pixelled2.Color(255,0,0)); 
    pixelled3.setPixelColor(i, pixelled3.Color(255,0,0));
    pixelled4.setPixelColor(i, pixelled4.Color(255,0,0)); 
    pixelled5.setPixelColor(i, pixelled5.Color(255,0,0));
  
    pixelled2.show(); 
    pixelled3.show(); 
    pixelled4.show(); 
    pixelled5.show();
    
    delay(delayval); 
  }

  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);


  for(int i=NUMPIXELS;i>0;i--){

    pixelled2.setPixelColor(i, pixelled2.Color(0,0,0)); 
    pixelled3.setPixelColor(i, pixelled3.Color(0,0,0)); 
    pixelled4.setPixelColor(i, pixelled4.Color(0,0,0)); 
    pixelled5.setPixelColor(i, pixelled5.Color(0,0,0)); 

    
    pixelled2.show();
    pixelled3.show(); 
    pixelled4.show(); 
    pixelled5.show(); 
        
    delay(delayval); 

  }  

  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);

}


void sequence1() {


  digitalWrite(ledPin6, HIGH );
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);  
  
  for(int i=0;i<NUMPIXELS;i++){

  
    pixelled2.setPixelColor(i, pixelled2.Color(255,0,0)); 
    pixelled3.setPixelColor(i, pixelled3.Color(0,0,255));
    pixelled4.setPixelColor(i, pixelled4.Color(255,255,0)); 
    pixelled5.setPixelColor(i, pixelled5.Color(0,0,255));
  
    
    pixelled2.show(); 
    pixelled3.show(); 
    pixelled4.show(); 
    pixelled5.show(); 
    
    delay(delayval); 

  }


  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, LOW);
  digitalWrite(ledPin8, HIGH);
  

  for(int i=NUMPIXELS;i>0;i--){

    pixelled2.setPixelColor(i, pixelled2.Color(0,0,255)); 
    pixelled3.setPixelColor(i, pixelled3.Color(255,0,0)); 
    pixelled4.setPixelColor(i, pixelled4.Color(0,255,0)); 
    pixelled5.setPixelColor(i, pixelled5.Color(255,0,255)); 

    
    pixelled2.show();
    pixelled3.show(); 
    pixelled4.show(); 
    pixelled5.show(); 
        
    delay(delayval); 

  }  

  digitalWrite(ledPin6, LOW);
  digitalWrite(ledPin7, HIGH);
  digitalWrite(ledPin8, LOW);


}
