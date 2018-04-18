#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(TacticalMarine const &);
        ~TacticalMarine();

       // Methodes
        virtual ISpaceMarine*   clone() const;
        virtual void            battleCry() const;
        virtual void            rangedAttack() const;
        virtual void            meleeAttack() const;
        virtual void            incrNbSquads();
        virtual void            decrNbSquads();

        // Getters
        virtual size_t          getIdentifier() const;
        virtual size_t          getNbSquad() const;
        virtual ISpaceMarine*   getNext() const;

        //Setters
        // virtual ISpaceMarine*   setNbSquad(size_t nb);
        virtual ISpaceMarine*   setNext(ISpaceMarine* const);

    protected:
        TacticalMarine& operator=(TacticalMarine const &);

        size_t          _identifier;
        size_t          _nbSquads;        
        ISpaceMarine*   _next;
};

/**
 *  TODO:
 *      -overload the getters and setters to return object and not pointers
 *      - modify constructor
 */