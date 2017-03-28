#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    
    const double TAX_EXAPMTION = 3900;
    
    string personName1;
    string personName2;
    double grossWage;
    char maritalStatus;
    double withheld;
    double totalTaxExemption;
    double adjustedGrossIncome;
    double taxBracket;
    
    
    cout << "Are you single or married? (s for single, m for marries) ";
    cin >> maritalStatus;
    cout << endl;
    
    switch(maritalStatus){
        case 'S':
        case 's':
            totalTaxExemption = TAX_EXAPMTION;
            break;
        
        case 'M':
        case 'm':
            totalTaxExemption = TAX_EXAPMTION * 2;
            break;
    }
    
    cout << "How much was your gross income: ";
    cin >> grossWage;
    cout << endl;
    
    cout << "How much did you withhold: ";
    cin >> withheld;
    cout << endl;
    
    adjustedGrossIncome = grossWage - totalTaxExemption;
    
    if(maritalStatus == 's' || maritalStatus == 'S'){
        if(adjustedGrossIncome <= 8925 && adjustedGrossIncome >= 0){
            adjustedGrossIncome = adjustedGrossIncome * .9;
        }
        else if (adjustedGrossIncome >= 8926 && adjustedGrossIncome >= 36250){
            taxBracket = adjustedGrossIncome - 8925;
            adjustedGrossIncome = (taxBracket *.85) - 892.5;
        }
    }
}