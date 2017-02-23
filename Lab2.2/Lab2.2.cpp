// Todd Zwald
// 2/23/17
/*
    This program uses time for a reference when choosing a random number so that
    when a number is generated, the probability of multiple numbers generated 
    being the same are minute to impossible
*/


#include <iostream>
#include <cstdlib>  //Allows use of random generator
#include <ctime>    // Allows use of time
using namespace std;


// Function that holds the random number generator to allow numbers between 1-100
// And be used multiple times if needed to be called in the main program
void randomNumberGenerator() {
    
    int userRandomNum;
    
    userRandomNum = ((rand() % 100) + 1); // Equation for random number generator
    
    cout << "Your Random Number Is: " << userRandomNum << endl;
    
    return;
};

int main(){
    srand(time(0)); // Uses time as its referance
    
    randomNumberGenerator(); // Call of random number generator function
    
}