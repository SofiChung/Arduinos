int pin_psd1=A15;

void setup(){
	Serial.begin(9600);
	pinMode(pin_psd1, INPUT);
}

void loop() {
	long IR_value = analogRead(pin_psd1);
	long IR_range = vals(IR_value);
	Serial.println(IR_value);
	Serial.print(IR_range);
	Serial.println(" cm");
	Serial.println();
	delay(1000);
}

long vals(long IR_value){
	if(IR_value < 10) IR_value = 10;
	return ((67870.0/ (IR_value - 3.0)) - 40.0)/10;
}