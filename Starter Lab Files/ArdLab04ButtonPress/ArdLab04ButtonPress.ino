/**
 * Name: 
 * 
 * Date:        Period: 
 * 
 * Lab: ArdLab04PushButton
 *
 * Description: This sketch will show you how to connect a push button using
 *              pull up mode. This lab also introduces conditional statements,
 *              using a counter and the post-incrementer.
 *              This lab will be helpful later during the joke lab. 
 *              
 *              For you to do: Complete the code where it says "/* you fill this in * /"
 *              Compile, you should get an error, Find it and Fix it.
 *              Add a 4th button press that creates a random color.
 *              Pattern should go: Red, Green, Blue, Random, Off
 *              the random color should flash red, green, blue, yellow, white, turquiose, magenta or off, 
 * 
 */

// First we'll set up constants for the pin numbers.
// This will make it easier to follow the code below.

// pushbutton pin
const int BUTTONPIN = 3;

//RGB LED digital output pins
const int REDPIN = 11;
const int GREENPIN = 10;
const int BLUEPIN = 9;

//TODO #0 connect an RGB LED using the pins above. 
//Then connect the button using the diagram in the slide deck

//create a variable to store a counter and set it to 0
int counter = 0;

void setup()
{
  // Set up the pushbutton pins to be an input:
  pinMode(BUTTONPIN, INPUT);

  // Set up the RGB pins to be a outputs:
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}


void loop()
{
  // local variable to hold the pushbutton states
  int buttonState;

  //read the digital state of BUTTONPIN with digitalRead() function and store the           
  //value in buttonState variable
  buttonState = digitalRead(BUTTONPIN);

  //if the button is pressed increment counter and wait a tiny bit to give us some          
  //time to release the button then light the LED
  if (buttonState == LOW)
    counter = counter + 1;
    delay(150);
  }

  //use the if satement to check the value of counter. If counter is equal to 0 all         
  if (counter == 0)
  {
    digitalWrite(REDPIN, LOW);
    digitalWrite(GREENPIN, LOW);
    digitalWrite(BLUEPIN, LOW);
  }

  //else if counter is equal to 1, REDPIN is HIGH
  else if (counter == 1)
  {
    digitalWrite(REDPIN, HIGH);
    digitalWrite(GREENPIN, LOW);
    digitalWrite(BLUEPIN, LOW);
  }

  //else if counter is equal to 2 GREENPIN is HIGH
  else if (counter == 2)
  {
    //TODO #1 Complete the code to set the LED to Green
    digitalWrite(/*you fill this in*/);
    digitalWrite(/*you fill this in*/);
    digitalWrite(/*you fill this in*/);
  }

  //else if counter is equal to 3 BLUEPIN is HIGH
  else if (counter == 3)
  {
    //TODO #2 set the RGB LED to Blue
   

    
  }
  // TODO #3 - Add code for a 4th color that genereates a random RGB value
  //look back at the previous labs for reference about random()
  //note that now we are using a digitalwrite rather than analogwrite
  //meaning that instead of a range from 0-255 for each RG or B
  //you need a digital or binary value of 1 (HIGH) or 0 (LOW) 

  

  //else reset the counter to 0 (which turns all pins off)
  else
  {
    counter = 0;
  }
  delay(150);
}
