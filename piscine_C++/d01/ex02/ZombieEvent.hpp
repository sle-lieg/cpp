#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent
{
    public:
        ZombieEvent();
        ~ZombieEvent();

        void    setZombieType(std::string type);
        Zombie* newZombie(std::string name) const;
        Zombie* randomChump( void ) const;

    private:
        std::string _typeModel;
};

#endif