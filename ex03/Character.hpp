#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private :
        std::string Name;
        AMateria*   array[4];
        AMateria*   buffer[1];

    public :
        Character();
        Character(std::string name);
        Character( const Character & obj );
        ~Character();
        std::string const & getName() const;
        void unequip(int idx);
        void equip(AMateria* m);
        virtual void use(int idx, ICharacter& target);

        Character &operator=(Character const & rhs);
};

#endif