#include "wrong/WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal():
	m_type("WrongAnimal")
{
	std::cout << "Constructor: WrongAnimal class, type: " << this->m_type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src):
	m_type(src.m_type)
{
	std::cout << "Copy-Constructor: WrongAnimal class, type: " << this->m_type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "De-Constructor: WrongAnimal class, type: " << this->m_type << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "Copy-assignment operator: WrongAnimal class, type: " << this->m_type << std::endl;

	if (this != &other)
	{
		this->m_type = other.m_type;
	}

	return *this;
}

std::string WrongAnimal::getType() const
{
	return this->m_type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal making sound: 'WrongAnimal sounds :)'" << std::endl;
}
