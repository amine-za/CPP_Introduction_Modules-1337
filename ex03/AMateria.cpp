#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
    Type = type;
}

AMateria::~AMateria()
{
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
