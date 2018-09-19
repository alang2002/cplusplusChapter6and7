#include <iostream>
#include <string>
using namespace std;

int main() {
	char grade = ' ';
	string result;
	// enter grade to say what kind of student you are

	cout << "Enter your letter grade: ";
	cin >> grade;
	grade = toupper(grade);

	switch (grade) 
	{
		case 'A':
			result = "You are winner";
			break;
		case 'B':
			result = "Not bad";
			break;
		case 'C':
			result = "Do better next time";
			break;
		case 'D':
			result = "D for McDonalds";
			break;
		case 'F':
			result = "Are you even trying?";
			break;
		default:
			result = "NOT VALID ERROR ERROR";
	} // End switch

	cout << result << endl;

	system("pause");
	return 0;
}