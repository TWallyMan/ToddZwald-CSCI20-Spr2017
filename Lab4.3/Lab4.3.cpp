#include<iostream>
using namespace std;

class Inventory{
    private:
        int quantity_[99];
    public:
        Inventory(){
            quantity_ = 0;
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
 

 
 cout <<quantity_[]; << endl;   
}