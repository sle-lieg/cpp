#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & T)
{
    std::cout << "Copy constructor called" << std::endl;    
    // _value = T.getRawBits();
    *this = T;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;    
}

Fixed& Fixed::operator=(Fixed const & T)
{
    std::cout << "Assignation operator called" << std::endl;    
    this->_value = T.getRawBits();

    return *this;
}

int Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;    
    this->_value = raw;
}