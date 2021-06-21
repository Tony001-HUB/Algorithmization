#include <iostream>
using namespace std;

int main()
{
	while (true) {
		int number = 123;
		int k = 1;
		int bin = 0;
		int rem = 0;
		int count = 0;

		cout << endl;
		cout << "Enter a number in the 10 system: " << endl;
		cin >> number;

		if (number <= 0) {
			cout << "Enter the correct number" << endl;
			break;
		}

		while (number > 0) // делаю перевод из 10 в 2 (+)
		{
			bin += (number % 2) * k;
			k *= 10;
			number /= 2;
		}
		cout << "Bin: " << bin;

		while (bin > 0) // считаю сколько 1 и 0 в двоичном числе, ближайшее число из всех 1 будет на 1 меньше.(+)
		{
			count++;
			rem = bin % 2;
			bin /= 10;
		}
		count -= 1; // на 1 меньше

		int k1 = 1;
		for (int i = 1; i <= count; i++) { // получаю первой ближайшее к нашему числу(из всех 11111)(+)
			number += 1 * k1;
			k1 *= 10;
		}
		cout << endl;
		cout << "Nearest binary of units: " << number;

		int result = 0;
		for (int i = 1; number > 0; number /= 10, i *= 2) { // получаю его 10-ый эквивалент(+)
			result += i * (number % 10);
		}

		cout << endl;
		while (count) // получаю все натуральные числа, что состоят их всех 1.(+)
		{
			cout << "Natural number and from units: " << result << endl;
			result = ((result / 2)); 
			count--;
		}
	}
}

/*
 ЕДИНИЦЫ. Найдите все натуральные числа до m, двоичная запись которых состоит из единиц.
*/