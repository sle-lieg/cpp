#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

#include <iostream>
#include <string>

class SuperTrap : public FragTrap, public NinjaTrap
{
    public:
        SuperTrap( void );
        SuperTrap( std::string const name );
        SuperTrap( SuperTrap const & );
        ~SuperTrap( void );

        SuperTrap& operator=( SuperTrap const & );

        void        rangedAttack(std::string const & target) const;
        void        meleeAttack(std::string const & target) const;
};

#endif
