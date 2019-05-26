void setup(){
	pinMode(4,INPUT);
	pinMode(13,OUTPUT);
}
void loop(){
	if(digitalRead(4) == LOW){
	digitalWrite(13, HIGH);
	delay(100)
	digitalWrite(13,LOW);
	delay(100);
	}