int led = BUILTIN_LED;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
Serial.println("Led on");
delay(1000);
digitalWrite(led,LOW);
Serial.println("Led off");
delay(4000);
}
