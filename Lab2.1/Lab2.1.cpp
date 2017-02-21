// Todd Zwald
// 2/21/17
/*
    This program will allow the user to input a temperature value and a wind
    velocity value. It will then take those numbers and add them to the 
    equations for the Old Style wind Chill and the New Style Wind Chill and 
    output what that factor will be. Afterwards, it will take that information
    and put it into colums to show what the temperature and velocity were, the
    wind chill factors are, and the difference between those chill factors
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double velocity;        // Holds wind velocity value
    double tempFahrenheit;  // Holds temperature in Fahrenheit
    
    
    // Asks for user input for temperature and velocity
    cout << "Enter in temperature as fahrenheit: ";
    cin >> tempFahrenheit;
    cout << endl << "Enter in Velocity: ";
    cin >> velocity;
    cout << endl;
    
    
    // variables for wind chill equations as well as the deffirence
    double oldStyleWindChill = 0.081 * (3.71 * sqrt(velocity) + 5.81 - 0.25 * velocity) * (tempFahrenheit - 91.4) + 91.4;
    double newStyleWindChill = 35.74 + 0.6215 * tempFahrenheit - 35.75 * pow(velocity, 0.16) + 0.4275 * tempFahrenheit * pow(velocity, 0.16);
    double differenceOfChill = oldStyleWindChill - newStyleWindChill;
    
    
    // Shows all values in a column form
    cout << "Temperature    " << "    Velocity    " << "    Old Wind Chill Factor    " 
         << "    New Wind Chill Factor    " << "Difference of Wind Chill Factor" 
         << endl;
    cout << "    " << tempFahrenheit << "                 " << velocity 
         << "                 " << oldStyleWindChill << "                      " 
         << newStyleWindChill << "                   " << differenceOfChill;
}