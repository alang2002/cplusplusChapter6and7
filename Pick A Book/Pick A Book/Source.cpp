//Author: Aaron Lang Grandmaster of Books
// 9/20/18
#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
	int pickBook = 0;
	int secretBook;
	int counter = 0;
	int again;
	
	do {
		srand(time(NULL));
		secretBook = rand() % 57 + 1;

		cout << "Welcome to my evil lair..of books! I have 57 books here in my lair." << endl;
		cout << "There is a magic book in my lair, but only one in my lair. You have two tries to find it in my lair." << endl;
		cout << "If you do not find it you will meet your doom in my lair! Muahahaha (in my lair)!" << endl;

		while (pickBook != secretBook && counter != 2) {
			cout << "Choose your book (by number por favor in my lair)! >> ";
			cin >> pickBook;
			if (pickBook < secretBook) {
				cout << "The number is too low, try again fool in my lair!" << endl;
			}
			else if (pickBook > secretBook) {
				cout << "The number is too high, try again fool in my lair!" << endl;
			}
			else if (pickBook == secretBook) {
				cout << "Nooooo I lostttt in my lair! You found the magic book in my lair!";
			}
			counter++;
		}
		if (counter == 2) {
			cout << "Muahahah you have failed in my lair! You are dead by the hands of ISIS in my lair" << endl;
		}
		//Ask to play game again
		cout << "Would you like to play again in my lair? Muahahahah in my lair" << endl;
		cout << "1 for yes, 2 for no in my lair>> " << endl;
		cin >> again;

		//Reinitialize variables so it can loop properly
		pickBook = 0;
		counter = 0;
	} while (again != 2);

	system("pause");
	return 0;
}