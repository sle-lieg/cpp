#include "ClapTrap.hpp"
#include <ctime>
#include <cstdlib>

/** **********************************************************************
 ** ************************** CONSTRUCTORS ******************************
 ** **********************************************************************/

ClapTrap::ClapTrap() :
    _name("FR4G_TP"), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
    _level(1), _meleeAttackDmg(30), _rangedAttackDmg(20), _armorDmgReduction(5)
{    
    std::cout << "ClapTrap " << _name << " initialisation... activation complete. " << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
    _name(name), _hitPoints(100), _maxHitPoints(100), _energyPoints(100), _maxEnergyPoints(100),
    _level(1), _meleeAttackDmg(30), _rangedAttackDmg(20), _armorDmgReduction(5)
{
    std::cout << "ClapTrap " << _name << " initialisation... activation complete. " << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src) :
    _name(src._name), _hitPoints(src._hitPoints), _maxHitPoints(src._maxHitPoints), _energyPoints(src._energyPoints),
    _maxEnergyPoints(src._maxEnergyPoints), _level(src._level), _meleeAttackDmg(src._meleeAttackDmg),
    _rangedAttackDmg(src._rangedAttackDmg), _armorDmgReduction(src._armorDmgReduction)
{
    std::cout << "ClapTrap " << _name << " initialisation... activation complete. " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " destruction." << std::endl;
}

/** **********************************************************************
 ** *************************** OPERATORS ********************************
 ** **********************************************************************/

ClapTrap&   ClapTrap::operator=(ClapTrap const & src)
{
    std::cout << "ClapTrap " << _name << " operator= called." << std::endl;
    
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

void    ClapTrap::rangedAttack(std::string const & target) const
{
    std::cout << "FR4G_TP " << _name << " shot " << target << ". " << _rangedAttackDmg << " damage inflicted." << std::endl;
}

void    ClapTrap::meleeAttack(std::string const & target) const
{
    std::cout << "FR4G_TP " << _name << " punched " << target << ". " << _meleeAttackDmg << " damage inflicted." << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "FR4G_TP " << _name << " received " << (amount - _armorDmgReduction) << " damages. " << std::endl;
    if (amount > _armorDmgReduction)
        _hitPoints = (amount - _armorDmgReduction) > _hitPoints ? 0 : _hitPoints - (amount - _armorDmgReduction);
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "FR4G_TP " << _name << " healed " << amount << " Hit Points. " << std::endl;        
    _hitPoints = (_hitPoints + amount) > _maxHitPoints ? _maxHitPoints : _hitPoints + amount;
}

std::string ClapTrap::getName( void ) const
{
    return _name;
}