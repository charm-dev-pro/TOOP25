// Name: Giselle Johnson
// Program: TOOP25
// Date: 11/28/23

#include <Arduino.h>
#include <Pololu3piPlus32U4.h>
#include <Pololu3piPlus32U4IMU.h>

using namespace Pololu3piPlus32U4;

// OLED object
OLED display;


// Example Robot class
class exampleRobot{
  private:
  String line1;

  // Create public constructor to be accessible
  public:
  exampleRobot();

  // set line function
  void setline(String a){
    line1 = a;
  }

  // Display the line function
  void displine(){
    display.print(line1);
  }

};

// Constructor
exampleRobot::exampleRobot(){
  Serial.begin(9600);
  display.init();
  display.setLayout21x8();
  display.gotoXY(0,1);
}

// Create exampleRobot instance
exampleRobot Robo;

// Setup function with line
void setup(){
  Robo.setline("Go Bears!");
}

// Void loop to display
void loop(){
  Robo.displine();
  delay(5000);
  display.clear();
}
