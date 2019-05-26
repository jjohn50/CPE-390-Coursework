#include <cmath> 

void setup() {
  // put your setup code here, to run once:
  analogWriteResolution(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  int n = 10; 
  //samples per wave
 //very slow
  y=sin(440 t); //DAQ do not like 1,-1 
  //equation is floating point 
  //your number must map to 0 -> 4095
  //suggestion: pick 2048 is the midpoint. Consider that 0 
  //sine wave -2048 sin(440t) + 2048 
  analogWrite(DAC0,v);
  //delay(1); // 1 ms
  delayMicroseconds(1122)  
  delayMicroseconds(??); //1/440secs/10
}
