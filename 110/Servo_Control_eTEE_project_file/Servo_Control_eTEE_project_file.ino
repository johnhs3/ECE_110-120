/* =======================================================
 *  CONTROL PROGRAM FOR eTEE's Inner Workings (Servo, redboard, powershield
 *  ======================================================
 *  by John Smith (10-31-2019)
 *  
 *  NOTE: This sketch is a combination / modification of multiple other sketches, including:
 *  Sweep
      by BARRAGAN <http://barraganstudio.com>
      This example code is in the public domain.
    AND
    Button
    modified 8 Nov 2013
      by Scott Fitzgerald
      http://www.arduino.cc/en/Tutorial/Sweep

     Credits to Michael C (??? lastname) for code tips relating to the DC motor!!!
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int in1=12;
int in2=10;
int enPin=11;

int pos = 0;    // variable to store the servo position
int const minPos = 70; //Create min and max variables for position, CHANGE THESE TO ADJUST POSITION!!!!!
int const maxPos = 130;
// set pin numbers:
const int buttonPin = 4;     // Set BUTTON PIN!!!
// variables will change:
int buttonState = 0;         

void setup() {
 myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    // turn LED on:
    myservo.write(maxPos);
    digitalWrite(13,HIGH);

    analogWrite(enPin,255);
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
   
    delay(15);
  } else {
    // turn LED off:
    myservo.write(minPos);
    digitalWrite(13,LOW);

    analogWrite(enPin,0);
    digitalWrite(in1,LOW);
    digitalWrite(in2,LOW);
    
    
    delay(15);
  }
  
  
  //for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
  //  myservo.write(pos);              // tell servo to go to position in variable 'pos'
    //delay(15);                       // waits 15ms for the servo to reach the position
 // }
 // for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    //myservo.write(pos);              // tell servo to go to position in variable 'pos'
    //delay(15);                       // waits 15ms for the servo to reach the position
  //}
}
