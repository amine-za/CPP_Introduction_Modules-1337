#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    for(int x = 0; x < 4; x++)
        store[x] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
    if (this != &obj)
    {
        for(int x = 0; this->store[x]; x++)
            this->store[x] = obj.store[x];
    }
}

MateriaSource::~MateriaSource()
{
    for(int x = 0; store[x]; x++)
        delete store[x];
}

void    MateriaSource::learnMateria(AMateria* p)
{
    static int i;

    if (i < 4)
        store[i++] = p->clone();
    delete p;
}

AMateria    *MateriaSource::createMateria(std::string const &str)
{
    for(int x = 0; x < 4; x++)
    {
        if (store[x] && store[x]->getType() == str)
            return (store[x]->clone());
    }
    return (0);
}

MateriaSource &MateriaSource::operator=(MateriaSource const &obj)
{
    if (this != &obj)
    {
        for(int x = 0; this->store[x]; x++)
        {
            delete store[x];
            this->store[x] = obj.store[x];
        }
    }
    return *this;
}
