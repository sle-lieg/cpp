#include "ZombieEvent.hpp"
// #include "Zombie.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

ZombieEvent::ZombieEvent() : _typeModel("Human")
{
    srand(time(NULL));    
}

ZombieEvent::~ZombieEvent()
{
    srand(time(NULL));    
}

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
    Zombie* newZombinio = new Zombie(_randName(), _typeModel);
    newZombinio->announce();
    return newZombinio;
}

std::string ZombieEvent::_randName() const
{
    int randIndex;
    const int LIST_LENGTH = 20;
    std::string nameList[LIST_LENGTH] = {
        "Zack",
        "Wedge",
        "Biggs",
        "Jessie",
        "Sephiroth",
        "Aerith",
        "Tifa",
        "Cait Sith",
        "Rouge XIII",
        "Yuffie",
        "Cid",
        "Jenova",
        "Barret",
        "Vincent",
        "Reno",
        "Tseng",
        "Rude",
        "Elena",
        "Hojo",
        "Rufus"
    };

    randIndex = rand() % LIST_LENGTH;
    return nameList[randIndex];
}