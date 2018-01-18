#define LED 2
#define ANALOG_PIN 0

void setup() {
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  int value = 0;
  value = analogRead(ANALOG_PIN);

  Serial.println(value);

  if (value > 600) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }

}
