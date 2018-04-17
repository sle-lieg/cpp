#ifndef ISQUAD_HPP
# define ISQUAD_HPP

#include "ISquad.hpp"

class Squad : public ISquad
{
     public:
        Squad();
        Squad(Squad const &);
        virtual ~Squad();

        Squad& operator=(Squad const &);

        int             getCount() const;
        ISpaceMarine*   getUnit(int) const;
        int             push(ISpaceMarine*);

    private:
        void    destroySquad();
        void    cloneSquad();
        bool    isInSquad(ISpaceMarine*) const;

        ISpaceMarine* const _firstUnit; // const pointer to the first unit of the squad
        ISpaceMarine*       _lastUnit;  // pointer to the last unit
        int                 _nbUnits;
};

#endif