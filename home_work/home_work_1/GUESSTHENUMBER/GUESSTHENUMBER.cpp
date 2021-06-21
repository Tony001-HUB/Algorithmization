#include <iostream>
#include <ctime>
using namespace std;


int randomNumberGeneration()
{
    int randNumber = 0;
    srand(time(0));
    randNumber = 1 + rand() % 1000;

    return randNumber;
}

bool guessTheNumber(int randNumber) {
	int userAnsver = 0;
	cout << "I guessed a number from 1 to 1000, guess it!" << endl;

	while (true)
	{
		cout << "Enter number: " << endl;
		cin >> userAnsver;

		if (userAnsver == randNumber) {
			return true;
		}
		if (userAnsver < randNumber) {
			cout << "More!" << endl;
			cout << endl;
		}
		if (userAnsver > randNumber) {
			cout << "Less!" << endl;
			cout << endl;
		}
	}
}

int main()
{
    bool flag = guessTheNumber(randomNumberGeneration());

    if (flag == true) {
        cout << "You WIN!";
    }
}

/*
2) УГАДАЙ ЧИСЛО. С помощью функций разработайте игру: 
компьютер загадывает число и выдает подсказки ("больше-меньше") пользователю.
*/