#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    public:
        Fixed( void );
        Fixed( Fixed const & );
        ~Fixed( void );
        Fixed& operator=( Fixed const & );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

    private:
        static int const    _nbFractBits = 8;
        int                 _value;
};

#endif