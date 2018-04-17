#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
    Character* zaz = new Character("zaz");
    std::cout << *zaz;
    // Enemy* b = nullptr;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = nullptr;
    // AWeapon* pf = new PowerFist();
    zaz->equip(pr);
    std::cout << *zaz;
    zaz->equip(pf);
    zaz->attack(b);
    std::cout << *zaz;
    // zaz->equip(pr);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    zaz->attack(b);
    std::cout << *zaz;
    return 0;
    // Character   hero("Clad");
    // Character   soldier("Soldy");
    // PlasmaRifle gun;
    // PowerFist   fist;

    // hero.equip(&gun);
    // soldier = hero;
    // soldier.equip(&fist);

    // PowerFist   g2;
    // Enemy e1(999, "Human");
    // SuperMutant boss;
    // RadScorpion  boss2;

    

    // std::cout << boss2.getType() << std::endl;
    // std::cout << boss2.getHP() << std::endl;
    
    // boss2.takeDamage(100);

    // std::cout << boss2.getHP() << std::endl;
    // std::cout << g1.getName() << std::endl;
    // std::cout << g1.getAPCost() << std::endl;
    // std::cout << g1.getDamage() << std::endl;
    // g1.attack();
    // std::cout << g2.getName() << std::endl;
    // std::cout << g2.getAPCost() << std::endl;
    // std::cout << g2.getDamage() << std::endl;
    // g2.attack();
    return (0);
}