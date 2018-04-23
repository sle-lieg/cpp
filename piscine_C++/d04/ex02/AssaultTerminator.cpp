#include "AssaultTerminator.hpp"

/********************************************************
 * ******************** CONSTRUCTORS ********************
********************************************************/
AssaultTerminator::AssaultTerminator() :
    _nbSquads(0)
{
    std::cout << "* teleports from space *" << std::endl;
}

// AssaultTerminator::AssaultTerminator(AssaultTerminator const & unit) :
//     _nbSquads(0)
// {
//     (void)unit;
//     std::cout << "Tactical Marine ready for battle" << std::endl;    
//     return dynamic_cast<ISpaceMarine*>(new AssaultTerminator);

// }

/********************************************************
 * ********************* DESTRUCTOR *********************
********************************************************/
AssaultTerminator::~AssaultTerminator()
{
    std::cout << "I’ll be back ..." << std::endl;
}

/********************************************************
 * ********************* OPERATORS **********************
********************************************************/
// AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const & unit)
// {
//     (void)unit;
//     return *this;
// }

AssaultTerminator& AssaultTerminator::operator++()
{
    _nbSquads++;
    return *this;
}

AssaultTerminator& AssaultTerminator::operator--()
{
    _nbSquads--;
    return *this;
}

/********************************************************
 * ****************** MEMBER FUNCTIONS ******************
********************************************************/
// ISpaceMarine*   AssaultTerminator::clone() const
// {
//     return dynamic_cast<ISpaceMarine*>(new AssaultTerminator(*this));
// }

ISpaceMarine*   AssaultTerminator::clone() const
{
    return dynamic_cast<ISpaceMarine*>(new AssaultTerminator);
}

void            AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void            AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;    
}
void            AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}

// size_t          AssaultTerminator::getIdentifier() const
// {
//     return _identifier;
// }

size_t          AssaultTerminator::getNbSquad() const
{
    return _nbSquads;
}