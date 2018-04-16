#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
    protected:
        std::string _name;
        int         _apCost;
        int         _damage;

    public:
        AWeapon(void);
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const &);
        virtual ~AWeapon();

        AWeapon& operator=(AWeapon const &);

        std::string const   getName() const;
        int                 getAPCost() const;
        int                 getDamage() const;
        virtual void        attack() const = 0;
};

#endif