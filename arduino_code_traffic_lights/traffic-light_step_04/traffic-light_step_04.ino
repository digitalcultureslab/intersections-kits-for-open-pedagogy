// variables
int GREEN = 3;
int DELAY = 1000;

// basic functions
void setup()
{
  // setup LED modes
  // we're specifying that we're going to send information to this LED 
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  // High turns things on
  digitalWrite(GREEN, HIGH);
  delay(DELAY);
  // low turns things off
  digitalWrite(GREEN, LOW);
  
}
