#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
	private:
		static const constexpr int m_IDEA_COUNT = 100;
		std::string m_ideas[m_IDEA_COUNT];
	
	public:
		Brain();
		Brain(const Brain& src);
		~Brain();
		Brain& operator=(const Brain& other);

		void setIdea(size_t index, std::string text);
		std::string getIdea(size_t index) const;
};

#endif
