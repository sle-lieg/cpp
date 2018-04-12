#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>
#include <iostream>

class Fixed
{
    public:
        Fixed( void );
        Fixed( Fixed const & );
        Fixed( int const );
        Fixed( float const );
        ~Fixed( void );

        Fixed&  operator=( Fixed const & );
        
        bool    operator>( Fixed const & );
        bool    operator<( Fixed const & );
        bool    operator>=( Fixed const & );
        bool    operator<=( Fixed const & );
        bool    operator==( Fixed const & );
        bool    operator!=( Fixed const & );

        Fixed&  operator>>( int const );


        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:
        static int const    _nbFractBits = 8;
        int                 _value;
};

std::ostream & operator<<( std::ostream & flux, Fixed const & T );
Fixed operator+(Fixed const & obj1, Fixed const & obj2);
Fixed operator-(Fixed const & obj1, Fixed const & obj2);
Fixed operator*(Fixed const obj1, Fixed const obj2);
Fixed operator/(Fixed const & obj1, Fixed const & obj2);

#endif