// MidtermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
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
		int answer = std::cin.get() - '0';
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
