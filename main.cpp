#include <iostream>
#include "villager.h"

int main() {
  Villager v1;
  v1.info(); // Ispisuje: Villager (25, 3, 0.8)

  Villager v2(10);
  v2.info(); // Ispisuje: Villager (10, 3, 0.8)

  Villager v3 = v2; // Može i: Villager v3(v2);
  v3.info(); // Ispisuje: Villager (25, 3, 0.8)
}
