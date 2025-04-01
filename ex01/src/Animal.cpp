#include "Animal.hpp"

#include <iostream>

Animal::Animal():
	m_type("Animal")
{
	std::cout << "Constructor: Animal class, type: " << this->m_type << std::endl;
}

Animal::Animal(const Animal& src):
	m_type(src.m_type)
{
	std::cout << "Copy-Constructor: Animal class, type: " << this->m_type << std::endl;
}

Animal::~Animal()
{
	std::cout << "De-Constructor: Animal class, type: " << this->m_type << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Copy-assignment operator: Animal class, type: " << this->m_type << std::endl;

	if (this != &other)
	{
		this->m_type = other.m_type;
	}

	return *this;
}

std::string Animal::getType() const
{
	return this->m_type;
}

void Animal::makeSound() const
{
	std::cout << "Animal making sound: 'Animal sounds :)'" << std::endl;
}
