#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) :
    _type(type), _xp(0)
{}

AMateria::AMateria(AMateria const & amateria) :
    _type(amateria.getType()), _xp(amateria.getXP())
{}

AMateria::~AMateria()
{}

AMateria& AMateria::operator=(AMateria const & amateria)
{
    _type = amateria.getType();
    _xp = amateria.getXP();

    return *this;
}

void    AMateria::use(ICharacter& target)
{
    _xp += 10;
}