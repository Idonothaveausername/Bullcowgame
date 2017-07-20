#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using int32 = int;

FBullCowGame BCGAME;
void PrintInfo();
void PlayGame();
bool AskToPlayAgain();
FText GetGuess();

int main()
{
	PrintInfo();

	bool repeat = true;

	while (repeat)
	{
      PlayGame();
	  repeat = AskToPlayAgain();
	}

	return 0;
}

void PrintInfo()
{
	constexpr int32 WORD_LENGTH = 27;
	std::cout << "Welcome to bulls & cows game \n";
	std::cout << "Can you guess the " << WORD_LENGTH << " letter constant that I'm thinking of ?" << "\n";
	return;
}

// function called GetGuess()

FText GetGuess()
{
	int32 getTry = BCGAME.GetCurrentTry();
    std::cout << getTry << ". ";
	FText Guess = "";
	std::cout << "Enter ye guess : ";
	std::getline(std::cin, Guess);
	
	return Guess;
}

void PlayGame ()
{

	const int32 tries = BCGAME.GetMaxTries();

	for (int32 i = 0; i < tries; i++)
	{
		FText Guess = GetGuess();
		std::cout << "you have guessed, " << Guess << std::endl;
	}
}

bool AskToPlayAgain ()
{
	std::cout << "Do you wish to play again ? (y/n) "; 
	FText answer = "";
	std::getline(std::cin, answer);
	return (answer[0] == 'y' || answer[0] == 'Y');
}