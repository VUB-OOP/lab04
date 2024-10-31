#pragma once
#include <iostream>
#include "town_center.h"

TownCenter::TownCenter() : brojVillagera(0), brojGradevina(0) {}

Villager* TownCenter::trenirajVillagera() {
  return trenirajVillagera(MAX_HEALTH);
}

Villager* TownCenter::trenirajVillagera(int health) {
  brojVillagera++;
  return new Villager(health);
}

int TownCenter::getBrojVillagera() {
  return brojVillagera;
}

int TownCenter::getBrojGradevina() {
  return brojGradevina;
}

void TownCenter::info() {
  std::cout << "TownCenter (" << brojVillagera << ", " << brojGradevina << ")" << std::endl;
}