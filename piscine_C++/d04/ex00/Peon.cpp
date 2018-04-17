#include "Peon.hpp"

/******************************************************************
************************* PEON CLASS ******************************
******************************************************************/

/**
 * **********************************
 * ********** CONSTRUCTORS **********
 * **********************************
 */
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

/******************************************************************
************************* LOOSER CLASS ****************************
******************************************************************/

/**
 * **********************************
 * ********** CONSTRUCTORS **********
 * **********************************
 */
Looser::Looser(std::string name) :
    Peon(name)
{
    std::cout << "Piouc Piouc." << std::endl;
}

Looser::Looser(Looser const & src) :
    Peon(src._name)
{
    std::cout << "Piouc Piouc." << std::endl;
}

Looser::~Looser()
{
    std::cout << "UUUUnicorn" << std::endl;    
}

/**
 * **********************************
 * ************ OPERATORS ***********
 * **********************************
 */

Looser& Looser::operator=(Looser const & src)
{
    _name = src._name;
    return *this;
}

/**
 * **********************************
 * ******** MEMBER FUNCTIONS ********
 * **********************************
 */
void    Looser::getPolymorphed() const
{
    std::cout << _name << " has been turned into a superb unicorn !" << std::endl;
}