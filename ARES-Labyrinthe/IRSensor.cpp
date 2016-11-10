#include "IRSensor.h"
#include <arduino.h>

IRSensor::IRSensor(int pin)
{
	this->pin = pin;
	
	pinMode(this->pin, INPUT);
}
		
const bool IRSensor::isObstacle() const
{
	return (digitalRead(this->pin) == LOW ? true : false);
}