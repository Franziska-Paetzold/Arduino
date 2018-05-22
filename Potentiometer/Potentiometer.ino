
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  int potValue = analogRead(A0);

  Serial.println(potValue);

  delay(100);
  
}
