#include "exerciseOne/Brain.hpp"

#include <iostream>

Brain::Brain()
{
	std::cout << "Default Constructor: Brain class" << std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Copy-Constructor: Brain class" << std::endl;

	// Construct the ideas
	for (int i = 0; i < Brain::m_IDEA_COUNT; i++)
	{
		this->m_ideas[i] = src.m_ideas[i];
	}
}

Brain::~Brain()
{
	std::cout << "DeConstructor: Brain class" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Copy-assignment-operator: Brain class" << std::endl;

	if (this != &other)
	{
		for (int i = 0; i < Brain::m_IDEA_COUNT; i++)
		{
			this->m_ideas[i] = other.m_ideas[i];
		}
	}
	return *this;
}

void Brain::setIdea(size_t index, std::string text)
{
	std::cout << "Trying to set idea " << index << ": \"" << text << "\"" << std::endl;

	if (index >= Brain::m_IDEA_COUNT)
		return;

	this->m_ideas[index] = text;
}

std::string Brain::getIdea(size_t index) const
{
	if (index >= Brain::m_IDEA_COUNT)
		return "";

	return this->m_ideas[index];
}
