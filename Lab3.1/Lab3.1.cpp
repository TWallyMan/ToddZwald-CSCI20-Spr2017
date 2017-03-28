#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    const int DUMB_PHONE_COST = 0;
    const int SMART_PHONE_COST = 5;
    const int TABLET_COST = 10;
    
    const int MONTHLY_CHARGE = 30;
    
    const double CORPORATE_DISCOUNT = .9;
    const int PLAN_DISCOUNT = 3;
    
    const int STARTING_DATA = 10;
    const int PAY_PER_DATA = 1;
    const double DATA_OVER_CHARGE = 1.5;
    
    
    int totalDumbPhone;
    int totalSmartPhone;
    int totalTablet;
    int totalDevices = totalDumbPhone + totalSmartPhone + totalTablet;
    int costOfDeviceTotal = (totalDumbPhone * DUMB_PHONE_COST) + (totalSmartPhone * SMART_PHONE_COST) + (totalTablet * TABLET_COST);
    
    double planCost;
    int userSelectData;
    
    int additionalData;
    double totalData = STARTING_DATA + (additionalData * DATA_OVER_CHARGE);
    
    int yesNo;
    
    cout << "Would you like to start a new phone plan?" << endl;
    cout << "Press 1 for yes and 0 for no." << endl;
    cin >> yesNo;
    cout << endl;
    
    if(yesNo == 0){
        cout << "Ok... Goodbye" << endl;
        return 0;
    }
    else if(yesNo == 1){
        cout << "Ok, lets geet started!!!" << endl << endl;
    }
    else{
        cout << "YOU DONE MESSED UP A-A-RON!!!!!!!!!!!!!" << endl;
        return 0;
    }
    
    cout << "Lets start with phones." << endl;
    cout << "How many dumb phones would you like: ";
    cin >> totalDumbPhone;
    cout << endl;
    
    cout << "How many smart phones would you like: ";
    cin >> totalSmartPhone;
    cout << endl;
    
    cout << "How many tablets would you like: ";
    cin >> totalTablet;
    cout << endl;
    
    cout << "How many gigabytes of data would you like: ";
    cin >> userSelectData;
    cout << endl;
    
    if(userSelectData >= 9){
        cout << "We suggest to use the Set Data Plan." << endl;
    }
    else if(userSelectData <= 8 && userSelectData > 0){
        cout << "We suggest the Pay For Data Plan." << endl;
    }
    else{
        cout << "No data plan needed" << endl;
    }
    
    cout << "Your total plan cost will be: " << endl;
    cout << MONTHLY_CHARGE + costOfDeviceTotal;
    
    /*if(totalDevices <= 2){
        planCost = MONTHLY_CHARGE - (totalDevices * PLAN_DISCOUNT);
        cout << "New phone plan will cost " << planCost << " due to havingendl;
    }
    else{
        cout << "No dicounts from multiple phone lines." << endl;
    }*/
}