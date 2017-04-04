#include <iostream>
using namespace std;

class DistanceConverter{
    
    private:
        double inches_;
    
    public:
    
        DistanceConverter(){
            inches_ = 0;
        }
        DistanceConverter(double disInches){
            inches_ = disInches;
        }
        void SetInches(double disInches){
            inches_ = disInches;
            return;
        }
        double GetInches(){
            return inches_;
        }
        void SetFeet(double disFeets){
            inches_ = disFeets * 12;
            return;
        }
        double GetFeet(){
            double disFeets = inches_ / 12;
            return disFeets;
        }
        void SetYards(double disYards){
            inches_ = disYards * 36;
            return;
        }
        double GetYards(){
            double disYards = inches_ / 36;
            return disYards;
        }
        void SetMiles(double disMiles){
            inches_ = disMiles * 63360;
            return;
        }
        double GetMiles(){
            double disMiles = inches_ / 63360;
            return disMiles;
        }
        void DistancePrintInches(){
            cout << GetInches() << " inches" << endl << endl;
        }
        void DistancePrintFeet(){
            cout << GetFeet()   << " feet"   << endl << endl;
        }
        void DistancePrintYards(){
            cout << GetYards()  << " yards"  << endl << endl;
        }
        void DistancePrintMiles(){
            cout << GetMiles()  << " miles"  << endl << endl;
        }
};

int main(){
    
    DistanceConverter distance1;
    DistanceConverter distance2;
    DistanceConverter distance3;
    DistanceConverter distance4;
    DistanceConverter distance5;
    DistanceConverter distance6;
    
    distance1.SetMiles(1);
    cout << "1 mile is: " << endl;
    distance1.DistancePrintFeet();
    
    distance2.SetMiles(1);
    cout << "1 mile is:" << endl;
    distance2.DistancePrintInches();
    
    distance3.SetMiles(1);
    cout << "1 mile is:" << endl;
    distance3.DistancePrintYards();
    
    distance4.SetFeet(16);
    cout << "16 feet is: " << endl;
    distance4.DistancePrintMiles();
    
    distance5.SetYards(20);
    cout << "20 yards is: " << endl;
    distance5.DistancePrintFeet();
    
    distance6.SetInches(100);
    cout << "100 inches is:" << endl;
    distance6.DistancePrintMiles();
    
}