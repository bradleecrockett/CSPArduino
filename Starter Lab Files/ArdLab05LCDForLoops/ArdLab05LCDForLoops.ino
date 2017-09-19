/**
 * Name:
 * 
 * Date:      Period: 
 * 
 * Lab: ArdLab05LCDForLoops
 * 
 * Description: In this lab you will learn to connect and print to the LCD
 *              Liquid Crystal Display.  
 *              
 *              The purpose of the lab is to practice using for loops.
 *              
 *              Wire the circuit so that you can print to the LCD.
 *              #1 and #2 There are currently 2 loops in the code, 
 *              add a comment above each to describe what it does. 
 *              
 *              Clear the screen.
 *              #3 Create a third for loop that counts backwards from 10 to 0 on 
 *              line 1 (no autoscroll)
 *              
 *              #4 Create a 4th for loop that counts from 32 to 52 by twos  on 
 *              line 2 (with autoscroll)
 *              
 * 
 *    The circuit:
 *    LCD RS pin to digital pin 12
 *    LCD Enable pin to digital pin 11
 *    LCD D4 pin to digital pin 5
 *    LCD D5 pin to digital pin 4
 *    LCD D6 pin to digital pin 3
 *    LCD D7 pin to digital pin 2
 *    LCD R/W pin to ground
 *    10K resistor:
 *    ends to +5V and ground
 *    wiper to LCD VO pin (pin 3
 */

// include the library code: 
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
  // set the cursor to (0,0) the upper left corner.
  lcd.setCursor(0, 0);
  
  //#1 Describe what this for loop does
  for (int num = 0; num < 10; num++) {
    lcd.print(num);
    delay(500);
  }

  // set the cursor to (16,1):
  lcd.setCursor(16, 1);
  // set the display to automatically scroll:
  lcd.autoscroll();
  
  //#2 Describe what this loop does
  for (int counter = 0; counter < 100; counter++) {
    if(counter % 5 = 0){
      lcd.print(counter);
      delay(500);
    }
    
  }
  // turn off automatic scrolling
  lcd.noAutoscroll();

  // clear screen for the next loop:
  lcd.clear();

  //#3 Create a third for loop that counts backwards from 10 to 0 on 
  //line 1 (no autoscroll)

  

  //#4 Create a 4th for loop that counts from 32 to 52 by twos  on 
  //line 2 (with autoscroll)

  

  // turn off automatic scrolling
  lcd.noAutoscroll();

  // clear screen for the next loop:
  lcd.clear();
}

