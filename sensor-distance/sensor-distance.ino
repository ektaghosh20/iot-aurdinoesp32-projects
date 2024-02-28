// ultrasonic sensor
// // distance?
const int trigPin=7;
const int echoPin=8;

long duration;
int distance;


void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
Serial.begin(9600);
   
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,HIGH);
delayMicroseconds(2);
digitalWrite(trigPin,LOW);
duration=pulseIn(echoPin,HIGH);
distance =duration*0.034/2;
Serial.print("Distance:");
Serial.println(distance);


}
