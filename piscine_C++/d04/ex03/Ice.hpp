#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &);
        ~Ice();


        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);

    private:
        Ice& operator=(Ice const &);
};

#endif