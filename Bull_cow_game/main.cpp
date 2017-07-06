#include <iostream>
#include <string>

using namespace std;

int main()
{
	constexpr int WORD_LENGTH = 27;
	cout << "Welcome to bulls & cows game \n";
	cout << "Can you guess the " << WORD_LENGTH << " letter constant that I'm thinking of ?" << "\n";

	// get a guess from the player
	string Guess = "";
	cout << "Enter ye guess : ";
	getline(cin, Guess);

	// repeat it back to them

	cout << "you have guessed, " << Guess << endl;
	cout << "Enter ye guess : ";
	getline(cin, Guess);

	// repeat it back to them

	cout << "you have guessed, " << Guess << endl;
	return 0;
}