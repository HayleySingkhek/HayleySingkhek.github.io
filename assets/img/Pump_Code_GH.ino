#include<AccelStepper.h>

AccelStepper stepper(AccelStepper::DRIVER, 3, 2);
int red_LED = 11;
int green_LED = 9;
int blue_LED = 10;
int latching_button = 12;
int latching_switch = 7;


void setup() {
  // put your setup code here, to run once:
  stepper.setMaxSpeed(4000);     //unit: steps/sec
  stepper.setSpeed(200);        // constant speed to run the motor at whenever runSpeed() is called
  //stepper.moveTo(long absolute);
  pinMode(latching_button, INPUT_PULLUP);
  pinMode(latching_switch, INPUT_PULLUP);
  pinMode(red_LED, OUTPUT);
  pinMode(green_LED, OUTPUT);
  pinMode(blue_LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if((digitalRead(latching_button) == LOW) && ((digitalRead(latching_switch) == HIGH))){
    analogWrite(blue_LED, 0);
    analogWrite(red_LED, 0);
    analogWrite(green_LED, 255); 
    stepper.runSpeed();  
  } 
  else {
    analogWrite(green_LED, 0);
    if(digitalRead(latching_button) == HIGH){
      analogWrite(blue_LED, 255); 
    } 
    else{
      analogWrite(red_LED, 255);
    }
  }
}
