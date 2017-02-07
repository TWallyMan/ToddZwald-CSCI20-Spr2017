//Todd Zwald
// 2/7/17
/*
This program is used to take in a total value of money entered in a coin star,
count how many of each coin you have, remove a fee, and then tell you your total
amount of money earned.
*/


#include <iostream>
using namespace std;

int quarterValue = 25;   //Quarter value as a whole number
int totalQuarters;
int dimeValue = 10;      //Quarter value as a whole number
int totalDimes;
int nickelValue = 5;     //Quarter value as a whole number
int totalNickels;
int pennieValue = 1;     //Quarter value as a whole number
int totalPennies;
double feeValue = .109;  //Quarter value as a whole number
int startMoney;
int moneyCounted;
int moneyRemoved;

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
    
   
   //Remove fee from total amount of money entered
    cout << "Total money earned after fee: $" ;
    moneyRemoved = startMoney - (startMoney * feeValue);
    cout << static_cast<double>(moneyRemoved) / 100;
    
}