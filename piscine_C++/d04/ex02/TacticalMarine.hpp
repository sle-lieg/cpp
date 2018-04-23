#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    public:
        TacticalMarine();
        ~TacticalMarine();

        TacticalMarine& operator++();
        TacticalMarine& operator--();

        virtual ISpaceMarine*   clone() const;
        virtual void            battleCry() const;
        virtual void            rangedAttack() const;
        virtual void            meleeAttack() const;

        virtual size_t          getNbSquad() const;

    private:
        TacticalMarine(TacticalMarine const &);
        TacticalMarine& operator=(TacticalMarine const &);

        size_t          _nbSquads;
};