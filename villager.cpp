#include "villager.h"

// Defaultni konstruktor koji postavlja podatkovne članove na početne (maksimalne) vrijednosti:
Villager::Villager() : 
  health(VILLAGER_MAX_HEALTH),
  attack(VILLAGER_MAX_ATTACK),
  speed(VILLAGER_MAX_SPEED) {
}