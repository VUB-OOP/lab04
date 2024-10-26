#define VILLAGER_MAX_HEALTH 25
#define VILLAGER_MAX_ATTACK 3
#define VILLAGER_MAX_SPEED 0.8

class Villager {
public:
  // Defaultni konstruktor koji postavlja podatkovne članove na početne (maksimalne) vrijednosti: health - 25, attack - 3, speed - 0.8.
  Villager();

private:
  int health;
  int attack;
  double speed;
};
