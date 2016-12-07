int EI = 6, EO = 7, DI = 9, DO = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(EI, OUTPUT);
  pinMode(EO, OUTPUT);
  pinMode(DI, OUTPUT);
  pinMode(DO, OUTPUT);
}
void fwd(){
  digitalWrite(EI, LOW);
  digitalWrite(EO, HIGH);
  digitalWrite(DI, LOW);
  digitalWrite(DO, HIGH);
}
void back(){
  digitalWrite(EI, HIGH);
  digitalWrite(EO, LOW);
  digitalWrite(DI, HIGH);
  digitalWrite(DO, LOW);
  }
void turnleft(){
  digitalWrite(EI, HIGH);
  digitalWrite(EO, LOW);
  digitalWrite(DI, LOW);
  digitalWrite(DO, HIGH);
  }
void turnright(){
  digitalWrite(EI, LOW);
  digitalWrite(EO, HIGH);
  digitalWrite(DI, HIGH);
  digitalWrite(DO, LOW);
  }
void stop(){
   digitalWrite(EI, LOW);
  digitalWrite(EO, LOW);
  digitalWrite(DI, LOW);
  digitalWrite(DO, LOW);
  }
void loop() {
  // put your main code here, to run repeatedly:
  fwd();
  delay(1000);
  stop();
  delay(1000);
  turnleft();
  delay(1000);
  stop();
  delay(1000);
}
