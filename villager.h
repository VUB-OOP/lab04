#define VILLAGER_MAX_HEALTH 25
#define VILLAGER_MAX_ATTACK 3
#define VILLAGER_MAX_SPEED 0.8

class Villager {
public:
  // Defaultni konstruktor koji postavlja podatkovne članove na početne (maksimalne) vrijednosti: health - 25, attack - 3, speed - 0.8.
  // Villager();

  // Dodatni konstruktor koji postavlja health na proizvoljnu vrijednost, ostale vrijednosti na maksimalne.
  // Villager(int health);

  // Konstruktor s defaultnim argumentima koji zamjenjuje prethodna dva konstruktora.
  Villager(int health = VILLAGER_MAX_HEALTH, int attack = VILLAGER_MAX_ATTACK, double speed = VILLAGER_MAX_SPEED);

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

  // Metodu info koja prikazuje ime klase i vrijednosti podatkovnih članova: Villager (25, 3, 0.8)
  void info();

private:
  int health;
  int attack;
  double speed;
};
