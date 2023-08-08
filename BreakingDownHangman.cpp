// Hangman break down

#include <iostream>
using namespace std;

int main()
{
	/*
	Create the programe Hangman. Promp the player to enter a phrase.
	That phrase will be hidden by a series of dashes (exluding spaces).
	The player can then guess letters. If they guess correctly all the letters that match will be revealed.
	If they guess incorrect, then 1 more body part will be added to the gallows.
	If they lose the gallows should look like this:

	+---+
	|   |
	|   o
	|  /|\
	|  / \
   -+-

	If the player loses, the phrase should be revealed.
	After the game is over the player should be prompted if they want to play again.
	*/

	// we need a way of storing the secret phrase
	// we need a way of storing the hidden phrase (with dashes)
	// we need a variable that holds the nbumber of guesses left.  ( set to 6 initially)

	/*
	step 1:

	main()

	do{

	PlayGame

	}while(WantToPlayAgain

	step 2:

	+---+
	|   |
	|   
	|  
	|  
   -+-

   '--- ------'

	PlayGame
    --------

	secretWord = GetSecretWord()
	hiddenPhrase = MakeHiddenPhrase(secretPhrase)
    numberOfGuessLeft = 6

	DrawBoard(hiddenPhrase)

	do
	{
	 
	 guess = GetGuess()
	 UpdateBoard(guess, secretPhrase, hiddenPhrase, numberOfGuessesLeft)
	 DrawBoard(hiddenPhrase)

	}while(!GameIsOver(numberOfGuessLef, hiddenPhrase))

	DisplayResult(secretPhrase, numberOfGuessesLeft)

	step 3:

    GetSecretPhrase
	-------------

	prompt the uswer for the secret phrase
	get the secret phrase
     
	return secret phrase

	MakeHiddenPHrase(secretPhrase)
	------------------------------

	hiddenPhrase = make new cstring given the length of the secret phrase

	for(length of the secret phrase)
	{
	 hiddenPhrase[i] = '-'

	}

	return hiddenPhrase

	Update Board (guess, secretPhrase, hiddenPhrase, numberOfGuessesLeft)
	---------------

	bool found = false;

	for(length of the secretPhrase)
	if(secretPhrase[i] == guess)
	  {
	    hiddenPhrase[i] =  guess;
		found = true
	  }
	}
	if(!found)
	{
	 numberOfGuessLeft--;
	}

	IsGameOver(numberOfGuessLeft, hiddenPhrase)
	------------------------------------------

	bool hasDash = false

	for(length of the hiddenPhrase && !hasDash)
	{
	 if(hiddenPhrase[i] == '-'
	    hasDash = true
	}

	return numberOfGuessLeft == 0 || hasDash

	*/


	return 0;
}