// Todd Zwald
// 5/7/17
/*
    This program uses cstring to creat a user name using whatever the user
    inputs and then gives them a random number
*/

#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;



int main(){
    
    srand(time(0)); //uses time as reference for random number generator
    int randomNumber = ((rand() % 9999) + 1); // produces a random number
    char firstName[10];
    char lastName[10];
    
    cout << "Please enter your first name: ";
    cin >> firstName;
    cout << endl;
    
    if(strlen(firstName) > 10){
        cout << "I'm sorry, that name is too long, please enter a name 10 characters or less" << endl;
        cin >> firstName;
    }
    
    cout << "Please enter your last name: ";
    cin >> lastName;
    cout << endl;
    
    if(strlen(lastName) > 20){
        cout << "I'm sorry, that name is too long, please enter a name 20 characters or less" << endl;
        cin >> lastName;
        cout << endl;
    }
    
    if(firstName == lastName){
        cout << "You have set your names as the same, just as a heads up" << endl;
    }
    
    cout << "Good, now that we have your name, we will give you some options to chose from: " << endl;
    cout << firstName << lastName << endl;
    cout << lastName << firstName << endl;
    cout << firstName << randomNumber << endl;
    cout << lastName << randomNumber << endl;
    
}