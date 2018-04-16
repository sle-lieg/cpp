#include "PowerFist.hpp"

PowerFist::PowerFist() :
    AWeapon("Power Fist", 8, 50)
{}

// PowerFist::PowerFist(std::string const & name, int apcost, int damage) :
//     AWeapon(name, apcost, damage)
// {}

PowerFist::PowerFist(PowerFist const & src) :
    AWeapon(src._name, src._apCost, src._damage)
{}

PowerFist::~PowerFist()
{}

PowerFist&    PowerFist::operator=(PowerFist const & src)
{
    _name = src._name;
    _apCost = src._apCost;
    _damage = src._damage;

    return *this;
}

void    PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}