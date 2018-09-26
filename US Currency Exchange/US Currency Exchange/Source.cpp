//Author: Aaron Lang
//9.26.18
#include <iostream>
using namespace std;

int main() {
	bool repeat = false;
	int choice;
	int again;
	double exchange;
	double usDollars;
	double canadianDollar = .9813;
	double euro = .757;
	double rupee = 52.53;
	double yen = 80.92;
	double peso = 13.1544;
	double rand = 7.7522;
	double pound = .6178;

	do {
		cout << "Hello user. Here are the available currencies: " << endl;
		cout << "1 - Canadian Dollar    2 - Euro" << endl;
		cout << "3 - Indian Rupee       4 - Japanese Yen" << endl;
		cout << "5 - Mexican Peso       6 - South African Rand" << endl;
		cout << "7 - British Pound" << endl;
		cout << "Please input the number of the currency you wish to exchange to >> ";
		cin >> choice;
		cout << "How many US Dollars will you be exchanging? >> ";
		cin >> usDollars;

		switch (choice) {
		case 1:
			cout << "The Canadian Dollar has a conversion rate of " << canadianDollar << "." << endl;
			exchange = canadianDollar * usDollars;
			cout << "You now have " << exchange << " Canadian Dollars. Have a nice day!" << endl;
			break;
		case 2:
			cout << "The Euro has a conversion rate of " << euro << "." << endl;
			exchange = euro * usDollars;
			cout << "You now have " << exchange << " Euros. Have a nice day!" << endl;
			break;
		case 3:
			cout << "The Indian Rupee has a conversion rate of " << rupee << "." << endl;
			exchange = rupee * usDollars;
			cout << "You now have " << exchange << " Rupees. Have a nice day!" << endl;
			break;
		case 4:
			cout << "The Japanese Yen has a conversion rate of " << yen << "." << endl;
			exchange = yen * usDollars;
			cout << "You now have " << exchange << " Yen. Have a nice day!" << endl;
			break;
		case 5:
			cout << "The Mexican Peso has a conversion rate of " << peso << "." << endl;
			exchange = peso * usDollars;
			cout << "You now have " << exchange << " Pesos. Have a nice day!" << endl;
			break;
		case 6:
			cout << "The South African Rand has a conversion rate of " << rand << "." << endl;
			exchange = rand * usDollars;
			cout << "You now have " << exchange << " Rands. Have a nice day!" << endl;
			break;
		case 7:
			cout << "The British Pound has a conversion rate of " << pound << "." << endl;
			exchange = pound * usDollars;
			cout << "You now have " << exchange << " Pounds. Have a nice day!" << endl;
			break;
		}
		cout << "Would you like to convert again? 1 for yes 2 for no >> ";
		cin >> again;
		
		if (again == 1) {
			repeat = true;
		}
		else {
			repeat = false;
		}
	} while (repeat == true);


	system("pause");
	return 0;
}