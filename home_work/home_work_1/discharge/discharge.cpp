#include <iostream>
using namespace std;

int swapDigits(int number) {
	int rem = 0;
	int k = 1;

	while (number > 0)
	{
		rem += number % 10;
		number /= 10;
		rem *= 10;
	}

	return rem / 10;
}

int main()
{
	int number = 0;
	cout << "Enter number for swap: ";
	cin >> number;

	cout << swapDigits(number);
}

/*
 РАЗРЯДЫ. Разработайте функцию, которая переворачивает переданное ей целое число: 1234 -> 4321
 bin += (number % 2) * k;
			k *= 10;
			number /= 2;

			4 -> 1234 % 10;
			123 -> 1234 / 10;
			40 -> 4 * 10;
			123 % 10 = 3;
			43 -> 40 + 3;
			12 -> 123 / 10;
			....

			4 * 10
			------
			40 + 3
			------
			43 * 10
			------
			430 + 2
			-------
			432 * 10
			--------
			4320 + 1
			--------
			4321
*/