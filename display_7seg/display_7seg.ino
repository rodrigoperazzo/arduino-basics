// A, B, C, D, E, F, G, DOT
int leds[8] = {2, 3, 4, 5, 6, 7, 8, 9}; 
int numbers[9][8] = {
  {0, 1, 1, 0, 0, 0, 0, 0}, 
  {1, 1, 0, 1, 1, 0, 1, 0},
  {1, 1, 1, 1, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 1, 1, 0, 1, 1, 0},
  {1, 0, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 1, 1, 0}
};

void setup() {
  for (int i = 0; i < 8; i++){
     pinMode(leds[i], OUTPUT);
     digitalWrite(leds[i], LOW);
  }
}

void loop() {
  for(int i = 0; i < 9; i++) {
    for(int j=0;j<8;j++){
      digitalWrite(leds[j], numbers[i][j]);
    }
    delay(1000);
  }  
}

