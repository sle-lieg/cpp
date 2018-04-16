#include "SuperMutant.hpp"

SuperMutant::SuperMutant() :
    Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) :
    Enemy(src._hitPoints, src._type)
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;    
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;    
}

SuperMutant& SuperMutant::operator=(SuperMutant const & src)
{
    _hitPoints = src._hitPoints;
    _type = src._type;

    return *this;
}

void    SuperMutant::takeDamage(int damage)
{
    damage -= 3;
    _hitPoints = _hitPoints > damage ? (_hitPoints - damage) : 0;
}
