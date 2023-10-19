#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure & obj)
{
    *this = obj;
}

Cure::~Cure()
{
}

Cure* Cure::clone() const
{
    return (new Cure(*this));
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure &Cure::operator=(Cure const &obj)
{
    if (this != &obj)
        this->Type = obj.Type;
    return *this;
}
