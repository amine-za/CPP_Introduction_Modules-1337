#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *store[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& obj);
        ~MateriaSource();
        void        learnMateria(AMateria* p);
        AMateria    *createMateria(std::string const &p);

        MateriaSource &operator=(MateriaSource const &obj);
};

#endif