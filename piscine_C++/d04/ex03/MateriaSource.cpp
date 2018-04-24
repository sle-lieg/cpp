#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
        _materias[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        if (src._materias[i])
            _materias[i] = src._materias[i]->clone();
        else
            _materias[i] = nullptr;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
        if (_materias[i])
            delete _materias[i];
}

MateriaSource& MateriaSource::operator=(MateriaSource const &src)
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        if (src._materias[i])
            _materias[i] = src._materias[i]->clone();
        else
            _materias[i] = nullptr;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        if (!_materias[i])
        {
            _materias[i] = materia->clone();
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < MAX_MATERIAS; ++i)
    {
        if (_materias[i] && _materias[i]->getType() == type)
            return _materias[i]->clone();
    }
    return nullptr;
}