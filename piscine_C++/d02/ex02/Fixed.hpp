#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>
#include <iostream>

#define FRACT_BITS 8
#define FACTOR (1 << FRACT_BITS)

class Fixed
{
    public:
        Fixed( void );
        Fixed( Fixed const & );
        Fixed( int const );
        Fixed( float const );
        ~Fixed( void );

        Fixed&  operator=( Fixed const & );
        
        bool    operator>( Fixed const & ) const;
        bool    operator<( Fixed const & ) const;
        bool    operator>=( Fixed const & ) const;
        bool    operator<=( Fixed const & ) const;
        bool    operator==( Fixed const & ) const;
        bool    operator!=( Fixed const & ) const;

        Fixed&  operator++( void );
        Fixed   operator++( int );
        Fixed&  operator--( void );
        Fixed   operator--( int );
        Fixed&  operator>>( int const ) const;

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

        static Fixed& min(Fixed &, Fixed &);
        static Fixed  const & min(Fixed const &, Fixed const &);
        static Fixed& max(Fixed &, Fixed &);
        static Fixed  const & max(Fixed const &, Fixed const &);

    private:
        static int const    _nbFractBits = FRACT_BITS;
        int                 _rawValue;
    
};

std::ostream & operator<<( std::ostream & flux, Fixed const & T );
Fixed operator+(Fixed const & obj1, Fixed const & obj2);
Fixed operator-(Fixed const & obj1, Fixed const & obj2);
Fixed operator*(Fixed const obj1, Fixed const obj2);
Fixed operator/(Fixed const & obj1, Fixed const & obj2);

#endif