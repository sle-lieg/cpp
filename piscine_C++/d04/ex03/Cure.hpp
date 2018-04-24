#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &);
        ~Cure();

        virtual AMateria*   clone() const;
        virtual void        use(ICharacter& target);

    private:
        Cure& operator=(Cure const &);
        int _nbAssociations;
};

#endif