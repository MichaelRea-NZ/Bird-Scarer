int calibrationTime = 30;
long unsigned int lowIn;
long unsigned int pause = 5000;
boolean lockLow = true;
boolean takeLowTime;
int pirPin = 7;
int ledPin = 5;
int soundPin = 9;

void setup(){
 Serial.begin(9600);
 pinMode(pirPin , INPUT); 
 pinMode(ledPin , OUTPUT);
 pinMode(soundPin , OUTPUT);
 digitalWrite(pirPin, LOW);
 
 Serial.print("Calibrating sensor ");
   for(int i= 0; i < calibrationTime; i ++){
     Serial.print(".");
     delay(1000);
 }
 Serial.println("Set");
}

void loop(){
  if(digitalRead(pirPin) == HIGH){
   digitalWrite(ledPin, HIGH);   
   tone(soundPin, 2500);
   if(lockLow){
    Serial.println("------------------------------------");
    Serial.print("motion detected at ");
    Serial.print(millis()/1000 );
    Serial.println(" seconds.");
    delay(2250);
   } 
   takeLowTime = true;
  }
  if(digitalRead(pirPin) == LOW){
   digitalWrite(ledPin, LOW);
   noTone(soundPin);

  if(takeLowTime){
    lowIn - millis();
    takeLowTime = false;
  }
  
   
   if(! takeLowTime && millis() - lowIn > pause){
    lockLow = true;
   delay(50); 
   }
  }
}


