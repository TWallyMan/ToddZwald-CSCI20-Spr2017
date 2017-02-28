// Todd Zwald
// 2/28/17
/*
    This program ask the user for two inputs, preferably ones that are at least
    10 digits apart and starting the the first number always being lower than
    the second number
    It then takes those two values, inputs them into the randumNumberGenerator
    function. From there, the values are passed into the swpping function
    to be switched around, then passed back to the random generator to finaly
    output a random number between the originally picked two numbers
*/

#include <iostream>
#include <cstdlib>  //Allows use of random generator
#include <ctime>    // Allows use of time
using namespace std;

// Function call for later definition
void swappingNumber(int lowerNum, int higherNum); 

// Function call for later definition
void randomNumberGenerator(int& lowerNum, int& higherNum);

int main(){
    
    int userNum1;
    int userNum2;
    
    cout << "Enter in 2 different numbers starting with a lower number: ";
    cin >> userNum1 >> userNum2;
    cout << endl;
    
    //Call of function for user input numbers to output random number
    randomNumberGenerator(userNum1, userNum2); 
    
    
}

// Function that takes the input values from randomNumberGenerator and swappes
// them to then be passed back to the randomNumberGenerato
void swappingNumber(int lowerNum, int higherNum){
    
    int uselessNum1;
    int uselessNum2;
    
    uselessNum1 = higherNum;
    uselessNum2 = lowerNum;
    
    higherNum = uselessNum2;
    lowerNum = uselessNum1;
    
    return;
    
};

/*Function that takes the original values from user, that then passes those
    values into the sawppingNumber function to be changed around and passed back
    and then finaly put through the random number equation and passed back into
    the main for a final output
*/

void randomNumberGenerator(int& lowerNum, int& higherNum) {
    
    int userRandomNum;
    
    swappingNumber(lowerNum, higherNum);
    
    srand(time(0)); // Uses time as its referance
    
    // Equation for random number generator
    userRandomNum = ((rand() % higherNum) + lowerNum); 
    
    cout << "Your random number is: " << userRandomNum;
    
    return ;
};