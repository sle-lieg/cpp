#ifndef ASTEROBOCAL_HPP
# define ASTEROBOCAL_HPP

#include "IAsteroid.hpp"

class AsteroBocal : public IAsteroid
{
     public:
        AsteroBocal();
        ~AsteroBocal();

        virtual std::string beMined(DeepCoreMiner *) const;
        virtual std::string beMined(StripMiner *) const;
        virtual std::string getName() const;

    private:
        AsteroBocal(AsteroBocal const &);
        AsteroBocal& operator=(AsteroBocal const &);

        std::string _name;

};

#endif