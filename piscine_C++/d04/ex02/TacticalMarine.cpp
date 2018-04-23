#include "TacticalMarine.hpp"

/********************************************************
 * ******************** CONSTRUCTORS ********************
********************************************************/
TacticalMarine::TacticalMarine() :
    _nbSquads(0)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

// TacticalMarine::TacticalMarine(TacticalMarine const & unit) :
//     _nbSquads(0)
// {
//     (void)unit;
//     std::cout << "Tactical Marine ready for battle" << std::endl;    
//     return dynamic_cast<ISpaceMarine*>(new TacticalMarine);

// }

/********************************************************
 * ********************* DESTRUCTOR *********************
********************************************************/
TacticalMarine::~TacticalMarine()
{
    std::cout << "Aaargh ..." << std::endl;
}

/********************************************************
 * ********************* OPERATORS **********************
********************************************************/
// TacticalMarine& TacticalMarine::operator=(TacticalMarine const & unit)
// {
//     (void)unit;
//     return *this;
// }

TacticalMarine& TacticalMarine::operator++()
{
    _nbSquads++;
    return *this;
}

TacticalMarine& TacticalMarine::operator--()
{
    _nbSquads--;
    return *this;
}

/********************************************************
 * ****************** MEMBER FUNCTIONS ******************
********************************************************/
// ISpaceMarine*   TacticalMarine::clone() const
// {
//     return dynamic_cast<ISpaceMarine*>(new TacticalMarine(*this));
// }

ISpaceMarine*   TacticalMarine::clone() const
{
    return dynamic_cast<ISpaceMarine*>(new TacticalMarine);
}

void            TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void            TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;    
}
void            TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}

// size_t          TacticalMarine::getIdentifier() const
// {
//     return _identifier;
// }

size_t          TacticalMarine::getNbSquad() const
{
    return _nbSquads;
}


// ISpaceMarine*   TacticalMarine::getNext() const
// {
//     return _next;
// }

// ISpaceMarine*   TacticalMarine::setNext(ISpaceMarine* const unit)
// {
//     _next = unit;
//     return this;
// }

// ISpaceMarine*   TacticalMarine::setNbSquad(size_t nb)
// {
//     _nbSquads = nb;
//     return this;
// }

// void            TacticalMarine::incrNbSquads()
// {
//     _nbSquads++;
// }

// void            TacticalMarine::decrNbSquads()
// {
//     _nbSquads--;
// }
