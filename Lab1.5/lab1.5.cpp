//Todd Zwald
// 2/9/17
/*

This program is to allow a user to input a specific set of names, numbers and
objects that will then take those, and put them into a pre-formed madlib to
complete the sentencse

*/

#include <iostream>
#include <string>
using namespace std;


string personName;   // For entering a persons name
string placeName;    // For entering in a locations name
int smallNumber;     // For entering in a number between 1-10
int bigNumber;       // For entering in a number between 100-200
string smallObject;  // For entering in a small objects name
string bigObject;    // For entering in a big objects name
string fruitName;    // For entering in a fruits name

int main() {
    
    //User input of personName
    cout << "Enter in a persons name : ";
    cin >> personName;
    cout << endl;
    
    //User input of placeName
    cout << "Enter in a name of a place: ";
    cin >> placeName;
    cout << endl;
    
    //User input for smallNumber
    cout << "Enter in a number between 1 and 10: ";
    cin >> smallNumber;
    cout << endl;
    
    // User input of bigNumber
    cout << "Enter in a number between 100 and 200: ";
    cin >> bigNumber;
    cout << endl;
    
    //User input of smallObject
    cout << "Enter in name of small object: ";
    cin >> smallObject;
    cout << endl;
    
    //User input of bigObject
    cout << "Enter in name of big object: ";
    cin >> bigObject;
    cout << endl;
    
    //User input of fruitName
    cout << "Enter in name of fruit: ";
    cin >> fruitName;
    cout << endl;
    
    // Used for buffer between answers to questions and when used in madlib
    cout << "Here is your addlib!!!!!" << endl;
    cout << endl;
    cout << endl;
    
    
    //Codes used to output answers for madlib to form the full paragraph
    
    cout << personName << " went down to " << placeName << " to buy some "
    << fruitName << "s." << endl;
    
    cout << "When he got there, he saw that there were only " << smallNumber
    << " left." << endl;
    
    cout << personName << " walked up to a salesman and asked if they had anymore "
    << fruitName << "s in the back." << endl;
    
    cout << "The salesman unfortunately only gave 0 fucks, so he tried to sell " 
    << personName << " " << bigNumber << " " << bigObject << "s." << endl;
    
    cout << personName << " was not happy so he told the salesman to go fuck himself with "
    << bigNumber << " " << smallObject << "s." << endl;
    
    cout << "Unfortunately for " << personName << ", this meant that he was never going to get the "
    << fruitName << "s that he wanted.";
    
    
    
}