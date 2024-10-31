#include <iostream>
#include "villager.h"
#include "town_center.h"
#include "outpost.h"

int main() {
  Villager v1;

  TownCenter tc;
  Villager *v2 = tc.trenirajVillagera();

  Outpost o1;
  Outpost o2(v2);
  Outpost o3(&v1);
  Outpost o4(tc.trenirajVillagera(20));

  o1.info();
  o4.info();


}
