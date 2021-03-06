/**
 * Lab 1 Task 1
 * Create a random number guessing game,
 * between 1 - 100.
**/

#include "stdafx.h"

#include <iostream>
#include "Time.h"

using namespace std;

int target = 0;
int guess = 0;
int guesses = 0;

int main()
{
	srand(time(NULL));
	const int min = 1, max = 1000;
	target = min + (rand() % (max - min + 1));

	cout << "Target: " << target << "\n";

	while(true)
	{
		if (guesses < 8)
		{
			cout << "Enter your guess: ";
			cin >> guess; cout << "\n";

			if (guess > target) { cout << "Lower!\n"; }
			else if (guess < target) { cout << "Higher!\n"; }
			else if (guess == target) 
			{ 
				cout << "Correct, the number was: " << target << "\nYou win!\n";
				return 0;
			}

			guesses++;
		}
		else
		{
			cout << "Game Over!\n";
			return 0;
		}
	}
    return 0;
}

