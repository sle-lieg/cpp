#include "Character.hpp"
#include "Enemy.hpp"

/********************************************************
 * ******************** CONSTRUCTORS ********************
********************************************************/
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
{}

/********************************************************
 * ********************* DESTRUCTOR *********************
********************************************************/
Character::~Character()
{}

/********************************************************
 * ********************* OPERATORS **********************
********************************************************/
Character& Character::operator=(Character const & src)
{
    _name = src._name;
    _actionPoints= src._actionPoints;
    _weapon = src._weapon;

    return *this;
}

std::ostream& operator<<(std::ostream & flux, Character const &character)
{
    if (character.getWeapon())
        flux << character.getName() << " has " << character.getAP() << " AP and wields a " << character.getWeaponName() << std::endl;
    else
        flux << character.getName() << " has " << character.getAP() << " AP and is unarmed" << std::endl;    
    return flux;
}

/********************************************************
 * ****************** MEMBER FUNCTIONS ******************
********************************************************/
void Character::recoverAP()
{
    _actionPoints = _actionPoints >= 30 ? 40 : _actionPoints + 10;
}

void Character::equip(AWeapon* weapon)
{
    _weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
    if (!enemy)
        return;
    if (_weapon)
    {
        if (_actionPoints > _weapon->getAPCost())
        {
            std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
            _weapon->attack();
            enemy->takeDamage(_weapon->getDamage());
            if (enemy->getHP() == 0)
                delete enemy;
            _actionPoints -= _weapon->getAPCost();
        }
        else
            std::cout << "Out of AP." << std::endl;            
    }
    else
        std::cout << _name << " has no weapon equiped. " << std::endl;
}

std::string const Character::getName() const
{
    return _name;
}

AWeapon*    Character::getWeapon() const
{
    return _weapon;
}

std::string const   Character::getWeaponName() const
{
    if (_weapon)
        return _weapon->getName();
    return "";
}

int Character::getAP() const
{
    return _actionPoints;
}

