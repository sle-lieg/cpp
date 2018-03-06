#include "Pony.hpp"

Pony::Pony() : _name("Poney"), _race("Stalion")
{}

Pony::Pony(std::string name, std::string race, int age) :
    _name(name), _race(race), _age(age)
{}

Pony::~Pony()

void Pony::getRace() const
{
    return _race;
}

void Pony::getName() const
{
    return _name;
}
 void Pony::getAge() const
 {
     return _age;
 }