#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    public:
        HumanB();
        HumanB(std::string name);
        HumanB(std::string name, Weapon weapon);        
        ~HumanB();

        void attack( void ) const;
        void setWeapon(Weapon weapon);

    private:
        Weapon _weapon;
        std::string _name;
};

#endif