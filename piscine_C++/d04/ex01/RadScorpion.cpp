#include "RadScorpion.hpp"

RadScorpion::RadScorpion() :
    Enemy(80, "RadScorpion")
{
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) :
    Enemy(src._hitPoints, src._type)
{
    std::cout << "* click click click *" << std::endl;    
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;    
}

RadScorpion& RadScorpion::operator=(RadScorpion const & src)
{
    _hitPoints = src._hitPoints;
    _type = src._type;

    return *this;
}