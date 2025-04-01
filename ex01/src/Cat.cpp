#include <iostream>

#include "Cat.hpp"
#include "Animal.hpp"
#include "exerciseOne/Brain.hpp"

Cat::Cat():
	Animal()
{
	this->m_type = "Cat";
	this->m_brain = new Brain;
	
	std::cout << "Constructor: Cat class, type: " << this->m_type << std::endl;
}

Cat::Cat(const Cat& src):
	Animal(src)
{
	std::cout << "Copy-Constructor: Cat class, type: " << this->m_type << std::endl;

	this->m_brain = new Brain(*(src.m_brain));
}

Cat::~Cat()
{
	std::cout << "De-Constructor: Cat class, type: " << this->m_type << std::endl;

	delete this->m_brain;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Copy-Assignment-Operator: Cat class, new type: " << other.m_type << std::endl;

	if (this != &other)
	{
		this->m_type = other.m_type;
		*(this->m_brain) = other.getBrain();
	}

	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat making sound: 'Meow meow meow!'" << std::endl;
}

Brain& Cat::getBrain() const
{
	return *(this->m_brain);
}
