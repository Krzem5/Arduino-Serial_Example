void setup(){
	Serial.begin(9600);
}



void loop(){
	if (Serial){
		if (Serial.available()>0){
			Serial.print((char)Serial.read());
		}
	}
}
