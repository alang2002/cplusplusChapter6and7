#include <iostream>
#include <string>
using namespace std;

int main() {
	string o = "o";
	string space = " ";
	int answer;

	/*for (int i = 0; i <= 10; i++) {
		cout << i << endl;
	}
	for (int x = 10; x >= 0; x--) {
		cout << x << endl;
		if (x == 0) {
			cout << "Liftoff!" << endl;
		}
	}
	for (int y = 0; y <= 100; y = y + 3) {
		cout << y << endl;
		if (y == 48) {
			cout << "IT IS 50" << endl;
			cout << "What's the difference between a radius and a diameter?" << endl;
			cout << "A radius." << endl;
		} 
	} 
	for (int z = 0; z <= 100; z = z + 5) {
		cout << z << endl;
		if (z == 50) {
			cout << "IT IS 50" << endl;
			cout << "Why did 7 eat 9?" << endl;
			cout << "It's recommended to eat 3 squared meals a day" << endl;
		}
	}*/

	for (int i = 0; i <= 10; i++) {
		cout << o << endl;
		o = o.insert(0, space);
	}

	cout << " " << endl;

	for (int x = 0; x <= 1000; x++) {
		if (x % 1 == 0 && x % 2 == 0 && x % 3 == 0 && x != 0) {
			answer = x;
			if (answer <= 12) {
				cout << answer << endl;
			}
		}
	}

	system("pause");
	return 0;
}