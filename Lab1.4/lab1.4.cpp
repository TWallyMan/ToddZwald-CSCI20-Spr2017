//Todd Zwald
// 2/7/17
/*
This program is used to take in a total value of money entered in a coin star,
count how many of each coin you have, remove a fee, and then tell you your total
amount of money earned.
*/


#include <iostream>
using namespace std;

int quarterValue = 25;   // Quarter value as a whole number
int totalQuarters;       // Holds total quarters
int dimeValue = 10;      // Dime value as a whole number
int totalDimes;          // Holds total dimes
int nickelValue = 5;     // Nickel value as a whole number
int totalNickels;        // Holds total nickels
int pennieValue = 1;     // Pennie value as a whole number
int totalPennies;        // Holds total pennies
double feeValue = .109;  // Fee value coinstar uses to take money
int startMoney;          // Holds user input of money
int moneyCounted;        // Holds money counted in machine
int moneyRemoved;        // Holds how much money has been limited out by coins

int main() {
    
    
    //User input of money wanted counted
    cout << "Enter amount of money in cents: ";
    cin >> startMoney;
    cout << endl;
    cout << "You have: " << endl;
    
    
    //Remove quarters from total
    totalQuarters = startMoney / quarterValue;
    cout << totalQuarters << " quarter/s" << endl;
    moneyCounted = startMoney % (totalQuarters * quarterValue); 
    
    
    //Remove dimes from total
    totalDimes = moneyCounted / dimeValue;
    cout << totalDimes << " dime/s" << endl;
    moneyCounted = moneyCounted - (totalDimes * dimeValue);     
    
   
   //Remove nickels from total
    totalNickels = moneyCounted / nickelValue;
    cout << totalNickels << " nickel/s" << endl;
    moneyCounted = moneyCounted - (totalNickels * nickelValue); 
    
    
    //Count total amount of pennies
    totalPennies = moneyCounted / pennieValue;                  
    cout << totalPennies << " pennie/s" << endl;
    
   
   //Remove fee from total amount of money entered and converts to dollar value
    cout << "Total money earned after fee: $" ;
    moneyRemoved = startMoney - (startMoney * feeValue);
    cout << static_cast<double>(moneyRemoved) / 100;
    
}