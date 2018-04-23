#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &);
        ~Ice();

        Ice& operator=(Ice const &);

        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
    
    // private:
    //     std::string     _type;
    //     unsigned int    _xp;
};

#endif