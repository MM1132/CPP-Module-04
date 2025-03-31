#include <iostream>

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat():
	Animal()
{
	this->m_type = "Cat";
	
	std::cout << "Constructor: Cat class, type: " << this->m_type << std::endl;
}

Cat::Cat(const Cat& src):
	Animal(src)
{
	std::cout << "Copy-Constructor: Cat class, type: " << this->m_type << std::endl;
}

Cat::~Cat()
{
	std::cout << "De-Constructor: Cat class, type: " << this->m_type << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Copy-Assignment-Operator: Cat class, new type: " << other.m_type << std::endl;

	if (this != &other)
	{
		this->m_type = other.m_type;
	}

	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow meow!" << std::endl;
}
