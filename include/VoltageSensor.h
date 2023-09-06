



/*
* VoltageSensor.h
*
* Leonard K. Ebron
* LE.it.pro@outlook.com
* 
* Wednesday, 6TH September 2023
*/




class VoltageSensor // Defines a class of voltage divider based input voltage sensing device objects.
{




    private:




        // Voltage divider components:


        double resistor1; // Value of resistor (in ohms) closest to the input voltage supply (The voltage to be calculated).
        double resistor2; // Value of resistor2 (in ohms).


        // Sensor Components.
        unsigned int ADCpin; // Pin where Vsense reading is taken.


        // Voltage divider attributes:


        double Vin; // The input voltage, this needs to be calculated.
        double Vsense; // This is the voltage measured at the ADC input. This parameter is used, with resistor1-2, to calculate
                       // Vin.




    public:


        // Getters and Setter methods of VoltageSensor.


        void set_resistor1_val(double value);
        void set_resistor2_val(double value);
        void set_ADCpin(unsigned int thisPin);


        double get_Vsense();
        double get_Vin();
        
        
            
        
};