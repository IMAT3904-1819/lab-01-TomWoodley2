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

	// Setting up seed for random number generation
	srand(time(NULL));
	

	std::cout << "Welcome to the simple number guessing game! \n_____________________________\n\n";

	// Loops until the player does not want to play again
	while (true)
	{
		iRandom = rand() % 99 + 1; // Selecting a random number between 1 and 99
		std::cout << iRandom << std::endl;

		std::cout << "The computer will select a random number from 1 to 99 \n"
			"You will guess a number and be told if it is: \n"
			"-The correct number \n"
			"-Higher than the correct number \n"
			"-Lower than the correct number \n"
			"You have " << iRGuesses << " guesses!" << std::endl;
		std::cout << "_______________________________\n\n";

		// Keep looping while the player has guesses left
		while (iRGuesses != 0)
		{
			// Player guesses number
			std::cout << "Input a number from 1 to 99 " << std::endl;
			std::cin >> iInput;

			if (iInput == iRandom)
			{
				// Correct number guessed
				std::cout << "You have guessed the right number!" << std::endl;
				break;
			}
			else
			{
				// Guess is larger
				if (iInput > iRandom)
				{
					std::cout << "The computer's number is lower" << std::endl;

				}
				else
				// Guess is smaller
				{
					std::cout << "The computer's number is higher" << std::endl;
				}
				iRGuesses--;
				std::cout << iRGuesses << " guesses left" << std::endl;
			}
		}
		
		// If exit condition was no guesses left
		if (iRGuesses == 0)
		{
			std::cout << "You ran out of guesses!" << std::endl;
			std::cout << "The number was " << iRandom << std::endl;
		}

		// Ask the player if they want to play again
		char cAgain;
		std::cout << "Would you like to play again? (y/n)" << std::endl;
		std::cin >> cAgain;

		// Close the program if they do not want to play again ('n' pressed)
		if (cAgain == 'n')
		{
			break;
		}

		std::cout << "______________________________/n";
		iRGuesses = 5; // Reset the number of guesses

	}
    return 0;
}

