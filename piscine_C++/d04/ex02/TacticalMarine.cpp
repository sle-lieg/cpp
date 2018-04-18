#include "TacticalMarine.hpp"

/********************************************************
 * ******************** CONSTRUCTORS ********************
********************************************************/
TacticalMarine::TacticalMarine() :
    _identifier(reinterpret_cast<size_t>(this)), _nbSquads(0), _next(nullptr)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & unit) :
    _identifier(reinterpret_cast<size_t>(this)), _nbSquads(0), _next(unit.getNext())
{
    std::cout << "Tactical Marine ready for battle" << std::endl;    
}

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
TacticalMarine& TacticalMarine::operator=(TacticalMarine const & unit)
{
    return *this;
}

/********************************************************
 * ****************** MEMBER FUNCTIONS ******************
********************************************************/
ISpaceMarine*   TacticalMarine::clone() const
{
    return dynamic_cast<ISpaceMarine*>(new TacticalMarine(*this));
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

size_t          TacticalMarine::getIdentifier() const
{
    return _identifier;
}

size_t          TacticalMarine::getNbSquad() const
{
    return _nbSquads;
}


ISpaceMarine*   TacticalMarine::getNext() const
{
    return _next;
}

ISpaceMarine*   TacticalMarine::setNext(ISpaceMarine* const unit)
{
    _next = unit;
    return this;
}

// ISpaceMarine*   TacticalMarine::setNbSquad(size_t nb)
// {
//     _nbSquads = nb;
//     return this;
// }

void            TacticalMarine::incrNbSquads()
{
    _nbSquads++;
}

void            TacticalMarine::decrNbSquads()
{
    _nbSquads--;
}
