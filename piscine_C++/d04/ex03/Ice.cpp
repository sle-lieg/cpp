#include "Ice.hpp"

Ice::Ice() :
    AMateria("ice")
{}

Ice::Ice(Ice const & ice) :
    AMateria(ice)
{}

Ice::~Ice()
{}

AMateria* Ice::clone() const
{
    return new Ice(*this);
}

void    Ice::use(ICharacter & target)
{
    AMateria::use(target);
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
