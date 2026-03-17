#include <iostream>
#include "Player.h"

using namespace std;

Player::Player(): inventory(10){
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
}

Player::Player(std::string name, int health, int attackPower): name(name), health(health), maxHealth(health), attackPower(attackPower), inventory(10){
    cout << "Default constructor called for Player." << endl;
}

Player::~Player(){
    cout << "The object for Player " << name << " has been destroyed." << endl;
}

void Player::takeDamage(int damage){
    if (damage > health){
        health = 0;
    }
    else{
        health -= damage;
    }
}

std::string Player::getName() const{
    return name;
}

int Player::getHealth() const {
    return health;
}

int Player::getMaxHealth() const{
    return maxHealth;
}
int Player::getAttackPower() const{
    return attackPower;
}
void Player::displayStatus() const{
    cout << "[" << name << "]" << " - HP: " << health << "/" << maxHealth << endl;
    if (health == 0)
        cout << name << " falls to the ground, deafeated." << endl;
}

void Player::showInventory() const{
    inventory.display();
}
void Player::addItem(const Item& item){
    inventory.addItem(item);
}