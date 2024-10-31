#pragma once

#include "villager.h"

class Outpost {
public:
  Outpost();
  Outpost(Villager *villager);
  Outpost(const Outpost &outpost);

  void info();
private:
  Villager *villager;
};