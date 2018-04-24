#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());    
    ICharacter* zaz = new Character("zaz");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    zaz->equip(tmp);
    tmp = src->createMateria("cure");
    zaz->equip(tmp);
    ICharacter* bob = new Character("bob");
    zaz->use(0, *bob);
    zaz->use(1, *bob);
    delete bob;
    delete zaz;
    delete src;
    return 0;
    // Character hero("Clad");
    // Character hero2("Barret");    
    // Character boss("Sephiroth");

    // AMateria* ice = new Ice;
    // AMateria* ice2 = new Ice;
    // AMateria* ice3 = new Ice;

    // hero.equip(ice);
    // hero.equip(ice2);
    // hero.equip(ice3);

    // hero2.equip(ice);
    // hero2.equip(ice2);
    // hero2.equip(ice3);

    // hero.use(0, boss);
    // hero.use(1, boss);
    // hero.use(2, boss);
    // hero.use(3, boss);

    // hero2.use(0, boss);
    // hero2.use(1, boss);
    // hero2.use(2, boss);
    // hero2.use(3, boss);

    // hero.unequip(0);
    // hero.unequip(1);
    // hero.unequip(2);
    // hero.unequip(3);
}