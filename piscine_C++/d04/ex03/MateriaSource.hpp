#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &);
        virtual ~MateriaSource();

        MateriaSource& operator=(MateriaSource const &);

        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);

    private:
        AMateria* _materias[4];
};

#endif