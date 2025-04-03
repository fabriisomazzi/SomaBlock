// Ardublockly generated sketch
void setup() {
  pinMode(1, INPUT);
  pinMode(2, OUTPUT);
}

void loop() {
  if (digitalRead(1)) {
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
  }

}