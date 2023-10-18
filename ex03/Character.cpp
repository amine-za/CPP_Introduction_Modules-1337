#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character()
{
    std::cout << "Character default Constructor has been called" << std::endl;
    Name = "default";
    for(int x = 0; x < 4; x++)
        array[x] = NULL;
    buffer[0] = NULL;
}

Character::Character(std::string name)
{
    std::cout << "Character name taking Constructor has been called" << std::endl;
    Name = name;
    for(int x = 0; x < 4; x++)
        array[x] = NULL;
    buffer[0] = NULL;
}

Character::Character(const Character & obj)
{
    std::cout << "Character copy Constructor has been called" << std::endl;
    // *this = obj;
    if (this != &obj)
    {
        this->Name = obj.Name;
        for(int x = 0; obj.array[x]; x++)
            this->array[x] = obj.array[x]->clone();

        for(int x = 0; obj.buffer[x]; x++)
            this->buffer[x] = obj.buffer[x]->clone();
    }
}

Character::~Character()
{
    std::cout << "Character Destructor has been called" << std::endl;
    for(int x = 0; array[x]; x++)
        delete array[x];
}

void    add_to_buffer(AMateria **buffer, AMateria *m)
{
    static int i;
    AMateria *new_buffer[i+2];

    buffer[i+1] = NULL;
    for(int x = 0; x < i; x++)
        new_buffer[x] = buffer[x];
    new_buffer[i] = m;
    // delete(buffer);
    buffer = new_buffer;
    i++;
}

void    Character::equip(AMateria *m)
{
    int indx = 0;

    while (array[indx] && indx < 4)
        indx++;
    if (indx < 4)
        array[indx] = m->clone();
    // delete m;
    // std::cout << "i survived\n";
}

void    Character::unequip(int i)
{
    add_to_buffer(buffer, array[i]);
    array[i] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && idx >= 0 && array[idx])
        array[idx]->use(target);
}

std::string const &Character::getName() const
{
    return (Name);
}

Character &Character::operator=(Character const &obj)
{
    if (this != &obj)
    {
        this->Name = obj.Name;
        for(int x = 0; obj.array[x]; x++)
            this->array[x] = obj.array[x]->clone();

        for(int x = 0; obj.buffer[x]; x++)
            this->buffer[x] = obj.buffer[x]->clone();
    }
    return *this;
}
