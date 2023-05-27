// Setting variables which can be easily called to later
int Light1 = 8;          // Setting the pins from the LEDs
int Light2 = 9;
int Light3 = 10;
int Light4 = 11;
int Delay_Light = 200;        // Setting variables for delays that can be adjusted


void setup()          // Runs once when sketch starts
{
  pinMode(Light1, OUTPUT);      // Setting the LEDs to outputs
  pinMode(Light2, OUTPUT);
  pinMode(Light3, OUTPUT);
  pinMode(Light4, OUTPUT);
}

void loop()          // Runs repeatedly
{
  first_light();        // Running each function followed by a delay set by variables
  delay(Delay_Light);
  third_light();
  delay(Delay_Light);
  second_light();
  delay(Delay_Light);
  forth_light();
  delay(Delay_Light);
}

void first_light()        // A function for turning only the green LED on
{
  digitalWrite(Light1, HIGH);      // Turning on the green LED & the others off
  digitalWrite(Light2, LOW);
  digitalWrite(Light3, LOW);
  digitalWrite(Light4, LOW);
}

void second_light()        // A function for turning only the yellow LED on
{
  digitalWrite(Light1, LOW);      // Turning on the yellow LED & the others off
  digitalWrite(Light2, HIGH);
  digitalWrite(Light3, LOW);
  digitalWrite(Light4, LOW);
}

void third_light()        // A function for turning only the red LED on
{
  digitalWrite(Light1, LOW);      // Turning on the red LED & the others off
  digitalWrite(Light2, LOW);
  digitalWrite(Light3, HIGH);
  digitalWrite(Light4, LOW);
}

void forth_light()        // A function for turning only the red LED on
{
  digitalWrite(Light1, LOW);      // Turning on the red LED & the others off
  digitalWrite(Light2, LOW);
  digitalWrite(Light3, LOW);
  digitalWrite(Light4, HIGH);
}