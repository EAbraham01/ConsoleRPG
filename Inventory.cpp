#include "Inventory.h"

using namespace std;

Inventory::Inventory(int capacity): items(new Item[capacity]), capacity(capacity), itemCount(0){

}

Inventory::~Inventory(){
    delete[] items;
}

bool Inventory::addItem(const Item& item){
    if(itemCount < capacity){
        items[itemCount] = item;
        Item::incrementTotalItems();
        cout << "An item was added: " << "[" << items[itemCount].getName() << "]" << endl;
        itemCount++;
        return true;
    }
    else{
        return false;
    }
}

void Inventory::display() const{
    cout << "-------Inventory--------" << endl;
    for (int i = 0; i < itemCount; i++){
        cout << "[" << items[i].getName() << "]" << " (" << "Value: " << items[i].getValue() << ")" << endl;
    }
}

