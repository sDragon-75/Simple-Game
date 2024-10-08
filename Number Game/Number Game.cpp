#include <iostream>
#include <ctime>

using namespace std;

void startgame()
{
	int maxTry = 0;

	cout << "This is a number game. " << endl << "The rules are simple. " << endl << "Just guess the number between 0 to 500 and you win. " << endl << "Good Luck!" << endl;
	cout << "How many tries would you like to have?: ";
	cin >> maxTry;

	int randomNumber = rand() % 500;
	string answer;

	for (int i = 0; i < maxTry; ++i)
	{
		cout << "Enter a number between 0 and 500: ";
		int number = 0;
		cin >> number;
		cin.ignore();

		if (number < randomNumber)
		{
			cout << "The randomized number is higher than your entered number. Try Again. " << endl;
		}
		else if (number > randomNumber)
		{
			cout << "The randomized number is lower than your entered number. Try Again. " << endl;
		}
		else if (number == randomNumber)
		{
			cout << "You got the number! Nice Job! You had " << maxTry - i - 1 << " tries left. " << endl << "Would you like to try again?: ";
			cin >> answer;
			cin.ignore();
		}
		if (i == maxTry - 1)
		{
			cout << "Try again next time. You have no more tries left. You lose. ";
		}
		if (answer == "yes")
		{
			startgame();
		}
	}
}

int main()
{
	srand(time(nullptr));
	startgame();
	/*
	int maxTry = 0;

	cout << "This is a number game. " << endl << "The rules are simple. " << endl << "Just guess the number between 0 to 500 and you win. " << endl << "Good Luck!" << endl;
	cout << "How many tries would you like to have?: " ;
	cin >> maxTry;

	int randomNumber = rand() % 500;
	string answer;

	for (int i = 0; i < maxTry; ++i)
	{
		cout << "Enter a number between 0 and 500: ";
		int number = 0;
		cin >> number;
		cin.ignore();

		if (number < randomNumber)
		{
			cout << "The randomized number is higher than your entered number. Try Again. " << endl;
		}
		else if (number > randomNumber)
		{
			cout << "The randomized number is lower than your entered number. Try Again. " << endl;
		}
		else if (number == randomNumber)
		{
			cout << "You got the number! Nice Job! You had " << maxTry - i - 1 << " tries left. " << endl << "Would you like to try again?: ";
			cin >> answer;
			cin.ignore();
		}
		if (i == maxTry - 1)
		{
			cout << "Try again next time. You have no more tries left. You lose. ";
		}
		if (answer == "yes")
		{
			restart();
		}
	}
	*/
	cin.ignore();
	return 0;
}