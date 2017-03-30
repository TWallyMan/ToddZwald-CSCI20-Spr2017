// Todd Zwald
// 3/30/17
/*
    This program produces a random number between 1 and 100. It then asks for
    the user to input a number. Depending on their choice, the rpogram will
    determine if the user needs to pick another number that is higher
    or lower than the one they previousely chose. This will continue until the
    user finally picks the randomly generated number.
*/

#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// Function that uses time to produce a random number every time the program is
// started
int randomNumberGenerator() {
    
    int randomNum;
    randomNum = ((rand() % 100) + 1); // Equation for random number generator
    return randomNum;
};

int main(){
    
    srand(time(0)); // Uses time as its referance
    int randomNum = randomNumberGenerator(); // Stores the rancom number for use
    int userNumToGuessWith; //User input to guess
    
    cout << "Pick a number between 1 and 100: ";
    cin >> userNumToGuessWith;
    cout << endl;
    
    // For Loop repeats winning statement until limit is reached
    for(int repeatedWinningThing = 0; repeatedWinningThing < 25; ++repeatedWinningThing){
        // While loop that compares userNumToGuessWith and randomNum
        //This also limits the numbers to be between 1 and 100
        while(userNumToGuessWith != randomNum){
        
            if(userNumToGuessWith < 0 || userNumToGuessWith > 100){
                cout << "PICK A NUMBER BETWEEN 1 AND 100!!!! IT'S NOT THAT HARD" << endl;
            }
            else if(userNumToGuessWith < randomNum){
                cout << "Choose a bigger number" << endl;
            }
            else if(userNumToGuessWith > randomNum){
                cout << "Choose a smaller number" << endl;
            }
            else{
                cout << "YOU PICKED THE RIGHT NUMBER!!!!" << endl;
            }
            
            cout << "Pick a number between 1 and 100: ";
            cin >> userNumToGuessWith;
            cout << endl;
        }
        
        cout << "You have won the game!!!!"  << endl;
    }
    
}

