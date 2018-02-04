#include "Personnage.h"
#include "Guerrier.h"
#include "Magicien.h"
#include <iostream>

int main()
{
    Personnage hero("Cloud Strife");
    Personnage ennemy("Sephiroth");
    Guerrier soldat("Conan");
    Magicien mage("Merlin");

    hero.etatPerso();
    std::cout << std::endl;

    ennemy.etatPerso();
    std::cout << std::endl;
    
    soldat.etatPerso();
    std::cout << std::endl;
    
    mage.etatPerso();
    std::cout << std::endl;
    

    hero.coupDePoing(ennemy);
    ennemy.coupDePoing(hero);
    hero.coupDePoing(ennemy);
    hero.coupDePoing(ennemy);
    ennemy.coupDePoing(hero);
    hero.coupDePoing(ennemy);
    hero.coupDePoing(ennemy);
        

    return (0);
}