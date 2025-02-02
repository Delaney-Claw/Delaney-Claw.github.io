// Team Concoction
#include <AccelStepper.h>
#include <LiquidCrystal.h>// include the library code
LiquidCrystal lcd(1, 4, 6, 7, 12, 13);
 float syringeSize = 20.0; // the capacity of the syringe, in mL.
bool usingBigSyringe = true;
float bigSyringeMultiplier = usingBigSyringe ? (200.0 / 120.0) : 1;
AccelStepper stepper(AccelStepper::DRIVER, 3, 2);
// pin 3 is the step input, pin 2 is the direction input
float flowRate = (6 * 10)/3;
// the current flow rate of the pump
// adjust for microstepping
int red_LED = 11;
int blue_LED = 9;
int green_LED = 10;
// the pins for the different colors for the LED
int button = 5;
// the pin for the first button
int endButton = 8;
// the button that detects if the pump has reached the end of the cycle
bool isPaused = false;
unsigned long startPause = 0;
unsigned long elapsedPause = 0;
void setup() {
  pinMode(red_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(endButton, INPUT_PULLUP);
  stepper.setMaxSpeed(1000);
  stepper.setSpeed(flowRate * 50 / 3);
  lcd.begin(20, 4);
}
void loop() {
  int timeRemaining = ceil(syringeSize*60/flowRate*10.0/(3 *
bigSyringeMultiplier) - millis()/1000 + elapsedPause/1000);
 
     timeRemaining = max(timeRemaining, 0);
    lcd.setCursor(0,0);
    lcd.print("**Team Concoction**");
    lcd.setCursor(0,1);
    lcd.print("Flow rate:");
    lcd.setCursor(11,1);
    lcd.print((int)(flowRate*3/10*bigSyringeMultiplier));
    lcd.setCursor(0, 2);
    lcd.print("Time until end (s): ");
    if(!isPaused){
      lcd.setCursor(0,3);
      if(timeRemaining >= 100){
      }
      else if (timeRemaining >= 10){
        lcd.print(" ");
      }
      else {
        lcd.print("  ");
}
      lcd.print(timeRemaining);
    }
    else {
      int currTime = ceil(syringeSize*60/flowRate*10.0/(3 *
bigSyringeMultiplier) - startPause/1000 + elapsedPause/1000);
      lcd.setCursor(0,3);
      if(currTime >= 100){
      }
      else if (currTime >= 10){
        lcd.print(" ");
      }
      else {
        lcd.print("  ");
}
 
lcd.print(max(currTime, 0));
    }
  if(digitalRead(endButton) == LOW){ // you have reached the end
    if(!isPaused){
        isPaused = true;
        startPause = millis();
    }
    analogWrite(green_LED, 0);
    analogWrite(red_LED, 255);
    analogWrite(blue_LED, 0);
} else {
    if(digitalRead(button) == LOW){ // you are not at the end sensor
      if(isPaused){
        isPaused = false;
        elapsedPause += millis() - startPause;
      }
      analogWrite(green_LED, 255);
      analogWrite(red_LED, 0);
      analogWrite(blue_LED, 0);
      stepper.runSpeed(); // you should step now
      }
    else { // pause because you are not at the end yet
      if(!isPaused){
        isPaused = true;
        startPause = millis();
      }
      analogWrite(red_LED, 255);
      analogWrite(green_LED, 127);
      analogWrite(blue_LED, 0);
} }
}