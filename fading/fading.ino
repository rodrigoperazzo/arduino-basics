#define LED 3

void setup() {
  pinMode(LED, OUTPUT);

}

void loop() {
  for (int i = 0; i <= 255; i+=10) {
    analogWrite(LED, i);
    delay(100);
  }
  digitalWrite(LED, LOW);
}
