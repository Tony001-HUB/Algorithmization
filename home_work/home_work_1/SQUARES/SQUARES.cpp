#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	while (true)
	{
		int rem = 0;
		int whatNumPOsition = 6;
		int count = 0, currentItem = 1;
		int countMult = 0;

		cout << "Number series: " << endl;
		for (int i = 1; i < 10; i++) {
			count = i * i;
			cout << count << " ";
		}

		cout << endl;
		cout << "Enter the position of the number of the row: " << endl;
		cin >> whatNumPOsition;

		for (int i = 1; i < 10; i++) {
			currentItem = i * i;
			while (currentItem > 0)
			{
				countMult++;
				if (currentItem < 10) {
					rem = currentItem % 10;
					currentItem /= 10;
					if (whatNumPOsition == countMult) {
						cout << "You have entered a position: " << whatNumPOsition << " and this is the number: " << rem << endl;
						break;
					}
				}
				if (currentItem >= 10) {
					rem = currentItem % 100;
					rem /= 10;
					currentItem %= 10;
					if (whatNumPOsition == countMult) {
						cout << "You have entered a position: " << whatNumPOsition << " and this is the number: " << rem << endl;
						break;
					}
				}
			}
		}
		cout << endl;
	}
		
}

/*
КВАДРАТЫ. Найдите k-ю цифру последовательности: 14916253649...
*/