//Number Guesser

#include <iostream>
using namespace std;

/*
Create a program called number guesser.
There will be a secret number that is set at the start of the program without any user input.
The secret number should be picked from a certain range.
The range of the number should be output to the player.
The player should be prompted to enter their guess.
The prompt should show how many guesses the player has left.
The player will then enter their guess.
If the guess is too high then the game will output that the guess was too high.
If the guess is too low then the game will output that the guess was too low.
The player only has a certain number of guesses.
The number of guesses should be based on the range of the secret number.
Any wrong guess will decrement the number of guess left.
The game ends by saying what the secret number was regardless of if the player guessed the right number.
If yes then the secret number should change.
Any input erros by the player should have proper handling.
*/



int main()
{
	// we need a variable that stores the secret number
	//range: 0 - 100
	//we need a variable that stores the number of guess the player has left. 
	// we need a variable that will store the players guess. 
	// number of guesses will be the log base 2 of the upper range - eg. log2(100) ~ 6.64 -> 7
	// how do we change the secret number? 

	/*
	
	do
	{
	 Play the game
	}while (Want to play again)

	Play the game:
	 1. Set the secret number - set it to a known value for now
	 2. Set the number of guesses -> ceil(log2(100))

	 do
	 { 
		
		3. Prompt the user to make a guess (output the number of guesses left)
		4. Get the guess from the player 
		5. Check to see if the guess is equal to the secret number
		    5a. If the guess is not equal to the secret number
			   5a1. Decrement the number of guesses left
			   5a2. Check to see if the guess was higher or lower than the secret number
			       5a2a. If it was higher - print the guess was too high
				   ba2b. If the guess was lower - then print that the guess was too low

     }while(the game is not over) 

	 Display the result - tell the player if they got it or not

	 Functions:

	 Play the game -> PlayGame()
	 Want to play again -> WantToPlayAgain()
	 Get the guess from the player -> GetGuess()

	 The game is not over -> IsGameOver()

	 number of guesses left == 0 || player's guess == secret number

	 Display results -> DisplayResults()

	 if(the player got it)
	 {
	   print that they got it and print the secret number 
	 }
	 else
	 {
	   print that they didn't get it and print the secret number
	 }


	*/



	return 0;

}