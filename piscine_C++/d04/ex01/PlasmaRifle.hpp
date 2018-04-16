#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        // PlasmaRifle(std::string const & name, int apcost, int damage);
        PlasmaRifle(PlasmaRifle const &);
        ~PlasmaRifle();

        PlasmaRifle&    operator=(PlasmaRifle const &);

        void    attack() const;
};

#endif