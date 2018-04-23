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

#endif

// TODO: -CHANGE S_Squad into a class, and restrict access to _unit and _next ?