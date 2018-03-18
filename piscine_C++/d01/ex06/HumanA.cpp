#include "Weapon.hpp"
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA() : _name("Mr Nobody"), _weapon(NULL)
{}

// HumanA::HumanA() : _name("Mr Nobody"), _weapon(0)
// {}

HumanA::HumanA(std::string name) : _name(name), _weapon(NULL)
{}

// HumanA::HumanA(std::string name) : _name(name), _weapon()
// {}

HumanA::HumanA(std::string name, const Weapon& weapon) :  _name(name), _weapon(&weapon)
{}

// HumanA::HumanA(std::string name, Weapon& weapon) :  _name(name), _weapon()
// {}

HumanA::~HumanA()
{

}

void HumanA::attack() const
{
    std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}