#include "Cure.hpp"


Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default Constructor has been called" << std::endl;
}

// Cure::Cure(const Cure & obj)
// {
//     std::cout << "Cure copy Constructor has been called" << std::endl;
//     // *this = obj;
//     if (this != &obj)
//         this->Type = obj.Type;
// }

Cure::~Cure()
{
    std::cout << "Cure Destructor has been called" << std::endl;
}

Cure* Cure::clone() const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

// Cure &Cure::operator=(Cure const &obj)
// {
//     if (this != &obj)
//         this->Type = obj.Type;
//     return *this;
// }
