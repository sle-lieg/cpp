#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap(std::string name);
        FragTrap(FragTrap const &);
        ~FragTrap(void);

        FragTrap& operator=(FragTrap const &);
    
        void    vaulthunter_dot_exe(std::string const & target);
        void    funzerker(std::string const & target) const;
        void    laserInferno(std::string const & target) const;
        void    oneShotWonder(std::string const & target) const;
        void    senselessSacrifice(std::string const & target) const;
        void    mechromagician(std::string const & target) const;

    private:
        typedef void (FragTrap::*randAttacks)(std::string const &) const;      
        randAttacks     _attacks[5];
};

#endif