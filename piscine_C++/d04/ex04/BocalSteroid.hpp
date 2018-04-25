#ifndef BOCALSTEROID_HPP
# define BOCALSTEROID_HPP

#include "IAsteroid.hpp"

class BocalSteroid : public IAsteroid
{
     public:
        BocalSteroid();
        ~BocalSteroid();

        virtual std::string beMined(DeepCoreMiner *) const;
        virtual std::string beMined(StripMiner *) const;
        virtual std::string getName() const;

    private:
        BocalSteroid(BocalSteroid const &);
        BocalSteroid& operator=(BocalSteroid const &);

        std::string _name;
};

#endif