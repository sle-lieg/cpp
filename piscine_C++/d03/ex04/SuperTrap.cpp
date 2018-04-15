#include "SuperTrap.hpp"
#include <ctime>
#include <cstdlib>

/** **********************************************************************
 ** ************************** CONSTRUCTORS ******************************
 ** **********************************************************************/

SuperTrap::SuperTrap() :
    FragTrap(), NinjaTrap()
{
    _hitPoints = FragTrap::_hitPoints;
    _maxHitPoints = FragTrap::_maxHitPoints;
    _energyPoints = NinjaTrap::_energyPoints;
    _maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    _meleeAttackDmg = NinjaTrap::_meleeAttackDmg;
    _rangedAttackDmg = FragTrap::_rangedAttackDmg;
    _armorDmgReduction = FragTrap::_armorDmgReduction;
    
    std::cout << "Starting boot-up sequence... " << std::endl;
    std::cout << "Ninjaaaaaa !" << std::endl;
}

SuperTrap::SuperTrap(std::string name) :
    FragTrap::FragTrap(name), NinjaTrap(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _maxHitPoints = FragTrap::_maxHitPoints;
    _energyPoints = NinjaTrap::_energyPoints;
    _maxEnergyPoints = NinjaTrap::_maxEnergyPoints;
    _meleeAttackDmg = NinjaTrap::_meleeAttackDmg;
    _rangedAttackDmg = FragTrap::_rangedAttackDmg;
    _armorDmgReduction = FragTrap::_armorDmgReduction;

    std::cout << "Starting boot-up sequence... " << std::endl;
    std::cout << _name << " Ninjaaaaaa !" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const & src) :
    ClapTrap(src)
{
    _hitPoints = 60;
    _maxHitPoints = 60;
    _energyPoints = 120;
    _maxEnergyPoints = 120;
    _meleeAttackDmg = 60;
    _rangedAttackDmg = 5;
    _armorDmgReduction = 0;

    std::cout << "Starting cloning sequence... " << std::endl;
    std::cout << "Ninjaaaaaa !" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "Ninja hara-kiri, gzzgzzgzz.." << std::endl;
}

/** **********************************************************************
 ** *************************** OPERATORS ********************************
 ** **********************************************************************/

SuperTrap&   SuperTrap::operator=(SuperTrap const & src)
{
    if (this != &src)
    {
        this->_name = src._name;
        this->_hitPoints = src._hitPoints;
        this->_maxHitPoints = src._maxHitPoints;
        this->_energyPoints = src._energyPoints;
        this->_maxEnergyPoints = src._maxEnergyPoints;
        this->_level = src._level;
        this->_meleeAttackDmg = src._meleeAttackDmg;
        this->_rangedAttackDmg = src._rangedAttackDmg;
        this->_armorDmgReduction = src._armorDmgReduction;
    }
    return *this;
}

/** **********************************************************************
 ** ************************ MEMBER FUNCTIONS ****************************
 ** **********************************************************************/

void        SuperTrap::rangedAttack(std::string const & target) const
{
    FragTrap::rangedAttack(target);
}

void        SuperTrap::meleeAttack(std::string const & target) const
{
    NinjaTrap::meleeAttack(target);
}