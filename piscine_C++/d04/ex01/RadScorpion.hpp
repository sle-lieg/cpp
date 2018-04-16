#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"
#include <iostream>

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion const &);
        virtual ~RadScorpion();

        RadScorpion& operator=(RadScorpion const &);
};
#endif