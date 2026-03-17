#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

int main(){
    Player hero("Hero", 100, 10 );
    Item sword("Sword", 10);
    Item shield("Shield", 15);
    Item axe("Axe", 10);
    hero.addItem(sword);
    hero.addItem(shield);
    hero.showInventory();
    cout << "Total Items: " << axe.getTotalItems() << endl;
    Player wizard("Harry", 120, 15);

    hero.displayStatus();
    wizard.displayStatus();
    hero.takeDamage(25);
    hero.displayStatus();
    wizard.takeDamage(150);
    wizard.displayStatus();

}
