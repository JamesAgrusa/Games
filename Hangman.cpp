// Hangman 
#include <iostream>
#include <cstring>

using namespace std;

const int IGNORE_CHARS = 256;

const char * INPUT_ERROR_STRING = "Input error! Please try again."

void PlayGame();
void WantToPlayAgain();

int GetSecretPhrase(char secretPhrase[], int maxLength);


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
	const int MAX_LENGTH_OF_SECRET_PHRASE = 256;
	const int MAX_LENGTH_OF_SECRET_PHRASE = 6;

	char secretPhrase[MAX_LENGTH_OF_SECRET_PHRASE];
	char* hiddenPHrase = nullptr;
	int numbetrOfGuessesLeft = MAX_LENGTH_OF_SECRET_PHRASE;

	GetSecretPhrase(secretPhrase, MAX_LENGTH_OF_SECRET_PHRASE);


}

void WantToPlayAgain()
{

}

int GetSecretPhrase(char secretPhrase[], int maxLength)
{
	bool failure;
	int length;

	do
	{
		failure = false;

		cout << "Please enter the secret phrase: ";
		cin.get(secretPhrase, maxLength);

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(IGNORE_CHARS, '\n');
			cout << INPUT_ERROR_STRING << endl;
			failure = true;
		}
		else
		{
			length = strlen(secretPhrase);
			if (length == 0)
			{
				cout << "You must enter a word thas's larger than 0 character! Please try again" << endl;
				failure = true;
			}
		}
	} while (failure);

	return length;
}


