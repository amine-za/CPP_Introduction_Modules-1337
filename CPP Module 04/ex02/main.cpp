#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	return 0;
}

//				Test
// int main()
// {
// 	Animal *array[8];

// 	std::cout << "	---declaring---\n";
	
// 	for(int x = 0; x < 4; x++)
// 		array[x] = new Dog();
// 	for(int x = 4; x < 8; x++)
// 		array[x] = new Cat();
	
// 	std::cout << "\n	---Testing functions---\n";

// 	for(int x = 0; x < 8; x++)
// 	{
// 		array[x]->getType();
// 		array[x]->makeSound();
// 	}

// 	std::cout << "\n	---deleting---\n";

// 	for(int x = 0; x < 8; x++)
// 		delete array[x];
// 	system("leaks ex01");
// 	return 0;
// }