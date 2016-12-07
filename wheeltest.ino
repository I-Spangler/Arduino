#include<SoftwareSerial.h>
SoftwareSerial bluetooth(0,1);
int ledpin = 13;
String instruction = "";
int e1 = 6, e2 = 7, d1 = 8, d2 = 9;
void setup() {
  // put your setup code here, to run once:
  bluetooth.begin(9600);
  pinMode(e1, OUTPUT);
  pinMode(e2, OUTPUT);  
  pinMode(d1, OUTPUT);
  pinMode(ledpin, OUTPUT);
}
void loop() {
  if(bluetooth.available()){
    while(bluetooth.available()){
      instruction = char(bluetooth.read());
    }
    if(instruction == "1")
      digitalWrite(ledpin, HIGH);
    else if(instruction == "0")
      digitalWrite(ledpin, LOW);
    instruction = "";
  }
  
}
