#include "Fixed.hpp"
#include <cmath>

/**
 *  ********** CONSTRUCTORS **********
 */
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj)
{
    std::cout << "Copy constructor called" << std::endl;    
    *this = obj;
}

Fixed::Fixed( int const val) : _value(static_cast<int>(val * (1 << (_nbFractBits - 1))))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float const val) : _value(static_cast<int>(roundf(val * (1 << (_nbFractBits - 1)))))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Default destructor called" << std::endl;    
}

/**
 *  ********** OPERATORS OVERLOAD **********
 */
Fixed& Fixed::operator=(Fixed const & obj)
{
    std::cout << "Assignation operator called" << std::endl;    
    this->_value = obj.getRawBits();

    return *this;
}

std::ostream&  operator<<(std::ostream & flux, Fixed const & obj)
{
    flux << obj.toFloat();
    return flux;
}

bool    Fixed::operator>( Fixed const & obj)
{
    return this->getRawBits() > obj.getRawBits();
}

bool    Fixed::operator<( Fixed const & obj)
{
    return this->getRawBits() < obj.getRawBits();
}

bool    Fixed::operator>=( Fixed const & obj)
{
    return this->getRawBits() >= obj.getRawBits();
}

bool    Fixed::operator<=( Fixed const & obj)
{
    return this->getRawBits() <= obj.getRawBits();
}

bool    Fixed::operator==( Fixed const & obj)
{
    return this->getRawBits() == obj.getRawBits();
}

bool    Fixed::operator!=( Fixed const & obj)
{
    return this->getRawBits() != obj.getRawBits();
}

Fixed   operator+(Fixed const & obj1, Fixed const & obj2)
{
    return Fixed(obj1.toFloat() + obj2.toFloat());
}

Fixed   operator-(Fixed const & obj1, Fixed const & obj2)
{
    return Fixed(obj1.toFloat() - obj2.toFloat());
}

Fixed   operator*(Fixed const obj1, Fixed const obj2)
{
    std::cout << "obj1" << obj1.getRawBits() << std::endl;
    std::cout << "obj2" << obj2.getRawBits() << std::endl;
    Fixed tmp(static_cast<float>((obj1.getRawBits() * obj2.getRawBits())) / (1 >> 16));
    return tmp;
    // return Fixed(obj1.getRawBits() * obj2.getRawBits() / (1 << 8));
}

// Fixed&  Fixed::operator>>(int const n)
// {
//     _value >>= n;
//     return *this;
// }

Fixed   operator/(Fixed const & obj1, Fixed const & obj2)
{
    return Fixed(obj1.toFloat() / obj2.toFloat());
}
/**
 *  ********** MEMBER FUNCTIONS **********
 */
int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
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
