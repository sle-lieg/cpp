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
    zEvent.setZombieType("Dog");
    Zombie*     rex = zEvent.newZombie("Rex");

    firstZombie.announce();
    secZombie.announce();
    superZombie->announce();
    armedZombie->announce();
    rex->announce();

    zEvent.setZombieType("Random");

    Zombie*     randomZombi1 = zEvent.randomChump();
    Zombie*     randomZombi2 = zEvent.randomChump();
    Zombie*     randomZombi3 = zEvent.randomChump();
    Zombie*     randomZombi4 = zEvent.randomChump();


    delete superZombie;
    delete armedZombie;
    delete rex;
    delete randomZombi1;
    delete randomZombi2;
    delete randomZombi3;
    delete randomZombi4;
    
    return 0;
}