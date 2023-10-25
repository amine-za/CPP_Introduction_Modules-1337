#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	delete j;
// 	delete i;
// 	return 0;
// }


//				Test
int main()
{
	Animal *array[8];

	std::cout << "	---declaring---\n";
	
	for(int x = 0; x < 4; x++)
		array[x] = new Dog();
	for(int x = 4; x < 8; x++)
		array[x] = new Cat();
	
	std::cout << "\n	---Testing functions---\n";

	for(int x = 0; x < 8; x++)
	{
		array[x]->getType();
		array[x]->makeSound();
	}

	std::cout << "\n	---deleting---\n";

	for(int x = 0; x < 8; x++)
		delete array[x];
	system("leaks ex01");
	return 0;
}

//							TEST
// Test the getType and the makeSound functions, in this test i change
// the class that the pointer Animal is pointing to and then check if 
// the return of the getType functions has changed

// int main()
// {
// 	const Animal* j = new Dog(); // Declaring two pointers
// 	const Animal* i = new Cat();

// 	std::cout << "		-----Before-----\n";
// 	std::cout << "j type before : " << j->getType() << " " << std::endl;
// 	std::cout << "i type before : " << i->getType() << " " << std::endl;
// 	i->makeSound();
// 	j->makeSound();

// 	delete j;
// 	delete i;
// 	j = new Cat();
// 	i = new Dog(); // Delleting and chage wich class the pointer point to

// 	std::cout << "\n		-----After-----\n";
// 	std::cout << "j type after : " << j->getType() << " " << std::endl;
// 	std::cout << "i type after : " << i->getType() << " " << std::endl;
// 	i->makeSound();
// 	j->makeSound();

// 	delete j;
// 	delete i;
// 	return 0;
// }
