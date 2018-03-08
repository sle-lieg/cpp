#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>

class Human
{
    public:

        Human();
        ~Human();

        std::string identify( void ) const;
        Brain& getBrain() const;

    protected:

        const Brain _smart;
};

#endif