#include <iostream>

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog():
	Animal()
{
	this->m_type = "Dog";

	std::cout << "Constructor: Dog class, type: " << this->m_type << std::endl;
}

Dog::Dog(const Dog& src):
	Animal(src)
{
	std::cout << "Copy-Constructor: Dog class, type: " << this->m_type << std::endl;
}

Dog::~Dog()
{
	std::cout << "De-Constructor: Dog class, type: " << this->m_type << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Copy-Assignment-Operator: Dog class, new type: " << other.m_type << std::endl;

	if (this != &other)
	{
		this->m_type = other.m_type;
	}

	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog making sound: 'Woof woof woof!'" << std::endl;
}
