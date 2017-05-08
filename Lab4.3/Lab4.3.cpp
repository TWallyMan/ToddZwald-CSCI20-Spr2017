// Todd Zwald
// 5/7/17
/*
    
*/

#include<iostream>
#include <string>
#include <ios>
#include <iomanip>
using namespace std;


class Shop{
    private:
        int item_number_;
        
    public:
        Shop(){
            item_number_ = 0;
        }
        void SetItemNumber(int userNumber){
            item_number_ = userNumber;
            return;
        }
        int GetItemNumber(){
            int userNumber = item_number_;
            return userNumber;
        }
};

int main(){
    int i = 0;
    int itemNumberAndInventoryArray[2][10];
    string items[10];
    
    // Inventory of items
    itemNumberAndInventoryArray[0][0] = 10;
    itemNumberAndInventoryArray[0][1] = 15;
    itemNumberAndInventoryArray[0][2] = 7;
    itemNumberAndInventoryArray[0][3] = 6;
    itemNumberAndInventoryArray[0][4] = 9;
    itemNumberAndInventoryArray[0][5] = 6;
    itemNumberAndInventoryArray[0][6] = 10;
    itemNumberAndInventoryArray[0][7] = 1;
    itemNumberAndInventoryArray[0][8] = 15;
    itemNumberAndInventoryArray[0][9] = 20;
    
    // Item number for shopping
    itemNumberAndInventoryArray[1][0] = 1;
    itemNumberAndInventoryArray[1][1] = 2;
    itemNumberAndInventoryArray[1][2] = 3;
    itemNumberAndInventoryArray[1][3] = 4;
    itemNumberAndInventoryArray[1][4] = 5;
    itemNumberAndInventoryArray[1][5] = 6;
    itemNumberAndInventoryArray[1][6] = 7;
    itemNumberAndInventoryArray[1][7] = 8;
    itemNumberAndInventoryArray[1][8] = 9;
    itemNumberAndInventoryArray[1][9] = 10;
    
    // Items in shop
    items[0] = "shoe";
    items[1] = "hat";
    items[2] = "t-shirt";
    items[3] = "phone case";
    items[4] = "pen";
    items[5] = "binder";
    items[6] = "keyboard";
    items[7] = "TV";
    items[8] = "sock";
    items[9] = "mouse";
    
    cout << "This is our shopping cart! pick from any of the items and order from what we have in stock using our stock number!" << endl << endl;
    
    cout << "Item number, item and stock:" << endl;
    for(int i = 0; i < 11; i++){
        cout << "#" << itemNumberAndInventoryArray[1][i] << " " << items[i];
        cout << " " << itemNumberAndInventoryArray[0][i] << endl;
    }
    
    
}


































/*
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
*/