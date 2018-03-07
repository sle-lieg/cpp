#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    ZombieEvent zEvent;
    Zombie      firstZombie;
    Zombie      secZombie("DeadPoule", "Poule");

    zEvent.setZombieType("Soldier");
    Zombie*     superZombie = zEvent.newZombie("Clad");
    zEvent.setZombieType("Resistant");
    Zombie*     armedZombie = zEvent.newZombie("Barret");

    firstZombie.announce();
    secZombie.announce();
    superZombie->announce();
    armedZombie->announce();
}