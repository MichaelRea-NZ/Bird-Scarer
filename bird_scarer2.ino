int LED = 13;
int PIR = 2;

void setup(){
pinMode(LED, OUTPUT);
pinMode(PIR, INPUT);
Serial.begin(9600);
}

void loop(){
  int sensorval = digitalRead(PIR);
  
 if (PIR == HIGH){
  digitalWrite(LED, HIGH);
  
  delay(100);
  Serial.print("Motion detected");
 }
 else{
  digitalWrite(LED, LOW);
 

 }
}

