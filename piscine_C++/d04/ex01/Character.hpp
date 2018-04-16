#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"

class Character
{
    private:
        std::string _name;
        int         _actionPoints;
        AWeapon*    _weapon;

    public:
        Character();
        Character(std::string const & name);
        Character(Character const &);
        ~Character();

        Character& operator=(Character const &);

        // void recoverAP();
        // void equip(AWeapon*);
        // void attack(Enemy*);
        // std::string const getName() const;
};

#endif