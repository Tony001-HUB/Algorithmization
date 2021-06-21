#include <iostream>
using namespace std;

int main()
{
	char symbol = 0;
	while (true)
	{
		cout << "Enter symbol" << endl;
		cin >> symbol;

		if (symbol >= 'A' && symbol <= 'Z') {
			cout << "[A..Z]" << endl;
			break;
		}
		cout << "not [A..Z]" << endl;
	}
	return 0;
}

//выход, если введена буква