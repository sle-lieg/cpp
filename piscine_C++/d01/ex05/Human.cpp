#include "Human.hpp"
#include <iostream>

Human::Human() : _smart(Brain)
{}

Human::~Human()
{}

std::string Human::identify() const
{
    return _smart.identify();
}

const Brain& Human::getBrain() const
{
    return _smart;
}