int swtitchState = 0;
  
void setup() {
  // boot loader?
  
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
  
    
}

void loop() {
  // primary loop
  swtitchState = digitalRead(2);

  if (swtitchState == LOW) {
    digitalWrite(3, HIGH); // GREEN LIGHT ON
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  } else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(250);

    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);

    delay(250);
  }
}
