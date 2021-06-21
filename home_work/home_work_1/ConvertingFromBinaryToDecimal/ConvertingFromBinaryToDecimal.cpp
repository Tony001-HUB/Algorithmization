#include <iostream>
using namespace std;

int main()
{
	while (true)
	{
		int binary = 0, chekBinary = 0;
		int convertNumber = 0;
		int currentItem = 0, currentItemChekBinary = 0;
		int countOfDegree = 0;
		int degree = 2;

		cout << "Enter binary: " << endl;
		cin >> binary;
		chekBinary = binary;

		while (chekBinary > 0)
		{
			currentItemChekBinary = chekBinary % 10;
			chekBinary = chekBinary / 10;

			if (currentItemChekBinary > 1) {
				cout << "Enter correct binary: " << endl;
				return 0;
			}
		}

		while (binary > 0)
		{
			currentItem = binary % 10;
			binary = binary / 10;

			for (int i = 1; i < countOfDegree || countOfDegree == 0; i++) {
				if (countOfDegree == 0) {
					degree = 1;
					break;
				}
				else {
					degree *= 2;
				}
			}

			convertNumber += currentItem * degree;
			degree = 2;

			countOfDegree++;
		}
		cout << convertNumber << endl;
	}

	return 0;
}