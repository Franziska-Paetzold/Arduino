
  int pinA = 13;
  int pinB = 9;
  
void setup() {
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);

}

void loop() {
  digitalWrite(pinA, HIGH);
  digitalWrite(pinB, LOW);
  delay(1000);
  digitalWrite(pinA, LOW);
  digitalWrite(pinB, HIGH);
  delay(1000);
}
