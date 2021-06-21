#include <iostream>
using namespace std;

int main()
{
    char symbol;
	while (true)
	{
		cout << "Enter number" << endl;
		cin >> symbol;

		if (symbol >= '0' && symbol <= '9') {
			cout << "symbol [0-9]" << endl;
			break;
		}
		cout << "not symbol [0-9]" << endl;
	}
}

//3) выход, если введена цифра(цифра)