#include <iostream>

#include "ColorPrint.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	ColorPrint::green("<<< PROGRAM IS STARTING >>>\n");

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	i->makeSound(); //will output the cat sound!
	j->makeSound(); //will output the dog sound! :)
	meta->makeSound();

	// And free up the memory
	delete meta;
	delete j;
	delete i;

	return 0;
}
