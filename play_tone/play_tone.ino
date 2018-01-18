char notes[] = { 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };  
int tones[] = { 1915, 1700, 1519, 1432, 1275, 1136, 1014, 956 };

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void playTone(int period, int duration) 
{  
  for (long i = 0; i < duration * 1000L; i += period * 2) 
  {    
      digitalWrite(speakerPin, HIGH);    
      delayMicroseconds(period);    
      digitalWrite(speakerPin, LOW);    
      delayMicroseconds(period);  
  }
}

int findTone(char note) {
  for (int j = 0; j < 8; j++){
    if(notes[j] == note) {
      return j;
    }
  }
}

