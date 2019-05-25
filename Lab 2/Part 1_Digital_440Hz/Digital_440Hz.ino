void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(11,HIGH);
  delayMicroseconds(1136);
  digitalWrite(11,LOW);
  delayMicroseconds(1136);
}
