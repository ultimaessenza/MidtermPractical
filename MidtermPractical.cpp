// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	// Char arrays can be changed but questions themselves don't need to be
	char question[64]{ "What int value does the bool false cast to?" };
	char option1[2]{ '0' };
	char option2[2]{ '1' };

	std::cout << question << std::endl;
	std::cout << '\t' << option1 << std::endl;
	std::cout << '\t' << option2 << std::endl;
	std::cout << std::endl << "Your answer?" << std::endl;

	bool isIncorrect = true;
	while (isIncorrect)
	{
		// Must substract ASCII offset
		int answer = std::cin.get() - '0';

		// C++ always needs cin maintenance
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

		if (answer)
		{
			std::cout << "I'm sorry, that is not correct" << std::endl;
		}
		else
		{
			std::cout << "Correct!" << std::endl;
			isIncorrect = false;
		}
	}
}
