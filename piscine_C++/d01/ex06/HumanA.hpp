#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    public:
        HumanA();
        HumanA(std::string name);
        HumanA(std::string name, Weapon& weapon);        
        ~HumanA();

        void attack( void ) const;
    
    private:
        Weapon&     _weapon;
        std::string _name;
};

#endif