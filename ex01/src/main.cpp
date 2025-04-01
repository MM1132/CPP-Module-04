#include <iostream>

#include "ColorPrint.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "wrong/WrongAnimal.hpp"
#include "wrong/WrongCat.hpp"

#include "exerciseOne/Brain.hpp"
#include <unistd.h>

// namespace
// {
// 	void printLoadingBar()
// 	{
// 		ColorPrint::red("BE PATIENT!!! THE TESTS ARE LOADING...\n");
// 		for (int i = 0; i < 100; i++)
// 		{
// 			// Sleep for 0.1 of a second
// 			usleep(1000 * 70);

// 			// Print the current state of the loading bar
// 			std::cout << i + 1 << "% >> ";
// 			for (int j = 0; j < 100; j++)
// 			{
// 				switch (j)
// 				{
// 					case 0:
// 						std::cout << "[";
// 						break;
// 					case 99:
// 						std::cout << "]";
// 						break;
// 					default:
// 						if (i >= j)
// 							std::cout << "|";
// 						else
// 							std::cout << ".";
// 						break;
// 				}
// 			}
// 			std::cout << std::flush << "\r";
// 		}
// 		std::cout << std::endl;
// 	}
// }

int main()
{
	ColorPrint::green("<<< PROGRAM IS STARTING >>>\n");

	// printLoadingBar();

	const Animal* meta = new Animal();
	const Animal* animalDog = new Dog();
	const Animal* animalCat = new Cat();

	std::cout << animalDog->getType() << " " << std::endl;
	std::cout << animalCat->getType() << " " << std::endl;
	
	animalCat->makeSound(); //will output the cat sound!
	animalDog->makeSound(); //will output the dog sound! :)
	meta->makeSound();

	// And free up the memory
	delete meta;
	delete animalDog;
	delete animalCat;

	ColorPrint::yellow("<<< SECOND PART OF THE TASK >>>\n");

	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongCat *wrongCat = new WrongCat();

	wrongAnimal->makeSound();
	wrongCat->makeSound();

	delete wrongAnimal;
	delete wrongCat;

	ColorPrint::yellow("<<< ex01 TESTS >>>\n");
	
	// Brain myBrain;

	// Create 100 animal pointers
	Animal *animals[100];
	// Initialize animals
	for (int i = 0; i < 100; i++)
	{
		// Make sure half of them are Cats, the other half Dogs
		if (i % 2)
			animals[i] = new Cat;
		else
			animals[i] = new Dog;
	}

	// Let the animals speak their mind!!!
	for (int i = 0; i < 100; i++)
	{
		animals[i]->makeSound();
	}

	// Deallocate the Dogs and Cats
	for (int i = 0; i < 100; i++)
	{
		delete animals[i];
	}

	ColorPrint::yellow("<<< copy TESTS for ex01 >>>\n");
	Cat myCat;
	// Create some thoughts for the animal
	Brain& myCatBrain = myCat.getBrain();
	myCatBrain.setIdea(0, "awesome cat idea");
	myCatBrain.setIdea(4, "another awesome cat idea, yey");
	myCatBrain.setIdea(8, "random cat thought");
	// Perform the deep copy
	Cat myOtherCat = myCat;
	// Print the ideas of the other cat
	std::cout << "Printing the first 10 ideas of the cat copy..." << std::endl;
	Brain& myOtherCatBrain = myOtherCat.getBrain();
	for (int i = 0; i < 10; i++)
	{
		std::cout << i << ": " << myOtherCatBrain.getIdea(i) << std::endl;
	}

	return 0;
}
