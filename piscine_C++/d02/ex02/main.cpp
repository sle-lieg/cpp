// #include <iostream>
#include "Fixed.hpp"

int main( void )
{
    // Fixed c(10.43f);
    // Fixed d(10.43f);
    // Fixed e(10.42f);
    // Fixed f(10.44f);
    
    
    // std::cout << std::boolalpha;
    // std::cout << "Fixed(10.43) > Fixed(10.42) : " << (c > e) << std::endl;
    // std::cout << "Fixed(10.43) > Fixed(10.44) : " << (c > f) << std::endl;
    // std::cout << "Fixed(10.43) >= Fixed(10.42) : " << (c >= e) << std::endl;
    // std::cout << "Fixed(10.43) >= Fixed(10.44) : " << (c >= f) << std::endl;
    // std::cout << "Fixed(10.43) <= Fixed(10.42) : " << (c <= e) << std::endl;    
    // std::cout << "Fixed(10.43) <= Fixed(10.44) : " << (c <= f) << std::endl;
    // std::cout << "Fixed(10.43) == Fixed(10.42) : " << (c == e) << std::endl;
    // std::cout << "Fixed(10.43) == Fixed(10.43) : " << (c == d) << std::endl;
    // std::cout << "Fixed(10.43) != Fixed(10.42) : " << (c != e) << std::endl;
    // std::cout << "Fixed(10.43) != Fixed(10.43) : " << (c != d) << std::endl;
    
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    std::cout << b << std::endl;
    // std::cout << Fixed::max( a, b ) << std::endl;
}