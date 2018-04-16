#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        // PowerFist(std::string const & name, int apcost, int damage);
        PowerFist(PowerFist const &);
        ~PowerFist();

        PowerFist&    operator=(PowerFist const &);

        void    attack() const;
};

#endif