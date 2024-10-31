#include <iostream>
#include "outpost.h"

Outpost::Outpost() {
  // stvaranje objekta klase Villager
  // villager = new Villager();

  // stvaranje LOKALNOG objekta
  // NEEEEEE
  // Villager *villager;
  // villager = new Villager();
  villager = nullptr;
}

Outpost::Outpost(Villager *villager) {
  this->villager = villager;
}

Outpost::Outpost(const Outpost &outpost) {
  if (outpost.villager != nullptr) {
    this->villager = new Villager();
    return;
  }
  this->villager = nullptr;
}

void Outpost::info() {
  if (villager != nullptr) {
    villager->info();
    return;
  }
  std::cout << "No villager in the outpost" << std::endl;
}