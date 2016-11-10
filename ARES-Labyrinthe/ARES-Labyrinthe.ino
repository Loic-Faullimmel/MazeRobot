#include "IRSensor.h"


/*
 * Constantes générales concernant le robots (Ex. dimension des roues, etc..
 */


/*
 * Capteurs Infrarouge
 */
 
static const unsigned short MAX_IR_SENSORS 1
static IRSensor* sensor[MAX_IR_SENSORS];
static unsigned short sensorPin[MAX_IR_SENSORS] =  { 2 };

void setup() {

  for(int i {0}; i < MAX_IR_SENSORS;i++)
  {
    sensor[i] = new IRSensor(sensorPin[i]);
  }

  Serial.begin(9600);
  
}

void loop() 
{
  for(int i {0}; i < MAX_IR_SENSORS;i++)
  {
    if(sensor[i]->isObstacle())
    {
      Serial.println("OBSTACLE!!, OBSTACLE!!");
    }
      
  }

  delay(200);
  
}

