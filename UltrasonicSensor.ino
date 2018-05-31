int trigPin = 7;
int echoPin = 8;

float dt, distance; 

void setup() {
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}

void loop() {
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);

 dt = pulseIn(echoPin, HIGH);
 distance = dt * 17 / 1000;
 Serial.print(distance);
 Serial.printLn("cm");
 delay(100);


}

