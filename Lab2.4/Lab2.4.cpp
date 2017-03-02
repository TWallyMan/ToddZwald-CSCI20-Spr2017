// Todd Zwald
// 3/2/17
/*
    This programs has the user input two random numbers. It then takes those
    numbers, swaps them around and then runs them through a random number
    generator. After that, the random number is then set as the total amount
    of pounds being used, put into a conversion function to change the number
    into kilograms, outputed, then placed into another function to change it
    from kilograms back into pounds.
*/

#include <iostream>
#include <cstdlib>  //Allows use of random generator
#include <ctime>    // Allows use of time
using namespace std;

// Function call for later definition
void swappingNumber(int& lowerNum, int& higherNum); 
int randomNumberGenerator(int lowerNum, int higherNum);
double poundsToKilograms(double totKilograms);
double kilogramsToPounds(double totPounds);

int main(){
    
    int userNum1;
    int userNum2;
    double userRandomNum;
    double totPounds;
    double totKilograms;
    
    cout << "Enter in 2 different numbers starting with a lower number: ";
    cin >> userNum1 >> userNum2;
    cout << endl;
    
    //Call of function for user input numbers to output random number
    userRandomNum = randomNumberGenerator(userNum1, userNum2); 
    
    cout << "Your random number is: " << userRandomNum << endl << endl;
    
    cout << "Pounds are: " << userRandomNum << endl << endl;
    
    userRandomNum = poundsToKilograms(userRandomNum);
    
    cout << "Killograms are: " << userRandomNum << endl << endl;
    
    userRandomNum = kilogramsToPounds(userRandomNum);
    
    cout << "Pounds are: " << userRandomNum << endl << endl;
    
    
}

// Function that takes the input values from randomNumberGenerator and swappes
// them to then be passed back to the randomNumberGenerator
void swappingNumber(int& lowerNum, int& higherNum){
    
    int uselessNum1 = lowerNum;
    
    lowerNum = higherNum;
    higherNum = uselessNum1;
    
    return;
    
};

/*
    Function that takes the original values from user, that then passes those
    values into the sawppingNumber function to be changed around and passed back
    and then finaly put through the random number equation and passed back into
    the main for a final output
*/

int randomNumberGenerator(int lowerNum, int higherNum) {
    
    int userRandomNum;
    
    swappingNumber(lowerNum, higherNum);
    
    srand(time(0)); // Uses time as its referance
    
    // Equation for random number generator
    userRandomNum = ((rand() % (lowerNum - higherNum)) + higherNum); 
    
    return userRandomNum;
};

// Converts generated number from pounds to kilograms
double poundsToKilograms(double totKilograms){
    
    double convertedKilograms;
    
    convertedKilograms = totKilograms / 2.2046;
    
    return convertedKilograms;
    
};

// Converts generated number from kilograms to pounds
double kilogramsToPounds(double totPounds){
    
    double convertedPounds;
    
    convertedPounds = totPounds * 2.2046;
    
    return convertedPounds;
    
};