const int redLed = 13;
const int greenLed = 11;
const int yellowLed = 12;
const int whiteLed = 10;
const int botW = 4;
const int botG = 5;
const int botY = 6;
const int botR = 7;
int botGIO = 0;
int botYIO = 0;
int botRIO = 0;
int botWIO = 0;
const int buzz = 8;
void setup() {
  // put your setup code here, to run once:
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(whiteLed, OUTPUT);
  pinMode(botG, INPUT);
  pinMode(botY, INPUT);
  pinMode(botR, INPUT);
  pinMode(botW, INPUT);
  pinMode(buzz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  botGIO = digitalRead(botG);
  botYIO = digitalRead(botY);
  botRIO = digitalRead(botR);
  botWIO = digitalRead(botW);
  if(botGIO == HIGH){
    digitalWrite(greenLed, HIGH);
    tone(buzz, 300);
  }
  else{
    digitalWrite(greenLed, LOW);  
  }
    if(botYIO == HIGH){
    digitalWrite(yellowLed, HIGH);
    tone(buzz, 750); 
  }
  else{
    digitalWrite(yellowLed, LOW);
     
  }  
    if(botRIO == HIGH){
    digitalWrite(redLed, HIGH);
    tone(buzz, 1000);
  }
  else{
    digitalWrite(redLed, LOW);  
  }
  if(botWIO == HIGH){
    digitalWrite(whiteLed, HIGH);
    tone(buzz, 100);
  }
  else{
    digitalWrite(whiteLed, LOW);  
  }
  noTone(buzz);    
}
