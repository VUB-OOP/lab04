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