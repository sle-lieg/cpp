#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad
{
     public:
        Squad();
        Squad(Squad const &);
        // Squad(ISquad const &);
        virtual ~Squad();

        Squad& operator=(Squad const &);
        // Squad& operator=(ISquad const &);

        int             getCount() const;
        ISpaceMarine*   getUnit(int) const;
        int             push(ISpaceMarine*);

    private:
        virtual void    destroySquad();
        virtual void    cloneSquad(Squad const &);
        virtual bool    isInSquad(ISpaceMarine*) const;

        ISpaceMarine*   _firstUnit; // const pointer to the first unit of the squad
        ISpaceMarine*   _lastUnit;  // pointer to the last unit
        int             _nbUnits;
};

#endif

/**
 *  TODO:
 *      -change the copy constructors and assignation
 *      
 */