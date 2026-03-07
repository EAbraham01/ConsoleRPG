#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

int main(){
    Player hero;
    Player wizard("Harry", 120, 15);

    hero.displayStatus();
    wizard.displayStatus();
    hero.takeDamage(25);
    hero.displayStatus();
    wizard.takeDamage(150);
    wizard.displayStatus();

}
