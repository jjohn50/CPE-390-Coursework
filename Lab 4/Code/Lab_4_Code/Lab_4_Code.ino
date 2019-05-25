void setup() {
//put your setup here 
pinMode(A1,INPUT);
pinMode(A9,INPUT);

Serial.begin(9600); 
analogReadResolution(12); 
}
void loop(){
  while(analogRead(A9) < 3783){
    Serial.print("\n");
    Serial.print(analogRead(A9));
  }
  Serial.print("end1");
  long t0 = micros();
  while(analogRead(A1) < 3783){
       Serial.print("\n");
    Serial.print(analogRead(A1));
  }
  Serial.print("end2");
  long t1 = micros();
  if(t1>t0){
    uint64_t long elasped = t1-t0;
    Serial.print("\n");
    Serial.print(elasped);
    delay(2000);
  }
  else{
    Serial.print("\n");
    Serial.print("error");
    delay(2000); 
  }
}
