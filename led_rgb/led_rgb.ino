

void setup() {
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  analogWrite(11,random(0,255));
  analogWrite(10,random(0,255));
  analogWrite(9,random(0,255));
  delay(1000);
}
