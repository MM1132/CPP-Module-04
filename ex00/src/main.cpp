#include <iostream>

#include "ColorPrint.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "wrong/WrongAnimal.hpp"
#include "wrong/WrongCat.hpp"

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

	ColorPrint::yellow("<<< SECOND PART OF THE TASK >>>\n");

	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongCat *wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	return 0;
}
