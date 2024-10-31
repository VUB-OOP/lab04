#include <iostream>
#include "villager.h"

Villager::Villager(int health, int attack, double speed) {
  setHealth(health);
  setAttack(attack);
  setSpeed(speed);
}

Villager::Villager(const Villager &villager) : 
Villager(MAX_HEALTH, villager.attack, villager.speed) {}


int Villager::getHealth() {
  return health;
}

int Villager::getAttack() {
  return attack;
}

double Villager::getSpeed() {
  return speed;
}


Villager& Villager::setHealth(int health) {
  if (health >= 0 && health <= MAX_HEALTH) {
    this->health = health;
    return *this;
  }
  this->health = MAX_HEALTH;
  return *this;
}

Villager& Villager::setAttack(int attack) {
  if (attack >= 0 && attack <= MAX_ATTACK) {
    this->attack = attack;
    return *this;
  }
  this->attack = MAX_ATTACK;
  return *this;
}

Villager& Villager::setSpeed(double speed) {
  if (speed >= 0 && speed <= MAX_SPEED) {
    this->speed = speed;
    return *this;
  }
  this->speed = MAX_SPEED;
  return *this;
}

void Villager::info() {
  std::cout << "Villager (" << health << ", " << attack << ", " << speed << ")" << std::endl;
}