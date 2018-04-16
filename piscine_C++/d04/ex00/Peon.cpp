#include "Peon.hpp"

/**
 * **********************************
 * ********** CONSTRUCTORS **********
 * **********************************
 */
Peon::Peon() :
    Victim()
{}

Peon::Peon(std::string name) :
    Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src) :
    Victim(src._name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;    
}

/**
 * **********************************
 * ************ OPERATORS ***********
 * **********************************
 */

Peon& Peon::operator=(Peon const & src)
{
    _name = src._name;
    return *this;
}

/**
 * **********************************
 * ******** MEMBER FUNCTIONS ********
 * **********************************
 */
void    Peon::getPolymorphed() const
{
    std::cout << _name << " has been turned into a pink pony !" << std::endl;
}