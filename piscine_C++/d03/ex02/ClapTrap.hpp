#ifndef ClAPTRAP_HPP
# define ClAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    public:
        ClapTrap( void );
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &);
        ~ClapTrap(void);

        ClapTrap& operator=(ClapTrap const &);

        void    rangedAttack(std::string const & target) const;
        void    meleeAttack(std::string const & target) const;
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    protected:
        std::string     _name;
        unsigned int    _hitPoints;
        unsigned int    _maxHitPoints;
        unsigned int    _energyPoints;
        unsigned int    _maxEnergyPoints;
        unsigned int    _level;
        unsigned int    _meleeAttackDmg;
        unsigned int    _rangedAttackDmg;
        unsigned int    _armorDmgReduction;
};

#endif