#include <Arduino.h>

#define led 2
#define switch_On 3
#define switch_Off 4

void setup() {
  pinMode(switch_On, INPUT);
  pinMode(switch_Off, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  if(digitalRead (switch_On) == HIGH){
    digitalWrite(led,HIGH);
    delay(250);
  }

  if(digitalRead (switch_Off) == LOW){
    digitalWrite(led,LOW);
    delay(250);
  }
  
}

