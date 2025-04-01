#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal
{
	protected:
		std::string m_type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& src);
		virtual ~WrongAnimal();
		WrongAnimal& operator=(const WrongAnimal& other);

		std::string getType() const;

		virtual void makeSound() const;
};

#endif
