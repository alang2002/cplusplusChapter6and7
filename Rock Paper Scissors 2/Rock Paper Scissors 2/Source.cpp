//Author: Aaron Lang
//9.26.18
//RPS 1 was broken, needed to make second copy
#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int userChoice;
	int compChoice;
	int userWins;
	int compWins;
	int goAgain;
	bool repeat = false;

	do {
		cout << "Hello user, and welcome to Rock Paper Scissors." << endl;
		cout << "Please select your move: 1 for Rock, 2 for Paper, 3 for Scissors >> ";
		cin >> userChoice;
		compChoice = rand() % 3 + 1;

		//Path if user picks rock
		if (userChoice == 1 && compChoice == 1) {
			cout << "It's a tie!" << endl;
		}
		else if (userChoice == 1 && compChoice == 2) {
			cout << "You lose!" << endl;
		}
		else if (userChoice == 1 && compChoice == 3) {
			cout << "You won!" << endl;
		} //Path if user picks paper
		else if (userChoice == 2 && compChoice == 1) {
			cout << "You won!" << endl;
		}
		else if (userChoice == 2 && compChoice == 2) {
			cout << "It's a tie!" << endl;
		}
		else if (userChoice == 2 && compChoice == 3) {
			cout << "You lose!" << endl;
		} //Path if user picks scissors
		else if (userChoice == 3 && compChoice == 1) {
			cout << "You lose!" << endl;
		}
		else if (userChoice == 3 && compChoice == 2) {
			cout << "You win!" << endl;
		}
		else if (userChoice == 3 && compChoice == 3) {
			cout << "It's a tie!" << endl;
		}

		cout << "Good game! Want to go again? 1 for yes 2 for no >> ";
		cin >> goAgain;

		if (goAgain == 1) {
			repeat = true;
		}
		else {
			repeat = false;
		}
	} while (repeat == true);

	system("pause");
	return 0;
}