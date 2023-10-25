#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	// delete meta;
	// delete j;
	// delete i;
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

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* j = new WrongDog();
// 	const WrongAnimal* i = new WrongCat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound();
// 	j->makeSound();
// 	meta->makeSound();
// 	delete meta;
// 	delete j;
// 	delete i;
// 	return 0;
// }
