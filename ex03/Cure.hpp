#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
    public :
        Cure();
        // Cure( const Cure & obj );
        ~Cure();   
        Cure* clone() const;
        void    use(ICharacter& target);

        // Cure &operator=(Cure const &obj);
};

#endif