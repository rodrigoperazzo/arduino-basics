#include <LM7SegDirect.h>

LM7SegDirect disp(2, 12, 11, 10, 9, 8, 7, 6, false);

byte currentValue = 0;
int currentMillis =0;

void setup() {
  // put your setup code here, to run once:
  disp.defineDigits(1, 0, 0, 0, 0);

}

void loop() {
  // put your main code here, to run repeatedly:
  disp.valueWrite(currentValue); 

  currentMillis = currentMillis + (5 * 1);
 
  if (currentMillis > 1000)
  {
    currentValue++;
    currentMillis = 0;
  }
 
  if (currentValue > 9)
    currentValue = 0;

}
