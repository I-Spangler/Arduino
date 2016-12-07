const int LM35 = 0;
float temperatura = 0;
int adc = 0;
int led[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 10; i++){
    pinMode(led[i], OUTPUT);  
  }
  analogReference(INTERNAL);
}

void loop() {
  // put your main code here, to run repeatedly:
  adc = analogRead(LM35);
  temperatura = adc * 0.1074;
  if(temperatura > 23.0) digitalWrite(led[0], HIGH);
  else digitalWrite(led[0], LOW);
  if(temperatura > 24.0) digitalWrite(led[1], HIGH);
  else digitalWrite(led[1], LOW);
  if(temperatura > 25.0) digitalWrite(led[2], HIGH);
  else digitalWrite(led[2], LOW);
  if(temperatura > 26.0) digitalWrite(led[3], HIGH);
  else digitalWrite(led[3], LOW);
  if(temperatura > 27.0) digitalWrite(led[4], HIGH);
  else digitalWrite(led[4], LOW);
  if(temperatura > 28.0) digitalWrite(led[5], HIGH);
  else digitalWrite(led[5], LOW);
  if(temperatura > 29.0) digitalWrite(led[6], HIGH);
  else digitalWrite(led[6], LOW);
  if(temperatura > 30.0) digitalWrite(led[7], HIGH);
  else digitalWrite(led[7], LOW);
  if(temperatura > 31.0) digitalWrite(led[8], HIGH);
  else digitalWrite(led[8], LOW);
  if(temperatura > 32.0) digitalWrite(led[9], HIGH);
  else digitalWrite(led[9], LOW);
}
