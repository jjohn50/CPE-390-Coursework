//Step 6
#include <cmath>
double stuff[10]={0};
double placeofwait = (1.0 / 100000.0) / (double)10 * 1000000.0 / 1.024;

void setup() 
{
pinMode(DAC1, OUTPUT);
analogWriteResolution(12);
for(int n = 0; n < 10; n++)
  {
    stuff[n] = sin((float)n /(double)10 * 2 * PI) * 2047 + 2047;  
  }
}

void loop() {
  for(int j = 0; j < 10; j++)
  {
    analogWrite(DAC1, stuff[j]);
    delayMicroseconds(placeofwait);
  }
}
