#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        SuperMutant(SuperMutant const &);
        virtual ~SuperMutant();

        SuperMutant& operator=(SuperMutant const &);
        
        void    takeDamage(int);
};

#endif