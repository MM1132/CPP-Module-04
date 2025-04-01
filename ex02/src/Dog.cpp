#include <iostream>

#include "Dog.hpp"
#include "Animal.hpp"

#include "exerciseOne/Brain.hpp"

Dog::Dog():
	Animal()
{
	this->m_type = "Dog";
	this->m_brain = new Brain;

	std::cout << "Constructor: Dog class, type: " << this->m_type << std::endl;
}

Dog::Dog(const Dog& src):
	Animal(src)
{
	std::cout << "Copy-Constructor: Dog class, type: " << this->m_type << std::endl;

	this->m_brain = new Brain(*(src.m_brain));
}

Dog::~Dog()
{
	std::cout << "De-Constructor: Dog class, type: " << this->m_type << std::endl;

	delete this->m_brain;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Copy-Assignment-Operator: Dog class, new type: " << other.m_type << std::endl;

	if (this != &other)
	{
		this->m_type = other.m_type;
		*(this->m_brain) = other.getBrain();
	}

	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog making sound: 'Woof woof woof!'" << std::endl;
}

Brain& Dog::getBrain() const
{
	return *(this->m_brain);
}
