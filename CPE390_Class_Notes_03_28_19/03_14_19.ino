void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0); // Will not produce zero unless it is plugged into ground 
  // put your main code here, to run repeatedly:
  Serial.print("Hello there"); 
  //Serial port send 8 bits and 2 bits for sync/framing 
  //11 msecs for this message to send and nothing else can happen 
  Serial.println(); 
  digitalWrite(13,HIGH); 
  //One closest to the power supply is 
  delay(1000); //wait 
  digitalWrite(13,LOW); //cause light to turn off 
  delay(1000); 
}
