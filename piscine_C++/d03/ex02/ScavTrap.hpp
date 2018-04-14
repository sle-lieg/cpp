#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap( void );
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &);
        ~ScavTrap(void);

        ScavTrap& operator=(ScavTrap const &);

        void    challengeNewcomer(std::string const & target);
        void    firstToDie( void ) const;
        void    runFaster( void ) const;
        void    rubiksChallenge( void ) const;
        void    firstToMoveLose( void ) const;
        void    collectAllStuff( void ) const;

    private:
        typedef void (ScavTrap::*randChallenges)( void ) const;      
        randChallenges  _challenge[5];
};

#endif