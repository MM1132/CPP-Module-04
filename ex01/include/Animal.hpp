#ifndef ANIMAP_HPP
#define ANIMAP_HPP

#include <string>

class Animal
{
	protected:
		std::string m_type;
	public:
		Animal();
		Animal(const Animal& src);
		virtual ~Animal();
		Animal& operator=(const Animal& other);

		std::string getType() const;

		virtual void makeSound() const;
};

#endif
