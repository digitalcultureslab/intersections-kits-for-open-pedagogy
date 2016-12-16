//This code is a mash-up of a lot of freely available stuff
// I used an Arduino Uno / LEDs / and 330oms resisters
//It represents a working two-directional intersection, with an advanced green for a left turn and an "all-red" delay to allow the intersection ot clear.
//The timing integers below (DELAY_XXXX = XXXX) can be changed for more realistic operation, or to prototype different intersection designs 
//The only hitch is the advanced green. It works through an awkward on/off sequence of code. Someone might want to refine this. To make the advanced green longer, you'll need to cut/paste more of the code until you reach the desire length.

//Remember if you're doing this you need six (6) lights. You could also use two separate breadboards with the north-facing light on one and the west-facing on the other. But, remember to ground each or the circuit won't work. 

// variables
int GREEN = 3;
int YELLOW = 4;
int RED = 5;
int GREEN_N = 8;
int YELLOW_N = 7;
int RED_N = 6;
int DELAY_GREEN_01 = 250;
int DELAY_GREEN = 8000;
int DELAY_YELLOW = 1000;
int DELAY_RED = 8000;
int DELAY_RED_N = 13750;
int DELAY_CLEAR_INTERSECTION = 1500;

// basic functions
void setup() 
{
  // setup LED modes
  // we're specifying that we're going to send information to this LED 
  //this is the "west-facing" light with an advanced green
  pinMode(GREEN, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(RED, OUTPUT);
  //this the "north-facing" (hence the "_N") light with an advanced green
  pinMode(GREEN_N, OUTPUT);
  pinMode(YELLOW_N, OUTPUT);
  pinMode(RED_N, OUTPUT);
}

void loop() 
{
  // High turns things on
  // Low turns things off

//this is the west-facing light and its routine

 // we turn the north-facing light on before the advanced green
  digitalWrite(RED_N, HIGH);
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

  // we're turning both red lights on now so the intersection can clear
  digitalWrite(RED, HIGH);
  //this gives a slight delay with both reds on while intersection clears
  delay(DELAY_CLEAR_INTERSECTION);
  
  // this turns the north-facing red off and allows for the sequence of the north-facing light to begin
  digitalWrite(RED_N, LOW);
  
  
   // High turns things on
  // Low turns things off

  // This the north-facing (or _N) intersection - the one going the other way
  
 // this turns the west-facing red on so that the north-facing can run the sequence
 digitalWrite(RED, HIGH);
 // advanced green for left turn - repeat code block as needed
  digitalWrite(GREEN_N, HIGH);   // sets the LED on
  delay(DELAY_GREEN_01);       // waits for a second
  digitalWrite(GREEN_N, LOW);    // sets the LED off
  delay(DELAY_GREEN_01);           
  digitalWrite(GREEN_N, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN_N, LOW);    
  delay(DELAY_GREEN_01);           
  digitalWrite(GREEN_N, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN_N, LOW);    
  delay(DELAY_GREEN_01);           
  digitalWrite(GREEN_N, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN_N, LOW);    
  delay(DELAY_GREEN_01);           
  digitalWrite(GREEN_N, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN_N, LOW);    
  delay(DELAY_GREEN_01);      
  digitalWrite(GREEN_N, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN_N, LOW);    
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN_N, HIGH);   
  delay(DELAY_GREEN_01);       
  digitalWrite(GREEN_N, LOW);    
  delay(DELAY_GREEN_01);            

// normal traffic light function from here on
  
  digitalWrite(GREEN_N, HIGH);
 // how long we want the green led on
  delay(DELAY_GREEN);
  
  digitalWrite(GREEN_N, LOW);
  digitalWrite(YELLOW_N, HIGH);
  digitalWrite(RED_N, LOW);
  // how long we want the yellow led on
  delay(DELAY_YELLOW);

  digitalWrite(GREEN_N, LOW);
  digitalWrite(YELLOW_N, LOW);
  digitalWrite(RED_N, HIGH);

  //this gives a slight delay with both reds on while intersection clears
  delay(DELAY_CLEAR_INTERSECTION);

//turns off red west-facing so that signal can proceed through sequence going North
  digitalWrite(RED, LOW);

// from here we loop back to the beginning
  
}

