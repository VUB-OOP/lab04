#pragma once

#define MAX_HEALTH 25
#define MAX_ATTACK 3
#define MAX_SPEED 0.8

class Villager {
public:
  Villager(int health = MAX_HEALTH, int attack = MAX_ATTACK, double speed = MAX_SPEED);
  Villager(const Villager &villager);

  int getHealth();
  int getAttack();
  double getSpeed();

  Villager& setHealth(int health);
  Villager& setAttack(int attack);
  Villager& setSpeed(double speed);

  // metoda info Villager (25, 3, 0.8)
  void info(); 


private:
  int health;
  int attack;
  double speed; 
};
