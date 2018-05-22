
bool isRedButtonDown = false;


void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);

}

void loop() {
  int stateOfPin = digitalRead(2);
  if (stateOfPin == 1) {
    isRedButtonDown = true;
    }
   else {
    isRedButtonDown = false;
    }
   Serial.println(stateOfPin, DEC); 
   Serial.println(isRedButtonDown); 
}
