#include "Victim.hpp"

/**
 * **********************************
 * ********** CONSTRUCTORS **********
 * **********************************
 */
Victim::Victim()
{}

Victim::Victim(std::string name) :
    _name(name)
{
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim(Victim const & src) :
    _name(src._name)
{
    std::cout << "Some random victim called " << _name << " just popped !" << std::endl;    
}

Victim::~Victim()
{
    std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

/**
 * **********************************
 * ************ OPERATORS ***********
 * **********************************
 */
Victim& Victim::operator=(Victim const & src)
{
    _name = src._name;
    return *this;
}

std::ostream&   operator<<(std::ostream & flux, Victim const & src)
{
    flux << "I'm " << src.getName() << " and I like otters !" << std::endl;
    return flux;
}

/**
 * **********************************
 * ******** MEMBER FUNCTIONS ********
 * **********************************
 */
std::string Victim::getName() const
{
    return _name;
}

void    Victim::getPolymorphed() const
{
    std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}