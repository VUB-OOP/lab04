#include "villager.h"

// Defaultni konstruktor koji postavlja podatkovne članove na početne (maksimalne) vrijednosti:
Villager::Villager() : 
  health(VILLAGER_MAX_HEALTH),
  attack(VILLAGER_MAX_ATTACK),
  speed(VILLAGER_MAX_SPEED) {
}

// Dodatni konstruktor koji postavlja health na proizvoljnu vrijednost, ostale vrijednosti na maksimalne.
Villager::Villager(int health) : 
  health(health),
  attack(VILLAGER_MAX_ATTACK),
  speed(VILLAGER_MAX_SPEED) {
}

// Copy konstruktor koji će napraviti kopiju jedinice, ali će postaviti health na maksimum
Villager::Villager(const Villager &villager) : 
  health(VILLAGER_MAX_HEALTH),
  attack(villager.attack),
  speed(villager.speed) {
}

// getteri
int Villager::getHealth() {
  return health;
}

int Villager::getAttack() {
  return attack;
}

double Villager::getSpeed() {
  return speed;
}

// setteri
void Villager::setHealth(int health) {
  // ako je health u rasponu od 0 do VILLAGER_MAX_HEALTH, postavi health na tu vrijednost
  if (health >= 0 && health <= VILLAGER_MAX_HEALTH) {
    this->health = health;
    return;
  }
  // ako je novi health "neispravan", postavi health na maksimalnu vrijednost
  this->health = VILLAGER_MAX_HEALTH;
}

void Villager::setAttack(int attack) {
  if (attack >= 0 && attack <= VILLAGER_MAX_ATTACK) {
    this->attack = attack;
    return;
  }
  this->attack = VILLAGER_MAX_ATTACK;
}

void Villager::setSpeed(double speed) {
  if (speed >= 0 && speed <= VILLAGER_MAX_SPEED) {
    this->speed = speed;
    return;
  }
  this->speed = VILLAGER_MAX_SPEED;
}