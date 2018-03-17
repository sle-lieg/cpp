#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

Human::Human()
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