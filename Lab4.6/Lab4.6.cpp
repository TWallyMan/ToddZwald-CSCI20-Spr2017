#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream inFS;
    string personName;
    int semesterNum = 0;
    int gradeNum[99];
    int totalUnits = 0;
    char gradeLetter[99];
    double gradeAverage = 0.0;
    
    inFS.open("myfile.txt");
   
    if (!inFS.is_open()) {
        cout << "Could not open file myfile.txt." << endl;
        return 1;
    }
    
    cout << " Persons name, semester and grades" << endl << endl;
    
    getline(inFS, personName);
    
    inFS >> totalUnits;
    
    inFS >> gradeAverage;
    
    inFS >> semesterNum;
    
    for (int i = 0; i < 99; ++i){
        inFS >> gradeLetter[i];
        inFS >> gradeNum[i];
        
        
        if(gradeLetter[i] == ' '){
            i = i + 18;
        }
    }
    
    
    inFS.close();
    
    cout << personName << endl;
    cout << totalUnits << " " << gradeAverage << endl;
    cout << semesterNum << endl;
    for(int i = 0; i < 99; ++i){
        cout << gradeLetter[i] << " " << gradeNum[i] << endl;
    }
    
    
}