#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap
{
    public:
        NinjaTrap( void );
        NinjaTrap( std::string const name );
        NinjaTrap( NinjaTrap const & );
        ~NinjaTrap( void );

        NinjaTrap& operator=( NinjaTrap const & );

        void    ninjaShoebox(ClapTrap const &) const;
        void    ninjaShoebox(FragTrap const &) const;
        void    ninjaShoebox(ScavTrap const &) const;
        void    ninjaShoebox(NinjaTrap const &) const;
};

#endif