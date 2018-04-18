#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

#include <iostream>

class ISpaceMarine
{
    public:
       virtual ~ISpaceMarine() {}
       
       // Methodes
       virtual ISpaceMarine*    clone() const = 0;
       virtual void             battleCry() const = 0;
       virtual void             rangedAttack() const = 0;
       virtual void             meleeAttack() const = 0;
       virtual void             incrNbSquads() = 0;
       virtual void             decrNbSquads() = 0;

        // Getters
        virtual size_t          getIdentifier() const = 0;
        virtual size_t          getNbSquad() const = 0;
        virtual ISpaceMarine*   getNext() const = 0;
        
        //Setters
        // virtual ISpaceMarine*   setNbSquad(size_t nb) = 0;
        virtual ISpaceMarine*   setNext(ISpaceMarine* const) = 0;
    
    protected:
        size_t          _identifier;
        size_t          _nbSquads;
        ISpaceMarine*   _next;
};

#endif
