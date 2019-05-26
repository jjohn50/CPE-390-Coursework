void setup() {
  // put your setup code here, to run once:
  //Goal: put out a wave form 
  analogWriteResoluton(12);
  //12 bit DAC 2^12=4096
}

void loop() {
  // put your main code here, to run repeatedly
  //Can take around 1 million samples
  //Suppose we have a 1 bit Digital to Analog converter (DAC)
  analogWrite(DAC0,0); // 0.0v 
  analogWrite(DAC0,1); //3.3v
  //Suppose we have a 2 bit Digital to Analog converter (DAC)
 analogWrite(DAC0,0); // 0.0v 
  analogWrite(DAC0,1); //1.1v
   analogWrite(DAC0,2); // 2.2v 
  analogWrite(DAC0,3); //3.3v
//what accuracy do we have? 
 analogWrite(DAC0,0); // 0.0v 
 analogWrite(DAC0,4095); //3.3v
 analogWrite(DAC0,1); // 3.3/4095v = 0.8mv 
  //need to make wave form 
  //we might need a table to make the wave at some point 
  //
  for(;;){
    //read the data
    int v = // read the data
    analogWrite(DAC0,v);
     
  }
}
