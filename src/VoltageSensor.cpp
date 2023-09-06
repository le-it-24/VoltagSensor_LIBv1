



/*
* VoltageSensor.h
*
* Leonard K. Ebron
* LE.it.pro@outlook.com
* 
* Wednesday, 6TH September 2023
*/




////////////////////////// VoltageSensor.cpp App Dependencies //////////////////////////////////////


#include <Arduino.h>
#include <VoltageSensor.h>


// Vout = Vin * R2/R1 + R2




////////////////////////// VoltageSensor Getters and Setter Definitions //////////////////////////////////////


// Method to set value of R1 in voltage divider.
void VoltageSensor::set_resistor1_val(double value)
{
  resistor1 = value;
}


// Method to set value of R1 in voltage divider.
void VoltageSensor::set_resistor2_val(double value)
{
  resistor2 = value;
}


// Method to set pin for ADC readings.
void VoltageSensor::set_ADCpin(unsigned int thisPin)
{
  ADCpin = thisPin;
}


// Method to get Vsense value.
double VoltageSensor::get_Vsense()
{


  // Setup calculation records.
  uint16_t ADC_VALUE;

  
  // Calculate sensed volatge at ADC.
  ADC_VALUE = analogRead(ADCpin);
  double voltage = (ADC_VALUE * 3.3) / 4095;
  Vsense = voltage;


  return Vsense;


}


// Method to get value for voltage input from Voltage sensor.
double VoltageSensor::get_Vin()
{


  // Vout = Vin * R2/R1 + R2
  // (R1 + R2) * Vout = Vin * R2
  // (R1 + R2) * Vout/R2 = Vin
  
   
  Vin = 
}


void setup() {
  // put your setup code here, to run once:
  int result = myFunction(2, 3);
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}