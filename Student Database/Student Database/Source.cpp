#include <iostream>
#include <string>
using namespace std;

int main() {
	int id;
	string result;
	cout << "Please scan your bar code >> ";
	cin >> id;

	switch (id) 
	{
	case 102094:
		result = "John Brosius";
		break;
	case 316338:
		result = "Logan DeWilfond";
		break;
	case 138082:
		result = "Jack Reis";
		break;
	case 313011:
		result = "Aaron Lang";
		break;
	case 154824:
		result = "Kaden Graap";
		break;
	case 137428:
		result = "Mason Hancock";
		break;
	case 137220:
		result = "Adam Gibson";
		break;
	case 145884:
		result = "Mickeal Surrender";
		break;
	case 306632:
		result = "Evan Raker";
		break;
	case 154827:
		result = "Austin Leuenhagen";
		break;
	case 155706:
		result = "Joseph Chalupa";
		break;
	case 134125:
		result = "Jimmy Pham Ho";
		break;
	case 318682:
		result = "Jacob Grady";
		break;
	case 155980:
		result = "Chayton Lofgren";
		break;
	case 137292:
		result = "Brandon Richards";
		break;
	case 137112:
		result = "Adam Burton";
		break;
	default:
		result = "INVALID ID";
	} // End switch

	cout << "Scanning..." << endl;
	cout << "Hello, " << result << endl;

	system("pause");
	return 0;
}