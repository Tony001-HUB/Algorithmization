#include <iostream>
using namespace std;

double balance = 0.0;
const double USD_RATE = 2.58;

void showMeny() {
	cout << endl;
	cout << "1 - Enter cash (BYN)" << endl;
	cout << "2 - Convert to USD" << endl;
	cout << "0 - Exit" << endl;
}

double getMoney(double byn) {
	balance += byn;
	return balance;
}

double convertBYNToUSD() {
	double total = balance / USD_RATE;
	balance = 0;

	return total;
}

int main()
{
	setlocale(LC_CTYPE, "rus");

    int choice = 0;
    double byn = 0.0;
	double coint = 0.0;

	while (true)
	{
		showMeny();
		cout << "Your choice? ";
		cin >> choice;
		if (choice == 0) {
			break;
		}
		else if (choice == 1) {
			cout << "Enter by: " << endl;
			cin >> coint;
			byn += getMoney(coint);
			cout << "Ok " << byn << " BYN is received" << endl;
		}
		else if (choice == 2) {
			cout << "Ok take your " << convertBYNToUSD() << " $ is received" << endl;
		}
		else
			cout << "Please, input [0..2]" << endl;

	}
}
