#include "NinjaTrap.hpp"
#include <ctime>
#include <cstdlib>

/** **********************************************************************
 ** ************************** CONSTRUCTORS ******************************
 ** **********************************************************************/

NinjaTrap::NinjaTrap() :
    ClapTrap::ClapTrap()
{
    _hitPoints = 60;
    _maxHitPoints = 60;
    _energyPoints = 120;
    _maxEnergyPoints = 120;
    _meleeAttackDmg = 60;
    _rangedAttackDmg = 5;
    _armorDmgReduction = 0;
    
    std::cout << "Starting boot-up sequence... " << std::endl;
    std::cout << "Ninjaaaaaa !" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) :
    ClapTrap::ClapTrap(name)
{
    _hitPoints = 60;
    _maxHitPoints = 60;
    _energyPoints = 120;
    _maxEnergyPoints = 120;
    _meleeAttackDmg = 60;
    _rangedAttackDmg = 5;
    _armorDmgReduction = 0;
    
    std::cout << "Starting boot-up sequence... " << std::endl;
    std::cout << _name << " Ninjaaaaaa !" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) :
    ClapTrap(src)
{
    _hitPoints = src._hitPoints;
    _maxHitPoints = src._maxHitPoints;
    _energyPoints = src._energyPoints;
    _maxEnergyPoints = src._maxEnergyPoints;
    _meleeAttackDmg = src._meleeAttackDmg;
    _rangedAttackDmg = src._rangedAttackDmg;
    _armorDmgReduction = src._armorDmgReduction;

    std::cout << "Starting cloning sequence... " << std::endl;
    std::cout << "Ninjaaaaaa !" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "Ninja hara-kiri, gzzgzzgzz.." << std::endl;
}

/** **********************************************************************
 ** *************************** OPERATORS ********************************
 ** **********************************************************************/

NinjaTrap&   NinjaTrap::operator=(NinjaTrap const & src)
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

void    NinjaTrap::ninjaShoebox(ClapTrap const & target) const
{
    std::cout << "Attack ClapTrap " << target.getName() << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap const & target) const
{
    std::cout << "Attack FragTrap " << target.getName() << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap const & target) const
{
    std::cout << "Attack ScavTrap " << target.getName() << std::endl;

}

void    NinjaTrap::ninjaShoebox(NinjaTrap const & target) const
{
    std::cout << "Attack NinjaTrap " << target.getName() << std::endl;    
}