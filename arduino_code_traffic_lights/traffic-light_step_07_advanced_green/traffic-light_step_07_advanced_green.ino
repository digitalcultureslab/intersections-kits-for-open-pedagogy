// variables
int GREEN = 3;
int YELLOW = 4;
int RED = 5;
int DELAY_GREEN_01 = 250;
int DELAY_GREEN = 5000;
int DELAY_YELLOW = 750;
int DELAY_RED = 5000;
int DELAY_CLEAR_INTERSECTION = 1000;

// basic functions
void setup() 
{
  // setup LED modes
  // we're specifying that we're going to send information to this LED 
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
}

void loop() 
{
  // High turns things on
  // Low turns things off

  // need to turn off yellow and red before the pause to clear intersection and advanced green
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, LOW);
  delay(DELAY_CLEAR_INTERSECTION); // this is the wait between shift from red to green - intersection to clear
  
 // advanced green for left turn - repeat code block as needed
  digitalWrite(GREEN, HIGH);   // sets the LED on
  delay(DELAY_GREEN_01);       // waits for a second
  digitalWrite(GREEN, LOW);    // sets the LED off
  delay(DELAY_GREEN_01);           
  digitalWrite(GREEN, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN, LOW);    
  delay(DELAY_GREEN_01);           
  digitalWrite(GREEN, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN, LOW);    
  delay(DELAY_GREEN_01);           
  digitalWrite(GREEN, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN, LOW);    
  delay(DELAY_GREEN_01);           
  digitalWrite(GREEN, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN, LOW);    
  delay(DELAY_GREEN_01);      
  digitalWrite(GREEN, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN, LOW);    
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN, LOW);    
  delay(DELAY_GREEN_01);            

// normal traffic light function from here on
  
  digitalWrite(GREEN, HIGH);
 // how long we want the green led on
  delay(DELAY_GREEN);
  
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED, LOW);
  // how long we want the yellow led on
  delay(DELAY_YELLOW);

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(RED, HIGH);
  // how long we want the red led on
  delay(DELAY_RED);
}

