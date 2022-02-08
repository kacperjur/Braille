#include <Vector.h>
#include <SoftwareSerial.h>
#include "letter.h"
SoftwareSerial hc06(0,1);
#define Led0 2
#define Led1 3
#define Led2 4
#define Led3 5
#define Led4 6
#define Led5 7
#define button 10


void setup() 
{
  Serial.begin(9600);
  Serial.println("słowo:");
  hc06.begin(9600);
  digitalWrite(Led0, LOW);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, LOW);
  digitalWrite(Led5, LOW);
  pinMode(button, INPUT_PULLUP);    
}

void loop() 
{
 String zdanie = ""; 
 if(hc06.available()>0)
 {
   zdanie=Serial.readStringUntil('\n');
   zdanie.toLowerCase();
  
 Letters x(zdanie);
 for(int j=0;j<zdanie.length();j++)
 {
    Braille *y = x.table[j];
    for(int i=0; i<6;i++)
    {
      Serial.println(y->table[i]);
    }
    if(y->table[0]==1)
    {
      digitalWrite(Led0, HIGH);
    }
    if(y->table[1]==1)
    {
      digitalWrite(Led1, HIGH);
    }
    if(y->table[2]==1)
    {
      digitalWrite(Led2, HIGH);
    }
    if(y->table[3]==1)
    {
      digitalWrite(Led3, HIGH);
    }
    if(y->table[4]==1)
    {
      digitalWrite(Led4, HIGH);
    }
    if(y->table[5]==1)
    {
      digitalWrite(Led5, HIGH);
    }
    while(digitalRead(button) == HIGH)
    {} 
    
  digitalWrite(Led0, LOW);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, LOW);
  digitalWrite(Led3, LOW);
  digitalWrite(Led4, LOW);
  digitalWrite(Led5, LOW);
  delay(1000);
 }
 }
  
 

}
