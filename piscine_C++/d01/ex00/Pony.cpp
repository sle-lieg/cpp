#include "Pony.hpp"
#include <iostream>

Pony::Pony() : _name("Poney"), _race("Stalion")
{}

Pony::Pony(std::string name, std::string race, int age) :
    _name(name), _race(race), _age(age)
{}

Pony::~Pony()
{}

std::string Pony::getRace() const
{
    return _race;
}

std::string Pony::getName() const
{
    return _name;
}

int Pony::getAge() const
{
    return _age;
}

void Pony::presentation() const
{
    std::cout << "Name: " << getName() << std::endl;
    std::cout << "Race: " << getRace() << std::endl;
    std::cout << "Age : " << getAge() << std::endl;    
}