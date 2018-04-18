#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
    public:
        virtual                 ~ISquad() {}
        virtual int             getCount() const = 0;
        virtual ISpaceMarine*   getUnit(int) const = 0;
        virtual int             push(ISpaceMarine*) = 0;

    protected:
        virtual void    destroySquad() = 0;
        // virtual void    cloneSquad(Squad const &) = 0;
        virtual bool    isInSquad(ISpaceMarine*) const = 0;

        ISpaceMarine*   _firstUnit; // const pointer to the first unit of the squad
        ISpaceMarine*   _lastUnit;  // pointer to the last unit
        int             _nbUnits;
};

#endif