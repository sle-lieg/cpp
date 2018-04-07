#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    public:
        Fixed( void );
        ~Fixed( void );
        Fixed( Fixed const & );
        Fixed& operator=( Fixed const & );

        int     getRawBits( void ) const;
        void    setRawBits( int const raw );

    private:
        int _value;
        static int const _nbFractBits = 8;
};

#endif