#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

// int main()
// {
	// Animal *arr[42];
	// for(int x = 0; x < 42/2; x++)
	// 	arr[x] = new Dog();
	// for(int x = 42/2; x < 42; x++)
	// 	arr[x] = new Cat();
	// //Deleting
	// for(int x = 0; arr[x]; x++)
	// 	delete(arr[x]);
	
// 	return 0;
// }

int main()
{
	Dog* j = new Dog();
	Cat* i = new Cat();
	delete j;//should not create a leak
	delete i;
	// ...
	while(1){}
	return 0;
}