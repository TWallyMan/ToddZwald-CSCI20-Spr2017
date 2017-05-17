#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    // creates pointer location
    // put in [nameLength] since it needs a variable
    char * name = new char[nameLength]; 
    
    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name; // points head to name
    char * tail = name; // points tail to name
    nameLength = strlen(name); // strlen does not exhist and its supposed to be  name not *name

    cout << "Your word is " << firststr << endl; // firststr is not declared

    if (nameLength < 10){
        while (*head != '\0'){ //I'm not sure what this does but maybe makes sure you don't use more than 10 letters?
            cout << *head; // outputs what is in *head
            head++; // why does it add 1 to head?
        }
    }
    else{
        cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
    }

    cout << endl;

    tail = &name[strlen(name) - 1]; // sets tail to memory location of name and removes one location from the array

    if (nameLength < 10){
          while (tail != name){ // as long as tail is not the same as name
            cout << *tail; // outputs what is in *tail
            tail--; // removes one from tail?
        }
    }
    cout << endl;

    head = name; // sets heada to name
    tail = &name[strlen(name) - 1]; // sets tail so name address

    head++; 
    tail--;
    // Outputs if the words are the same front to back
    if (*head == *tail){
        cout << "It is an palindrome!" << endl;
    }
    // Outputs if the words are different
    else{
        cout << "It is not an palindrome" << endl;
    }

    return 0; 
}