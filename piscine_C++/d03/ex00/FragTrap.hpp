#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>

class FragTrap
{
    public:
        FragTrap( void );
        FragTrap(std::string name);
        FragTrap(FragTrap const &);
        ~FragTrap(void);

        FragTrap& operator=(FragTrap const &);
    
        void    rangedAttack(std::string const & target) const;
        void    meleeAttack(std::string const & target) const;
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    vaulthunter_dot_exe(std::string const & target);

    private:
        void    funzerker(std::string const & target) const;
        void    laserInferno(std::string const & target) const;
        void    oneShotWonder(std::string const & target) const;
        void    senselessSacrifice(std::string const & target) const;
        void    mechromagician(std::string const & target) const;

        typedef void (FragTrap::*randAttacks)(std::string const &) const;      

        randAttacks     _attacks[5];
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