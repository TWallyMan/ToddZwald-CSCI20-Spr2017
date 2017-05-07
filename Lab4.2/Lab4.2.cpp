#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
using namespace std;

int main(){
    const int ARRAY_SIZE = 11;
    int Usernumber[ARRAY_SIZE];
    string menu[ARRAY_SIZE];
    int storage[ARRAY_SIZE];
    double cost[ARRAY_SIZE];
    int ordered[ARRAY_SIZE];
    int i = 0;
    double orderTotal = 0;
    
    menu[0] = "New York Steak";
    menu[1] = "Salmon";
    menu[2] = "Tri-Tip";
    menu[3] = "Salad";
    menu[4] = "Soup";
    menu[5] = "Bread Sticks";
    menu[6] = "Mozzerella Sticks";
    menu[7] = "Jalapeño Poppers";
    menu[8] = "Ice Cream" ;
    menu[9] = "Chocolate Cake";
    menu[10] = "Water";
    
    storage[0] = 5;
    storage[1] = 8;
    storage[2] = 3;
    storage[3] = 10;
    storage[4] = 10;
    storage[5] = 10;
    storage[6] = 10;
    storage[7] = 10;
    storage[8] = 8;
    storage[9] = 5;
    storage[10] = 99;
    
    cost[0] = 10.0;
    cost[1] = 13.50;
    cost[2] = 18.5;
    cost[3] = 5.0;
    cost[4] = 5.0;
    cost[5] = 3.0;
    cost[6] = 4.0;
    cost[7] = 4.5;
    cost[8] = 5.0;
    cost[9] = 7.0;
    cost[10] = 1.0;
    
    ordered[0] = 0;
    ordered[1] = 0;
    ordered[2] = 0;
    ordered[3] = 0;
    ordered[4] = 0;
    ordered[5] = 0;
    ordered[6] = 0;
    ordered[7] = 0;
    ordered[8] = 0;
    ordered[9] = 0;
    ordered[10] = 0;
    
    
     for(int i = 0; i < ARRAY_SIZE; i++){
        cout << "#" << i + 1 << " " << menu[i] << "  $" << cost[i] << endl;
    }
    cout << "How many of each product would you like?" << endl << endl;
    for(int i = 0; i < ARRAY_SIZE; i++){
        int qauntityWant;
        cout << "#" << i + 1 << ": ";
        cin >> qauntityWant;
        if(qauntityWant > storage[i]){
            cout << "Sorry, we dont have that many, we only have " << storage[i] << endl;
            cin >> qauntityWant;
        }
        else{
            ordered[i] = qauntityWant;
        }
    }
    cout << "Ok, your total items ordered will be: " << endl << endl;
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout << menu[i] << ":  " << ordered[i] << endl;
    }
    for(int i = 0; i < ARRAY_SIZE; i++){
        double addingOrder = ordered[i] * cost[i];
        orderTotal = addingOrder;
    }
    cout << "Your total bill will be: " << orderTotal;
    
    return 0;
    
}