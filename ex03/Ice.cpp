#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice & obj)
{
    *this = obj;
}

Ice::~Ice()
{
}

Ice* Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}

Ice &Ice::operator=(Ice const &obj)
{
    if (this != &obj)
        this->Type = obj.Type;
    return *this;
}