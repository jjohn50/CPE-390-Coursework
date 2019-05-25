#include <cmath>
double place[10]={0};
double wait = (1.0 / 440.0) / (double)10 * 1000000.0 / 1.024;

void setup() 
{
pinMode(DAC1, OUTPUT);
analogWriteResolution(12);
for(int a = 0; a < 10; a++)
  {
    place [a] = sin((float)a /(double)10 * 2 * PI) * 2047 + 2047;  
  }
}

void loop() {
  for(int b = 0; b < 10; b++)
  {
    analogWrite(DAC1, place[b]);
    delayMicroseconds(wait);
  }
}
