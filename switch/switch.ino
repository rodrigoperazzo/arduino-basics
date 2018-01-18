#define LED 13
#define PIN 2

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(PIN, INPUT);

}

void loop() {
  int value = LOW;
  value = digitalRead(PIN);
  if (value == HIGH) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
