#include "Item.h"

using namespace std;

int Item::totalItems = 0;

Item::Item(std::string name, int value) : name(name), value(value){

}

int Item::getTotalItems(){
    return totalItems;
}

void Item::incrementTotalItems(){
    totalItems++;
}

std::string Item::getName() const{
    return name;
}

int Item::getValue() const{
    return value;
}

void Item::display() const{
    cout << "[" << name << "]" << "(" << "Value" << ":" << " " << "[" << value << "]" << ")" << endl;
}




