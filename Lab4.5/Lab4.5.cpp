// Todd Zwald
// 4/25/17
/*
    This program is used for the user to input their name. The program then
    takes that information and changes a few things like using full name,
    first letter of your first name and your full last name, or your full 
    first name and the first letter in your last name. All of these are ended
    with the same random number that was generated.
*/

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    
    srand(time(0)); //uses time as reference for random number generator
    
    string firstName;
    string lastName;
    int randomNumber = ((rand() % 9999) + 1); // produces a random number
    
    cout << "Please enter your first name: " << endl;
    getline(cin, firstName);
    
    //makes sure the first name is not longer than 10 letters long
    if(firstName.length() > 10){
        cout << "That name is too long, please enter a name less than 10 characters" << endl;
        getline(cin, firstName);
        cout << endl;
        
    }
    // asks for the last name
    else{
        cout << "Now enter in your last name:" << endl;
        getline(cin, lastName);
        cout << endl;
        
        // makes sure the last name is not longet than 20 letters
        if(lastName.length() > 20){
            cout << "That name is too long, please enter a name less than 20 characters" << endl;
            getline(cin, lastName);
        }
        
        // compares first name and last name and outputs a statement if same
        if(firstName == lastName){
        cout << "First name and last name are the same" << endl;
        }
    }
    
    cout << "The full name you have entered is " << firstName << " " << lastName << endl << endl;
    cout << "Yout potential usernames are: " << endl;
    cout << firstName << lastName << randomNumber << endl;
    cout << firstName.at(0) << lastName << randomNumber << endl;
    cout << firstName << lastName.at(0) << randomNumber << endl;
    
}