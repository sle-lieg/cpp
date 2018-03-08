#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    public:
        Brain();
        ~Brain();

        std::string identify( void ) const;
    
    protected:

        int _neurones;
};

#endif