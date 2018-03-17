#include "Weapon.hpp"
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB() : , _name("Mr Nobody"), _weapon()
{}

HumanB::HumanB(std::string name) :  _name(name), _weapon()
{}

HumanB::HumanB(std::string name, Weapon weapon) :  _name(name), _weapon(weapon)
{}

HumanB::~HumanB()
{}

void HumanB::attack() const
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}