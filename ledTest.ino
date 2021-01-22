#include "FastLED.h"

CRGB leds[300];

int r, g, b = 0;

void setup() {
  
  delay(2000);
  Serial.begin(9600);
  FastLED.addLeds<SM16703, 3, RGB>(leds, 300);
  
}

void loop() {
  redChase();
  greenChase();
  blueChase();
}

void redChase(){
    for(int j = 5; j <= 255; j +=20){
    for(int i = 0; i < 100; i++){
      leds[i] = CRGB(b, r, g);
      FastLED.show();
      Serial.print(i);
      Serial.print(" rgb value: ");
      Serial.print(r);
      Serial.println();
      delay(10);  
      }
    r=j;
  }
  r=0;
}

void greenChase(){
    for(int j = 5; j <= 255; j +=20){
    for(int i = 0; i < 100; i++){
      leds[i] = CRGB(b, r, g);
      FastLED.show();
      Serial.print(i);
      Serial.print(" rgb value: ");
      Serial.print(g);
      Serial.println();
      delay(10);  
      }
    g=j;
  }
  g=0;
}

void blueChase(){
   for(int j = 5; j <= 255; j +=20){
    for(int i = 0; i < 100; i++){
      leds[i] = CRGB(b, r, g);
      FastLED.show();
      Serial.print(i);
      Serial.print(" rgb value: ");
      Serial.print(b);
      Serial.println();
      delay(10);  
      }
    b=j;
  }
  b=0;
}
