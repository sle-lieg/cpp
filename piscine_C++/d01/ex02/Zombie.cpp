#include "Zombie.hpp"

Zombie::Zombie() : _name("Zombior"), _type("Human")
{}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{}

Zombie::~Zombie()
{}

void    Zombie::announce() const
{
    std::cout << "<" << _name << "(" << _type << ")> ggeuuuaajlailclivw..." << std::endl;
}