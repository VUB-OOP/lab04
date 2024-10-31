#pragma once

#include "villager.h"

class TownCenter {
public:
  TownCenter();

  Villager* trenirajVillagera();
  Villager* trenirajVillagera(int health);

  int getBrojVillagera();
  int getBrojGradevina();

  void info();

private:
  int brojVillagera;
  int brojGradevina;
};