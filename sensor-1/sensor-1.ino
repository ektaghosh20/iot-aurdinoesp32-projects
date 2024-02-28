//  int ir_sensor=7;
int ldr=7;
void setup() {
 
  
  // put your setup code here, to run once:
  // pinMode(ir_sensor,INPUT);
  pinMode(ldr,INPUT);




}

void loop() {
  // put your main code here, to run repeatedly:
  int data=digitalRead(ldr);
  Serial.println(data);

}
