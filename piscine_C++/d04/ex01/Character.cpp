#include "Character.hpp"

Character::Character()
{
    std::string error("Error constructor: missing string NAME");
    throw error;
}

Character::Character(std::string const & name) :
    _name(name), _actionPoints(40), _weapon(nullptr)
{}

Character::Character(Character const & src) :
    _name(src._name), _actionPoints(src._actionPoints), _weapon(src._weapon)
{
    // if (src._weapon)
    // {
    //     if (*(src.weapon._name == "PlasmaRifle"))
    //         _weapon = new PlasmaRifle(*(src._weapon));
    //     else if (*(src.weapon._name == "PowerFist"))
    //         _weapon = new PowerFist(*(src._weapon));
    // }
}

Character::~Character()
{
    if (_weapon)
        delete _weapon;
}

Character& Character::operator=(Character const & src)
{
    _name = src._name;
    _actionPoints= src._actionPoints;
    _weapon = src._weapon;
    // if (_weapon)
    //     delete _weapon;
    // if (src._weapon)
    // {
    //     if (*(src.weapon._name == "PlasmaRifle"))
    //         _weapon = new PlasmaRifle(*(src._weapon));
    //     else if (*(src.weapon._name == "PowerFist"))
    //         _weapon = new PowerFist(*(src._weapon));
    // }
    // else
    //     _weapon = nullptr;

    return *this;
}
