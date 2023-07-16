#include <iostream>
#include <cmath>
using namespace std;

void PlayGame();
bool WantToPlayAgain();

bool IsGameOver(int secretNumber, int numberOfTries, int guess);
int GetGuess(int numberOfTries);

void DisplayResult(int secretNumber, int numberOfTries);

const int IGNORE_CHARS = 256;

int main()
{
	do
	{
		PlayGame();

	} while (WantToPlayAgain());

		return 0;
}


void PlayGame()
{
	const int UPPER_BOUND = 100;
	int secretNumber = 65;
	int numberOfTries = ceil (log2(UPPER_BOUND));
	int guess = 0;

	cout << "The range of the number is between 0 and 100" << endl;

	do
	{
		guess = GetGuess(numberOfTries);
		if (guess != secretNumber)
		{
			numberOfTries--;
			if (guess > secretNumber)
			{
				cout << "Your guess was too high!" << endl;
			}
			else
			{
				cout << "Your guess was too low!" << endl;
			}
		}

	} while (!IsGameOver(secretNumber, numberOfTries, guess));

	DisplayResult(secretNumber, numberOfTries);
}

bool WantToPlayAgain()
{
	char input;
	bool failure;

	do
	{
		failure = false;

		cout << "Would you like to play again? (y/n) ";
		cin >> input;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(IGNORE_CHARS, '\n');
			cout << "Input Error! Please try again." << endl;
			failure = true;
		}

	} while (failure);

	return input == 'y';
}

bool IsGameOver(int secretNumber, int numberOfTries, int guess)
{
	return secretNumber == guess || numberOfTries <= 0;
	return false;
}

int GetGuess(int numberOfTries)
{
	int guess;
	bool failure;

	do
	{
		failure = false;

		cout << "Please enter your guess (number of guesses left: " << numberOfTries << "): ";
		cin >> guess;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(IGNORE_CHARS, '\n');
			cout << "Input error! Please try again." << endl;
			failure = true;
		}

	} while (failure);

	return guess;
}

void DisplayResult(int secretNumber, int numberOfTries)
{
	if (numberOfTries > 0)
	{
		cout << "You got it! It was: " << secretNumber << endl;

	}
	else
	{
		cout << "You didnt get it...It was: " << secretNumber << endl;
	}
}
