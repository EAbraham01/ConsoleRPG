#include <iostream>
#include "Player.h"

using namespace std;

Player::Player(){
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
}

Player::Player(std::string name, int health, int attackPower){
    this->name = name;
    this->health = health;
    this->maxHealth = health;
    this->attackPower = attackPower;
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
