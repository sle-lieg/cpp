#include "ZombieEvent.hpp"
// #include "Zombie.hpp"
#include <iostream>

ZombieEvent::ZombieEvent() : _typeModel("Human")
{}

ZombieEvent::~ZombieEvent()
{}

void    ZombieEvent::setZombieType(std::string type)
{
    if (type != "")
        _typeModel = type;
}

Zombie* ZombieEvent::newZombie(std::string name) const
{
    return new Zombie(name, _typeModel);
}

Zombie* ZombieEvent::randomChump() const
{
    // Zombie* newZombinio = new Zombie(_randName(), _typeModel);
    // newZombinio->announce();
    // return newZombinio;
}