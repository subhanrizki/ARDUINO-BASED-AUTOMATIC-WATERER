int pompa=2;
void setup(){
 Serial.begin(9600); 
 pinMode(pompa,OUTPUT);
}

void loop(){
  int sensorValue = analogRead(A0);
  Serial.println(sensorValue);
  if(sensorValue>350) digitalWrite(pompa,HIGH);
  else if(sensorValue<300) digitalWrite(pompa,LOW);
  delay(100);
}