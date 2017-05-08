#include<iostream>
#include <string>
#include <ios>
#include <iomanip>
using namespace std;

class Inventory{
    private:
        int quantity_[99];
        int size_;
    public:
        Inventory(int size = 99, int array[]){
            size_ = size;
            for(int i = 0; i < size_; i++){
                quantity_[i] = array[i];
            }
        }
        Inventory(int totalInventory){
            quantity_ = totalInventory;
        }
        void SetInventoryQuantity(int setInventory){
            quantity_ = setInventory;
            return;
        }
        int GetInventoryQuantity(){
            int getInventory = quantity_;
            return getInventory;
        }
        void PrintStockQuantity()
}
int main(){
    
    
    
    cout << quantity_[]; << endl;   
}