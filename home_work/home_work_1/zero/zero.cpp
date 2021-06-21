#include <iostream>
using namespace std;

int main()
{
    int number = 0;
	while (true)
	{
		cout << "Enter number: " << endl;
		cin >> number;

		if (number == 0) {
			cout << "Number 0" << endl;
			break;
		}
		cout << "not number 0" << endl;
	}
}

//2) выход, если выбран 0 (число, а не символ ‘0’)