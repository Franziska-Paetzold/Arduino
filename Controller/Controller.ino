int pinOfRedButton = 4;
int pinOfBlueButton = 2;

void setup() {
  Serial.begin(9600);
  pinMode(pinOfRedButton, INPUT);
  pinMode(pinOfBlueButton, INPUT);
}

void loop() {
  int potValue = analogRead(A0); 
  int redButtonValue = digitalRead(pinOfRedButton);
  int blueButtonValue = digitalRead(pinOfBlueButton);

  //if every print is commented out, the hardware works fine
  //Serial.println(potValue);
  //Serial.println(redButtonValue);
  Serial.println(blueButtonValue);
  
}
