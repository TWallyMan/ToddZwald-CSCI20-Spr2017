//Todd Zwald
// 2/15/17

/*
This is used to take in a specific name, wage, and hours worked to then take that
information, put it through some equations to output what the total gross pay
is and what the total net pay after tax is and then put that all into a time
card to be easily read.
*/

#include <iostream>
#include <string>
using namespace std;


// Holds memory location for name, hours worked and wages
struct NameandWage {
    string firstName;
    string lastName;
    int weeklyHours;
    double hourlyWage;
};

int main(){
    
    const int healthInsurance = 130; // a never changing insurance deduction
    const double tax = .17; // never changing tax deduction
    
    NameandWage Employee;
    
    // User inputs requested information
    cout << "Enter full name: ";
    cin >> Employee.firstName >> Employee.lastName;
    cout << endl;
    cout << "Enter hourly wage: $";
    cin >> Employee.hourlyWage;
    cout << endl;
    cout << "Enter in hours worked: ";
    cin >> Employee.weeklyHours;
    cout << endl;
    
    //Time card for employee after information input
    cout << "EMPLOYEE NAME: " << Employee.firstName << " " << Employee.lastName << endl;
    cout << "WAGES: $" << Employee.hourlyWage << endl;
    cout << "HOURS WORKED: " << Employee.weeklyHours << endl;
    
    // Calculates gross pay before tax and insurance
    double grossPay = Employee.hourlyWage * Employee.weeklyHours;
    
    cout << "GROSS PAY: $" << grossPay << endl;
    
    // Calculates net pay after tax and insurance
    double netPay = grossPay - healthInsurance;
    netPay = netPay - (netPay * tax);
    
    cout << "NET PAY AFTER TAX: $" << netPay;
    
    return 0;
    
}