#include <iostream>

#include "wrong/WrongCat.hpp"
#include "wrong/WrongAnimal.hpp"

WrongCat::WrongCat():
	WrongAnimal()
{
	this->m_type = "WrongCat";
	
	std::cout << "Constructor: WrongCat class, type: " << this->m_type << std::endl;
}

WrongCat::WrongCat(const WrongCat& src):
	WrongAnimal(src)
{
	std::cout << "Copy-Constructor: WrongCat class, type: " << this->m_type << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "De-Constructor: WrongCat class, type: " << this->m_type << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	std::cout << "Copy-Assignment-Operator: WrongCat class, new type: " << other.m_type << std::endl;

	if (this != &other)
	{
		this->m_type = other.m_type;
	}

	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat making sound: 'Wrong cat sounds! :c Very very wrong. WRONG WRONG WRONG!!!!'" << std::endl;
}
