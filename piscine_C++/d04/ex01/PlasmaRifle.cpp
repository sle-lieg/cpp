#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :
    AWeapon("Plasma Rifle", 5, 21)
{}

// PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) :
//     AWeapon(name, apcost, damage)
// {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) :
    AWeapon(src._name, src._apCost, src._damage)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle&    PlasmaRifle::operator=(PlasmaRifle const & src)
{
    _name = src._name;
    _apCost = src._apCost;
    _damage = src._damage;

    return *this;
}

void    PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}