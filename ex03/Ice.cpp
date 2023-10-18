#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default Constructor has been called" << std::endl;
}

// Ice::Ice(const Ice & obj)
// {
//     std::cout << "Ice copy Constructor has been called" << std::endl;
//     // *this = obj;
//     if (this != &obj)
//         this->Type = obj.Type;
// }

Ice::~Ice()
{
    std::cout << "Ice Destructor has been called" << std::endl;
}

Ice* Ice::clone() const
{
    return (new Ice(*this));
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}

// Ice &Ice::operator=(Ice const &obj)
// {
//     if (this != &obj)
//         this->Type = obj.Type;
//     return *this;
// }