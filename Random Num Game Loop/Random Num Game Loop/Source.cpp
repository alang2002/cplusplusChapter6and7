#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int numChoice;
	int secret;
	int goAgain;
	bool repeatAgain = false;

	do {
		srand(time(NULL));
		secret = rand() % 10 + 1;

		cout << "Please enter a number 1 - 10 >> ";
		cin >> numChoice;

		if (numChoice == secret) {
			cout << "You're winner!" << endl;
			cout << "Would you like to go again? 1 for yes 2 for no >> ";
			cin >> goAgain;
			if (goAgain == 1)
				repeatAgain = true;
			else
				repeatAgain = false;
		}
		else {
			cout << "You're lose!" << endl;
			cout << "Would you like to go again? 1 for yes 2 for no >> ";
			cin >> goAgain;
			if (goAgain == 1)
				repeatAgain = true;
			else
				repeatAgain = false;
		}
	} while (repeatAgain == true);

	system("pause");
	return 0;
}