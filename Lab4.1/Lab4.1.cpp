// Todd Zwald
// 5/5/17
/*
    This program asks the user to input at most 99 numbers that are 0 or positive
    This program then determines what is the smallest number, the biggest
    number, the sum of the numbers, if the numbers are sorted, and to potentially
    find a number in a specific location.
*/

#include <iostream>
using namespace std;

class ArrayTools{
    private:
        int array_[99];
        int size_;
    public:
        // Default constructor
        ArrayTools(int myArray[], int size = 99){
            size_=size;
            for(int i = 0; i < size_; i++){
                array_[i] = myArray[i];
            }
            
        }
        
        void Print(){
            cout << "The values in your array are: ";
            for(int i = 0; i < size_; i++){
                cout << array_[i] << " ";
            }
            cout << endl;
        }
        // Find smallest number
        int Find_min(int num1, int num2){
            int minimum = array_[num1];
            for(int i = num1; i < num2; i++){
                if(array_[i] < minimum){
                    minimum = array_[i];
                }
            }
            return minimum;
        }
        // Find biggest number
        int Find_max(int num1, int num2){
            int maximum = array_[num1];
            for(int i = num1; i < num2; i++){
                if(array_[i] > maximum){
                    maximum = array_[i];
                }
            }
            return maximum;
        }
        //Find the sum of all numbers inputed
        int Find_sum(){
            int sum = 0;
            for(int i = 0; i < size_; i++){
                sum = sum + array_[i];
            }
            return sum;
        }
        // Search for a specific memory location and its data
        int Search(int numSearch){
            for(int i = 0; i < size_; i++){
                if(array_[i] == numSearch){
                    return numSearch;
                }
            }
        }
        // Determines if the array is sorted
        int Is_sorted(){
            for(int i = 0; i < size_; i++){
                if(array_[i] > array_[i + 1]){
                    cout << "Is not sorted" << endl;
                }
                else{
                    cout << "Is sorted" << endl;
                }
            }
        }
};


int main()
{
    const int SIZE = 99;
    int myArray[SIZE];
    int i = 0;
    
    cout << "Please enter any amount of numbers greater than -1" << endl;
    cin >>  myArray[i];
    
    while(i < SIZE && myArray[i] != -1){
        i++;
        cin >> myArray[i];
    }
    
    ArrayTools a(myArray, i);
    
    a.Print();
    cout <<"Min: " << a.Find_min(0, 4) << endl;
    cout <<"Max: " << a.Find_max(5, 10) << endl;
    cout <<"Sum = " << a.Find_sum() << endl;
    cout <<"Search 10:  " << a.Search(10) << endl;
    cout <<"Sorted? " << a.Is_sorted() << endl;
    
    return 0;
}

