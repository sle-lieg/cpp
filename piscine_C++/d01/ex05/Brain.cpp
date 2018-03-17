#include "Brain.hpp"
#include <iostream>
#include <sstream>

Brain::Brain() : _neurones(2)
{}

Brain::~Brain()
{}

std::string Brain::identify() const
{
    std::ostringstream addr;

    addr << this;
    return addr.str();
}