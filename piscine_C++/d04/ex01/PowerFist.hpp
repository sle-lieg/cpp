#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(PowerFist const &);
        ~PowerFist();

        PowerFist&    operator=(PowerFist const &);

        void    attack() const;
};

#endif