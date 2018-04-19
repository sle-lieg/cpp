#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISpaceMarine.hpp"

struct  S_Squad
{
        ISpaceMarine*   unit;
        S_Squad*        next;
};

class ISquad
{
    public:
        virtual                 ~ISquad() {}
        virtual int             getCount() const = 0;
        virtual ISpaceMarine*   getUnit(int) const = 0;
        virtual int             push(ISpaceMarine*) = 0;
};
        // virtual ISquad& operator=(ISquad const &) = 0;

    //     virtual S_Squad*        getFirstUnit() const = 0;
    //     virtual S_Squad*        getLastUnit() const = 0;

    // protected:
    //     virtual void    destroySquad() = 0;
    //     // virtual void    cloneSquad(Squad const &) = 0;
    //     virtual bool    isInSquad(ISpaceMarine*) const = 0;

    //     S_Squad*        _firstUnit; // const pointer to the first unit of the squad
    //     S_Squad*        _lastUnit;  // pointer to the last unit
    //     int             _nbUnits;

#endif

// TODO: -CHANGE S_Squad into a class, and restrict access to _unit and _next ?