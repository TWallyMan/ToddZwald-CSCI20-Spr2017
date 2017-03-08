#include <iostream>
#include<cstring>
using namespace std;


class Salary
{
    private: 
        double annual_;
    public:
        void SetAnnualSalary(double salary)
        {
            annual_ = salary;
        }
        double GetAnnualSalary()
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

int main(){
    
    double personSalary; // variable to store value for the salary
    Salary person1; //Created the first object
    //Person1.SetAnnualSalary(personSalary); //Sets parameter to annual
    person1.GetAnnualSalary(); // returns stored value in annual
    person1.Print(); // prints that value with a $ in front of it

    
}