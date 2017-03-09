// Todd Zwald
// 3/9/16
/*
    This program uses the class TemperatureConverter to convert fahrenheit to
    celsius and kelvin, celsius to fahrenheit and kelvin, and kelvin to celsius
    and fahrenheit. The final function outputs all o fhte information that was 
    used in the main and will show each temepature after it has been converted
*/
#include<iostream>
using namespace std;

/*
    This class holds all of the temperature conversion functions, as well as
    their respective parameters to allow the main to input arguments. There are
    also all of the necessary accessors and mutators for each conversion
*/

class TemperatureConverter{
    
    private:
    
        double kelvin_; // variable that holds kelvin temperature for overall use
    
    public:
        
        TemperatureConverter(){   // Defaultconstructor
            kelvin_ = 0;
        }
        TemperatureConverter(double tempKelvin){ //Overloaded Constructor
            kelvin_ = tempKelvin;
        }
        
        void SetTempFromCelsius(double tempCelsius){ //converts celsius to kelvin
            kelvin_ =  tempCelsius + 273.15;
            return;
        }
        double GetTempAsCelsius(){ // Gets temperature as celsius from kelvin
            double tempCelsius;
            tempCelsius = kelvin_ - 273.15;
            return tempCelsius;
        }
        
        // converts fahrenheit to kelvin
        void SetTempFromFahrenheit(double tempFahrenheit){
            kelvin_ = (5 * (tempFahrenheit - 32 ) / 9) + 273.15;
            return;
        }
        double GetTempAsFahrenheit(){ //gets temperature as fahrenheit from kelvin
            double tempFahrenheit;
            tempFahrenheit = (((kelvin_ - 273.15) * 9) / 5 + 32);
            return tempFahrenheit;
        }  
        
        // keeps kelvin temperature in kelvins
        void SetTempFromKelvin(double kelvinTempSet){
            kelvin_ = kelvinTempSet;
            return;
        }
        double GetTempFromKelvin(){ // returns kelvin temperature
            return kelvin_;
        }
        
        // prints all values when value has input from main
        void PrintTemperatures(){
            cout << GetTempFromKelvin() << " Kelvin" << endl;
            cout << GetTempAsCelsius() << " Celsius" << endl;
            cout << GetTempAsFahrenheit() << " Fahrenheit" << endl << endl;
        }
    
};




/* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
 */
 
#include<iostream>
//#include "lab9.cpp"
using namespace std;

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}