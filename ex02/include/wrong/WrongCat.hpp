#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wrong/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& src);
		~WrongCat();
		WrongCat& operator=(const WrongCat& other);

		void makeSound() const;
};

#endif
