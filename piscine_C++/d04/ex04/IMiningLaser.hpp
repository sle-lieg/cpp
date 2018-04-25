#ifndef IMININGLASER_HPP
# define IMININGLASER_HPP

class IAsteroid;
#include "IAsteroid.hpp"
#include <iostream>

class IMiningLaser
{
    public:
        virtual ~IMiningLaser() {}
        virtual void mine(IAsteroid*) = 0;
};

#endif