#ifndef COLORPRINT_HPP
#define COLORPRINT_HPP

#include <iostream>
#include <string>

namespace
{
	void reset()
	{
		std::cout << "\33[0m";
	}
}

namespace ColorPrint
{
	void red(std::string str)
	{
		std::cout << "\033[31m" << str;
		reset();
	}

	void green(std::string str)
	{
		std::cout << "\033[32m" << str;
		reset();
	}

	void yellow(std::string str)
	{
		std::cout << "\033[93m" << str;
		reset();
	}
}

#endif
