#include <iostream>
#include <time.h>
using namespace std;

int main() {
	int random;
	srand(time(NULL));
	random = rand() % 10 + 1;

	for (int i = 10; i >= 0; i--) {
		cout << random << endl;
		random = rand() % 10 + 1;
	}

	system("pause");
	return 0;
}