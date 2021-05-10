
#define LED 4

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i=0; i<3; ++i) {
    digitalWrite(LED, HIGH);
    delay(50);
    digitalWrite(LED, LOW);
    delay(50);
  }
  delay(100);
  for (int i=0; i<2; ++i) {
    digitalWrite(LED, HIGH);
    delay(50);
    digitalWrite(LED, LOW);
    delay(50);
  }
  delay(2000);
}
