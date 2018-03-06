#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony
{
    public:

        Pony();
        ~Pony();
        Pony(std::string name, std::string race, int age);
        void    getRace( void ) const;
        void    getName( void ) const;
        void    getAge( void ) const;

    protected:

        std::string _name;
        std::string _race;
        int         _age;
};

#endif