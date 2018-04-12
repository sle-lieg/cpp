#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;    
}

Fixed::Fixed(Fixed const & T)
{
    std::cout << "Copy constructor called" << std::endl;    
    *this = T;
}

Fixed::Fixed( int const val) : _value(static_cast<int>(val * (1 << (_nbFractBits - 1))))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const val) : _value(static_cast<int>(roundf(val * (1 << (_nbFractBits - 1)))))
{
    std::cout << "Float constructor called" << std::endl;
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

float   Fixed::toFloat() const
{
    return static_cast<float>(_value) / (1 << (_nbFractBits - 1));
}

int   Fixed::toInt() const
{
    return static_cast<int>(_value / (1 << (_nbFractBits - 1)));
}

std::ostream&  operator<<(std::ostream & flux, Fixed const & T)
{
    flux << T.toFloat();
    return flux;
}