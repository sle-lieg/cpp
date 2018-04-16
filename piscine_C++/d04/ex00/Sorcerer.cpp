#include "Sorcerer.hpp"

/**
 * **********************************
 * ********** CONSTRUCTORS **********
 * **********************************
 */
Sorcerer::Sorcerer()
{
    throw "Error: missing NAME and/or TITLE";
}

Sorcerer::Sorcerer(std::string const name, std::string const title) :
    _name(name), _title(title)
{
    std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src) :
    _name(src._name), _title(src._title)
{
    std::cout << _name << ", " << _title << ", is born !" << std::endl;    
}

Sorcerer::~Sorcerer()
{
    std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

/**
 * **********************************
 * ************ OPERATORS ***********
 * **********************************
 */
Sorcerer& Sorcerer::operator=(Sorcerer const & src)
{
    _name = src._name;
    _title = src._title;

    return *this;
}

std::ostream&   operator<<(std::ostream & flux, const Sorcerer::Sorcerer & src)
{
    flux <<  "I am " << src.getName() << ", " << src.getTitle() << ", and I like ponies !" << std::endl;    
    return flux;
}

/**
 * **********************************
 * ******** MEMBER FUNCTIONS ********
 * **********************************
 */
std::string Sorcerer::getName() const
{
    return _name;
}

std::string Sorcerer::getTitle() const
{
    return _title;
}

void        Sorcerer::polymorph(Victim const & victim) const
{
    victim.getPolymorphed();
}