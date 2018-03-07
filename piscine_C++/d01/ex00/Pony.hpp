#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
    public:

        Pony();
        ~Pony();
        Pony(std::string name, std::string race, int age);
        std::string     getRace( void ) const;
        std::string     getName( void ) const;
        int             getAge( void ) const;
        void            presentation() const;

    protected:

        std::string _name;
        std::string _race;
        int         _age;
};

#endif