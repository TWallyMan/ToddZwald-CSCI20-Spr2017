#include <iostream>

using namespace std;

int main(){
    
    int Usernumber[11];
    int userChoice;
    string mainMenu[11];
    int yesNo;
    
    
    
    int i = 0;
    int j;
    
    mainMenu[0] = "New York Steak";
    mainMenu[1] = "Salmon";
    mainMenu[2] = "Tri-Tip";
    mainMenu[3] = "Salad";
    mainMenu[4] = "Soup";
    mainMenu[5] = "Bread Sticks";
    mainMenu[6] = "Mozzerella Sticks";
    mainMenu[7] = "Jalapeño Poppers";
    mainMenu[8] = "Ice Cream" ;
    mainMenu[9] = "Chocolate Cake";
    mainMenu[10] = "Water";
    
    
    cout << "Pick any number of items from the list below:" << endl;
    for(int i = 0; i < 11; i++){
        cout << "#" << i + 1 << " " << mainMenu[i] << endl;
    }
    
    for(int j = 1; j < 12; j++){
        cout <<endl;
        cout << "I would like a #";
        cin >> j;
        cout << endl;
    }
    
    
    /*cout << "Is that all for you?" << endl;
    cin >> userAnswer;
    cout << endl;
    
    cout << "Ok, I'll have that ready for you soon!" << endl;
    */
    return 0;
    
}