#include "ZombieHorde.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

/**
 * WRITE THE RANDNAME FUNCTION IN THE ZOMBIE CLASS 
 * TO USE IT IN THE ZOMBIE CLASS CONSTRUCTOR
 */

ZombieHorde::ZombieHorde() : _hordeLength(10), _horde(new Zombie*[10])
{
    for (int i = 0; i < 10; ++i)
        _horde[i] = new Zombie(_randName(), "human");
    srand(time(NULL));
}

ZombieHorde::ZombieHorde(int n) : _hordeLength(n), _horde(new Zombie*[n])
{
    for (int i = 0; i < n; ++i)
        _horde[i] = new Zombie(_randName(), "human");
    srand(time(NULL));
}
ZombieHorde::~ZombieHorde()
{
    for (int i = 0; i < _hordeLength; ++i)
        delete _horde[i];    
    delete _horde;
}

// ZombieHorde::ZombieHorde() : _hordeLength(10), _horde(10)
// {
//     for (int i = 0; i < 10; ++i)
//         _horde[i] = new Zombie(_randName(), "human");
//     srand(time(NULL));
// }

// ZombieHorde::ZombieHorde(int n) : _hordeLength(n), _horde(n)
// {
//     for (int i = 0; i < n; ++i)
//         _horde[i] = new Zombie(_randName(), "human");
//     srand(time(NULL));
// }


// ZombieHorde::~ZombieHorde()
// {
//     for (int i = 0; i < _hordeLength; ++i)
//         delete _horde[i];    
// }

void    ZombieHorde::announce() const
{
    for (int i = 0; i < _hordeLength; ++i)
        _horde[i]->announce();
}

std::string ZombieHorde::_randName( void ) const
{
    int         randIndex;
    const int   LIST_LENGTH = 20;
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