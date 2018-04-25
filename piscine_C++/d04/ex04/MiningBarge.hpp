#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

#include "IMiningLaser.hpp"

#define NB_LASERS 4

class MiningBarge
{
     public:
        MiningBarge();
        MiningBarge(MiningBarge const &);
        ~MiningBarge();

        MiningBarge& operator=(MiningBarge const &);

        void equip(IMiningLaser*);
        void mine(IAsteroid*) const;
    
    private:
        IMiningLaser* _lasers[4];
};

#endif