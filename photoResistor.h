

#ifndef PHOTORESISTOR
#define PHOTORESISTOR

#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
  #include <pins_arduino.h>
#endif

class photoResistor{

public:

 int setPin(int pin);
 void initSensor();
 int readValue();

private:
  int PHOTO_PIN;

};




int photoResistor::setPin(int pin){

  PHOTO_PIN = pin;
}
void photoResistor::initSensor(){

   pinMode(PHOTO_PIN, INPUT);
}

int photoResistor::readValue(){

  return analogRead(PHOTO_PIN);
}

#endif
