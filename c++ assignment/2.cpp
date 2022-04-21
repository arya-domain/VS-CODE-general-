//21BCE10901
#include <iostream>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	num = rand() % 1000 + 1;            // random number between 1 and 1000
	cout << "Guess My Number Game\n\n";

	do
	{
		cout << "Enter a guess between 1 and 1000 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nCorrect! You got it in " << tries << " guesses!\n";
	} while (guess != num);

	return 0;
}