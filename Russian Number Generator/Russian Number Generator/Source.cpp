#include <iostream>
#include <string>
#include <time.h>
#include <thread>
#include <chrono>
using namespace std;

int main() {
	int correct;
	int goAgain;
	int compNum;
	bool guessAgain = false;

	cout << "In America, you guess computer's number." << endl;
	cout << "In Soviet Russia, computer guess your number!" << endl;
	
	do {
		srand(time(NULL));
		compNum = rand() % 10 + 1;

		cout << "Think of number between 1 and 10, da?" << endl;
		this_thread::sleep_for(chrono::seconds(2));
		cout << "T h i n k i n g . . . " << endl;
		this_thread::sleep_for(chrono::seconds(3));
		cout << "Your number is: " << compNum << ". Am I correct? 1 for yes 2 for no >> ";
		cin >> correct;

		if (correct == 1) {
			cout << "Opa! Let's go again, da? 1 for yes 2 for no >> ";
			cin >> goAgain;
			if (goAgain == 1) {
				guessAgain = true;
			}
			else {
				cout << "Until next time, comrade." << endl;
			}
		}
		else if (correct == 2) {
			cout << "Blyat! You win this time, human. Care to try again? 1 for yes 2 for no >> ";
			cin >> goAgain;
			if (goAgain == 1) {
				guessAgain = true;
			}
			else {
				cout << "Until next time, comrade." << endl;
			}
		}
	} while (guessAgain == true);

	system("pause");
	return 0;
}