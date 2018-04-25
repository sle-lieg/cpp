#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
     public:
        StripMiner();
        ~StripMiner();

        virtual void mine(IAsteroid*);

    private:
        StripMiner(StripMiner const &);
        StripMiner& operator=(StripMiner const &);


};

#endif