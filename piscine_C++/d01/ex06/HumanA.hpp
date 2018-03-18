#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    public:
        HumanA();
        HumanA(std::string name);
        HumanA(std::string name, const Weapon& weapon);
        ~HumanA();

        void attack( void ) const;
    
    private:

        const Weapon*     _weapon;
        // Weapon      _weapon;
        // Weapon&     _weapon; //Impossible d'initialiser a null

        std::string _name;
};

#endif