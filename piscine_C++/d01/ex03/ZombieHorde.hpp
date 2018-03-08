#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include <iostream>
#include <vector>
#include "Zombie.hpp"

class ZombieHorde
{
    public:

        ZombieHorde();
        ZombieHorde(int n);
        ~ZombieHorde();

        void    announce( void ) const;
    private:

        Zombie** _horde;
        // std::vector<Zombie*> _horde;
        int     _hordeLength;

        std::string _randName( void ) const;
};

#endif