#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
    public:
        AssaultTerminator();
        ~AssaultTerminator();

        AssaultTerminator& operator++();
        AssaultTerminator& operator--();

        virtual ISpaceMarine*   clone() const;
        virtual void            battleCry() const;
        virtual void            rangedAttack() const;
        virtual void            meleeAttack() const;

        virtual size_t          getNbSquad() const;

    private:
        AssaultTerminator(AssaultTerminator const &);
        AssaultTerminator& operator=(AssaultTerminator const &);

        size_t          _nbSquads;
};