#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "exerciseOne/Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *m_brain;

	public:
		Dog();
		Dog(const Dog& src);
		~Dog();
		Dog& operator=(const Dog& other);

		void makeSound() const;

		Brain& getBrain() const;
};

#endif
