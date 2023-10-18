#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default Constructor has been called" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "AMateria type taking Constructor has been called" << std::endl;
    Type = type;
}

// AMateria::AMateria(const AMateria& obj)
// {
//     std::cout << "AMateria copy Constructor has been called" << std::endl;
//     // *this = obj;
//     if (this != &obj)
//         this->Type = obj.Type;
// }

AMateria::~AMateria()
{
    std::cout << "AMateria Destructor has been called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return (Type);
}

void    AMateria::use(ICharacter& target)
{
    (void)target;
    std::cout << "AMateria use function default message" << std::endl;
}

// AMateria &AMateria::operator=(AMateria const &obj)
// {
//     if (this != &obj)
//         this->Type = obj.Type;
//     return *this;
// }
