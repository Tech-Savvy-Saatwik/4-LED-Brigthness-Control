int LED1=2;
int LED2=3;
int LED3=4;
int LED4=5;
int myPin=A0;
float potVal;
float LEDval;

void setup(){
  pinMode(potVal,INPUT);
  pinMode(LEDval,OUTPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  potVal=analogRead(myPin);
  Serial.print("Potentiometer value is : ");
  Serial.println(potVal);
  LEDval=(255./1023.)*potVal;
  Serial.print("LED value is : ");
  Serial.println(LEDval);
  
  if(potVal==0)
  {
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
  }
  else if(potVal<255)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
  }
  else if(potVal<511)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    digitalWrite(LED4,LOW);
  }
  else if(potVal<767)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,LOW);
  }
  else if(potVal<1024)
  {
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,HIGH);
    digitalWrite(LED4,HIGH);
  }
}
