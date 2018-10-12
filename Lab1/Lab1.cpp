// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <ctime>

int main()
{

	int iRandom;
	int iInput;
	int iRGuesses = 5;

	// Computer selects random number between 1 and 100
	srand(time(NULL));
	

	std::cout << "Welcome to the simple number guessing game! \n_____________________________\n\n";

	while (true)
	{
		iRandom = rand() % 99 + 1;
		std::cout << iRandom << std::endl;

		std::cout << "The computer will select a random number from 1 to 99 \n"
			"You will guess a number and be told if it is: \n"
			"-The correct number \n"
			"-Higher than the correct number \n"
			"-Lower than the correct number \n"
			"You have " << iRGuesses << " guesses!" << std::endl;
		std::cout << "_______________________________\n\n";

		while (iRGuesses != 0)
		{
			// Player guesses number
			std::cout << "Input a number from 1 to 99 " << std::endl;
			std::cin >> iInput;

			// Number can be higher, lower or correct number
			if (iInput == iRandom)
			{
				std::cout << "You have guessed the right number!" << std::endl;
				break;
			}
			else
			{
				if (iInput > iRandom)
				{
					std::cout << "lower" << std::endl;

				}
				else
				{
					std::cout << "higher" << std::endl;
				}
				iRGuesses--;
				std::cout << iRGuesses << " guesses left" << std::endl;
			}
		}


		if (iRGuesses == 0)
		{
			std::cout << "You ran out of guesses!" << std::endl;
		}

		char cAgain;
		std::cout << "Would you like to play again? (y/n)" << std::endl;
		std::cin >> cAgain;

		if (cAgain == 'n')
		{
			break;
		}

		std::cout << "______________________________/n";
		iRGuesses = 5;

	}
    return 0;
}

