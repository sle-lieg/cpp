#include "Character.hpp"
#include "Ice.hpp"

int main()
{
    Character hero("Clad");
    Character hero2("Barret");    
    Character boss("Sephiroth");

    AMateria* ice = new Ice;
    AMateria* ice2 = new Ice;
    AMateria* ice3 = new Ice;

    hero.equip(ice);
    hero.equip(ice2);
    hero.equip(ice3);

    hero2.equip(ice);
    hero2.equip(ice2);
    hero2.equip(ice3);

    hero.use(0, boss);
    hero.use(1, boss);
    hero.use(2, boss);
    hero.use(3, boss);
}