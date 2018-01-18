#define LED 3
#define SWITCH_PIN 2

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SWITCH_PIN, INPUT);

}

void loop() {
  int value = LOW;
  value = digitalRead(SWITCH_PIN);
  if (value == HIGH) {
    blinkMode();
  } else {
    fadeMode();
  }

}

void fadeMode() {
  for (int i = 0; i <= 255; i+= 20) {
    analogWrite(LED, i);
    delay(200);
  }
  digitalWrite(LED, LOW);
}

void blinkMode(){
  digitalWrite(LED, HIGH);
  delay(200);
  digitalWrite(LED, LOW);
  delay(200);
}

