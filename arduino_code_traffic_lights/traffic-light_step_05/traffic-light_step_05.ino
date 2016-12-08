// variables
int GREEN = 3;
int YELLOW = 4;
int DELAY_GREEN = 1000;
int DELAY_YELLOW = 1000;

// basic functions
void setup()
{
  // setup LED modes
  // we're specifying that we're going to send information to this LED 
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
}

void loop()
{
  // High turns things on
  // Low turns things off
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);
  // how long we want the green led on
  delay(DELAY_GREEN);
  
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  // how long we want the yellow led on
  delay(DELAY_YELLOW);
}

