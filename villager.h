#define VILLAGER_MAX_HEALTH 25
#define VILLAGER_MAX_ATTACK 3
#define VILLAGER_MAX_SPEED 0.8

class Villager {
public:
  // Defaultni konstruktor koji postavlja podatkovne članove na početne (maksimalne) vrijednosti: health - 25, attack - 3, speed - 0.8.
  Villager();

  // Dodatni konstruktor koji postavlja health na proizvoljnu vrijednost, ostale vrijednosti na maksimalne.
  Villager(int health);

  // Copy konstruktor koji će napraviti kopiju jedinice, ali će postaviti health na maksimum
  Villager(const Villager &villager);

  // getteri
  int getHealth();
  int getAttack();
  double getSpeed();

  // setteri
  void setHealth(int health);
  void setAttack(int attack);
  void setSpeed(double speed);

private:
  int health;
  int attack;
  double speed;
};
