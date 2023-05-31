int LED = 2;
int Sensor = 13;

void setup() {
  // put your setup code here, to run once:
pinMode(LED, OUTPUT);
pinMode(Sensor, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(Sensor) == HIGH){
  digitalWrite(LED, HIGH);
  digitalWrite(LED, HIGH);
  Serial.println("Bird detected!");
  delay(1000);
}
else{
  digitalWrite(LED, LOW);
  Serial.println("Bird gone!");
  delay(1000);
}
}
