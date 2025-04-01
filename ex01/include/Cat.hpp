#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "exerciseOne/Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *m_brain;

	public:
		Cat();
		Cat(const Cat& src);
		~Cat();
		Cat& operator=(const Cat& other);

		void makeSound() const;

		Brain& getBrain() const;
};

#endif
