#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad
{
     public:
        Squad();
        Squad(Squad const &);
        virtual ~Squad();

        Squad& operator=(Squad const &);

        int             getCount() const;
        ISpaceMarine*   getUnit(int) const; // return the unit itself
        S_Squad*        getFirstUnit() const; // return the node of the first unit
        S_Squad*        getLastUnit() const; // return the node of the last unit
        int             push(ISpaceMarine*);

    private:
        void    destroySquad();
        void    cloneSquad(Squad const &);
        bool    isInSquad(ISpaceMarine*) const;

        S_Squad*        _firstUnit; // const pointer to the first unit of the squad
        S_Squad*        _lastUnit;  // pointer to the last unit
        int             _nbUnits;
};

#endif

/**
 *  TODO:
 *      -change the copy constructors and assignation
 */