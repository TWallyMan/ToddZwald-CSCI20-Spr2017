#include <iostream>
using namespace std;

class ArrayTools{
    private:
        int array_[99];
    public:
        ArrayTools(){
            
        }
        void Print(){
            for(int i = 0; i < 100; i++){
                int arrayValue = array_[i];
                cout << "The vallues in your array are: " << endl << array_[i] << endl;
            }
            
        };
        /*void Find_min(){
            for(int i = 0; i < 100)
        }
        void Find_max(){
            
        }
        void Find_sum(){
            
        }
        void Search(){
            
        }
        void Is_sorted(){
            
        }*/
};


int main()
{
    const int SIZE = 100;
    int myArray[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        cin << myArray[i];
    }
    ArrayTools a(myArray);
    
    a.Print();
    cout<<"Min: "<<a.Find_min(0, 4)<<endl;
    cout<<"Max: "<<a.Find_max(5, 10)<<endl;
    cout<<"Sum = "<<a.Find_sum()<<endl;
    cout<<"Search 10"<<a.Search(10)<<endl;
    cout<<"Sorted? "<<a.Is_sorted()<<endl;
    
    return 0;
}

