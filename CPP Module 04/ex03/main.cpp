#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    system("leaks materia");
    return 0;
}

//---------------Test 1---------------
// void    fct()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
// }

// int main()
// {
//     fct();
//     system("leaks materia");
//     return (0);
// }


//---------------Test 2---------------
// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
    
//     // It should print ice - cure - ice - ice
//     me->use(0, *bob);
//     me->use(1, *bob);
//     me->use(2, *bob);
//     me->use(3, *bob);
//     me->use(4, *bob);

//     std::cout << "------------------------" << std::endl;
//     // Now it should print should print ice - cure - ice
//     me->unequip(3);
//     me->use(0, *bob);
//     me->use(1, *bob);
//     me->use(2, *bob);
//     me->use(3, *bob);
//     me->use(4, *bob);

//     delete bob;
//     delete me;
//     delete src;

//     // system("leaks materia");
//     return 0;
// }