#include<EEPROM.h>
int l,y=1799;
union data
{
  int a;
  byte b[2];
  };
  union data c;
void setup() {
  // put your setup code here, to run once:
 for(int i=0;i<2;i++)
 c.b[i]=EEPROM.read(i);
 l=c.a;
 y=1799-l; 
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(2,INPUT);
pinMode(4,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
char m=0,n=0;
int k=1.5;
m=digitalRead(2);
n=digitalRead(4);
    if(m==1&&l<1800)
  {
    delay(7);
    if(m==1&&l<1800)
    {
      l++;
      y--;
       c.a=l;
    for(int q=0;q<2;q++)
    EEPROM.write(q,c.b[q]);

    
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(k);
    digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(k);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(k);
     digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    delay(k);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    delay(k);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(k);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(k);
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(k);
  }
  }
 if(n==1&&y<1800)
 {
  delay(7);
  if(n==1&&y<1800)
  {
    l--;
    y++;
  c.a=l;
    for(int e=0;e<2;e++)
    EEPROM.write(e,c.b[e]);

    
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(k);
     digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,HIGH);
    delay(k);
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,HIGH);
    delay(k);
     digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    delay(k);
    digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(11,LOW);
    delay(k);
      digitalWrite(8,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(k);
     digitalWrite(8,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(k);
     digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
    delay(k);
 }
 }
}

