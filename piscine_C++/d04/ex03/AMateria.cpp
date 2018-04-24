#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) :
    _type(type), _xp(0), _nbEquiped(0)
{}

AMateria::AMateria(AMateria const & amateria) :
    _type(amateria.getType()), _xp(amateria.getXP()), _nbEquiped(0)
{}

AMateria::~AMateria()
{}

AMateria& AMateria::operator=(AMateria const & amateria)
{
    _xp = amateria.getXP();
    _nbEquiped = 0;

    return *this;
}

void    AMateria::use(ICharacter& target)
{
    _xp += 10;
    (void)target;
}

std::string const & AMateria::getType() const
{
    return _type;
}

unsigned int    AMateria::getXP() const
{
    return _xp;
}

void            AMateria::incrNbEquiped()
{
    _nbEquiped++;
}

void            AMateria::decrNbEquiped()
{
    _nbEquiped--;
}

unsigned int    AMateria::getNbEquiped() const
{
    return _nbEquiped;
}