#include "Fixed.hpp"
#include <cmath>

/**
 *  ********** CONSTRUCTORS **********
 */
Fixed::Fixed() : _rawValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj)
{
    std::cout << "Copy constructor called" << std::endl;    
    *this = obj;
}

Fixed::Fixed(int const val) : _rawValue(val << _nbFractBits)
{
    std::cout << "Int constructor called" << std::endl;
}

// Fixed::Fixed( int const val) : _rawValue(static_cast<int>(val * (1 << (_nbFractBits - 1))))
// {
//     std::cout << "Int constructor called" << std::endl;
// }

Fixed::Fixed(float const val) : _rawValue(static_cast<int>(roundf(val * FACTOR)))
{
    std::cout << "Float constructor called" << std::endl;
}

// Fixed::Fixed( float const val) : _rawValue(static_cast<int>(roundf(val * (1 << (_nbFractBits - 1)))))
// {
//     std::cout << "Float constructor called" << std::endl;
// }

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
    this->_rawValue = obj.getRawBits();

    return *this;
}

std::ostream&  operator<<(std::ostream & flux, Fixed const & obj)
{
    flux << obj.toFloat();
    return flux;
}

bool    Fixed::operator>( Fixed const & obj) const
{
    return this->_rawValue > obj.getRawBits();
}

bool    Fixed::operator<( Fixed const & obj) const
{
    return this->_rawValue < obj.getRawBits();
}

bool    Fixed::operator>=( Fixed const & obj) const
{
    return this->_rawValue >= obj.getRawBits();
}

bool    Fixed::operator<=( Fixed const & obj) const
{
    return this->_rawValue <= obj.getRawBits();
}

bool    Fixed::operator==( Fixed const & obj) const
{
    return this->_rawValue == obj.getRawBits();
}

bool    Fixed::operator!=( Fixed const & obj) const
{
    return this->_rawValue != obj.getRawBits();
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
    // Fixed tmp;

    // tmp.setRawBits((long int)((obj1.getRawBits() * (obj2.getRawBits()) >> 8)));
    // return tmp;
    // return Fixed((static_cast<float>(obj1.getRawBits()) / FACTOR) * (static_cast<float>(obj2.getRawBits()) / FACTOR));
    return Fixed(obj1.toFloat() * obj2.toFloat());
}

// Fixed&  Fixed::operator>>(int const n)
// {
//     _rawValue >>= n;
//     return *this;
// }

Fixed   operator/(Fixed const & obj1, Fixed const & obj2)
{
    return Fixed(obj1.toFloat() / obj2.toFloat());
}

Fixed&  Fixed::operator++()
{
    this->_rawValue++;
    return *this;
}

Fixed   Fixed::operator++(int v)
{
    Fixed tmp(*this);

    this->_rawValue++;
    return tmp;
}

Fixed&  Fixed::operator--()
{
    this->_rawValue--;
    return *this;
}

Fixed   Fixed::operator--(int v)
{
    Fixed tmp(*this);

    this->_rawValue--;
    return tmp;
}

/**
 *  ********** MEMBER FUNCTIONS **********
 */
int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_rawValue;
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;    
    this->_rawValue = raw;
}

float   Fixed::toFloat() const
{
    return static_cast<float>(_rawValue) / FACTOR;
}

int   Fixed::toInt() const
{
    return _rawValue / FACTOR;
}

/**
 *  ********** NON MEMBER FUNCTIONS **********
 */
Fixed&  Fixed::min(Fixed & fp1, Fixed & fp2)
{
    return fp1.getRawBits() < fp2.getRawBits() ? fp1 : fp2;
}

Fixed const &  Fixed::min(Fixed const & fp1, Fixed const & fp2)
{
    return fp1.getRawBits() < fp2.getRawBits() ? fp1 : fp2;
}

Fixed&  Fixed::max(Fixed & fp1, Fixed & fp2)
{
    return fp1.getRawBits() > fp2.getRawBits() ? fp1 : fp2;
}

Fixed const &  Fixed::max(Fixed const & fp1, Fixed const & fp2)
{
    return fp1.getRawBits() > fp2.getRawBits() ? fp1 : fp2;
}