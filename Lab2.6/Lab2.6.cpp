#include<iostream>
using namespace std;

class TemperatureConverter{
    
    private:
    
        double kelvin_;
    
    public:
        
        void TemperatureConverter(){   // Defaultconstructor
            kelvin_ = 0;
        }
        double TemperatureConverter(double tempKelvin){ //Overloaded Constructor
            kelvin_ = tempKelvin;
        }
        
        void SetTempFromCelsius(double tempCelsius){
            kelvin_ =  tempCelsius + 273.15;
            return;
        }
        double GetTempAsCelsius(){
           tempCelsius = kelvin_ – 273.15;
           return tempCelsius;
        }
        
        void SetTempFromFahrenheit(double tempFahrenheit){
            kelvin_ = (5 * (tempFahrenheit - 32 ) / 9) + 273.15;
            return;
        }
        double GetTempAsFahrenheit(){
            tempFahrenheit = ((( kelvin_ – 273.15) * 9) / 5 + 32);
            return ;
        }  
        
        void SetTempFromKelvin(double kelvinTempSet){
            
        }
        double GetTempFromKelvin(){
            
        }
        
        void PrintTemperatures(){
            cout << GetTempFromKelvin()    << "K" << endl;
            cout << GetTempAsCelsius()     << "C" << endl;
            cout << GetTempAsFahrenheit()  << "F" << endl;
        }
    
}




/* Created By: April Browne
 * Created On: 9/22/2016
 * This program will run the Temperature Converter Class
 */
 
#include<iostream>
#include "lab9.cpp"
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