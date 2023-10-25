#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
    public :
        Ice();
        Ice(const Ice & obj);
        ~Ice();       
        Ice* clone() const;
        void    use(ICharacter& target);

        Ice &operator=(Ice const &obj);
};

#endif