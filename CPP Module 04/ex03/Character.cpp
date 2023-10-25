#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

Character::Character()
{
    Name = "default";
    for(int x = 0; x < 4; x++)
        array[x] = NULL;
    buffer[0] = NULL;
}

Character::Character(std::string name)
{
    Name = name;
    for(int x = 0; x < 4; x++)
        array[x] = NULL;
    buffer[0] = NULL;
}

Character::Character(const Character & obj)
{
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
    delete m;
}

void    Character::unequip(int i)
{
    if (i >= 0 && i <= 3)
    {
        add_to_buffer(buffer, array[i]);
        delete array[i];
        array[i] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx <= 3 && idx >= 0 && array[idx])
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
        {
            delete this->array[x];
            this->array[x] = obj.array[x]->clone();
        }
        for(int x = 0; obj.buffer[x]; x++)
        {
            delete this->buffer[x];
            this->buffer[x] = obj.buffer[x]->clone();
        }
    }
    return *this;
}
