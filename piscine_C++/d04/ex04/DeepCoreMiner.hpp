#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
     public:
        DeepCoreMiner();
        ~DeepCoreMiner();

        virtual void mine(IAsteroid*);

    private:
        DeepCoreMiner(DeepCoreMiner const &);
        DeepCoreMiner& operator=(DeepCoreMiner const &);


};

#endif