#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA() : _name("Mr Nobody"), _weapon()
{}

HumanA::HumanA(std::string name) : _name(name), _weapon()
{}

HumanA::HumanA(std::string name, Weapon& weapon) :  _name(name), _weapon(weapon)
{
    // _weapon = weapon;
}

HumanA::~HumanA()
{}

void HumanA::attack() const
{
    std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}