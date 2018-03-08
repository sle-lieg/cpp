#include "Brain.hpp"
#include <iostream>

Brain::Brain() : _neurones(2)
{}

Brain::~Brain()
{}

std::string Brain::identify() const
{
    char *addr = *this;
    return std::string(addr);
}