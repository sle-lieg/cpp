#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
    public:
        ScavTrap( void );
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &);
        ~ScavTrap(void);

        ScavTrap& operator=(ScavTrap const &);
    
        void    rangedAttack(std::string const & target) const;
        void    meleeAttack(std::string const & target) const;
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    challengeNewcomer(std::string const & target);
        void    firstToDie( void ) const;
        void    runFaster( void ) const;
        void    rubiksChallenge( void ) const;
        void    firstToMoveLose( void ) const;
        void    collectAllStuff( void ) const;

    private:
        typedef void (ScavTrap::*randChallenges)( void ) const;      
        randChallenges  _challenge[5];
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