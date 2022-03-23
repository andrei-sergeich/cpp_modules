#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#define SIZE 10

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	Animal	*animals[SIZE];
	for (int it = 0; it < SIZE; ++it)
	{
		if (it % 2 == 0)
			animals[it] = new Dog();
		else
			animals[it] = new Cat();
	}
	animals[0]->makeSound();
	animals[1]->makeSound();
	for (int it = 0; it < SIZE; ++it)
		delete animals[it];

//	Animal	animal;

	return 0;
}
