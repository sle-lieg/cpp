#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        TacticalMarine(TacticalMarine const &);
        ~TacticalMarine();

        TacticalMarine& operator++();
        TacticalMarine& operator--();

       // Methodes
        virtual ISpaceMarine*   clone() const;
        virtual void            battleCry() const;
        virtual void            rangedAttack() const;
        virtual void            meleeAttack() const;
        // virtual void            incrNbSquads();
        // virtual void            decrNbSquads();

        // Getters
        virtual size_t          getNbSquad() const;

    protected:
        TacticalMarine& operator=(TacticalMarine const &);
        

        size_t          _nbSquads;        
};

/**
 *  TODO:
 *      -overload the getters and setters to return object and not pointers
 *      - modify constructor
 */