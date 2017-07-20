#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame {
public:
	FBullCowGame();

	void Reset(); // TODO make a more rich return value.
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;
	bool CheckGuessValidity(FString) const; // TODO make a more rich return value.

									 // ^^ Please try and ignore this and focus on the interface above ^^
private:
	int32 MyCurrentTry;
	int32 MyMaxTries;
};