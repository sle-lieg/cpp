#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &);
        ~Ice();

        AMateria*   clone() const;
        void        use(ICharacter& target);
    private:
        Ice& operator=(Ice const &);
};

#endif