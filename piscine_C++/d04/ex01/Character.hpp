#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    public:
        Character(std::string const & name);
        Character(Character const &);
        ~Character();

        Character& operator=(Character const &);

        void                recoverAP();
        void                equip(AWeapon*);
        void                attack(Enemy*);
        std::string const   getName() const;
        std::string const   getWeaponName() const;
        AWeapon*            getWeapon() const;
        int                 getAP() const;

    private:
        Character();

        std::string _name;
        int         _actionPoints;
        AWeapon*    _weapon;
};

std::ostream& operator<<(std::ostream & flux, Character const &);

#endif