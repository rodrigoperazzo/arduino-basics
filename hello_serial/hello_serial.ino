void setup() {
  Serial.begin(9600);
}

int i = 0;
void loop() {
  Serial.print("Hello Arduino! - ");
  Serial.println(i);
  i++;
  delay(1000);
}
