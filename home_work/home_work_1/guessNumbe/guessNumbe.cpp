#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	int const SIZE = 10;
	int userAnsver = 0;
	cout << "я загадал число от 1 до 1000, угадай его!" << endl;

	while (true)
	{
		cout << "Введите число" << endl;
		cin >> userAnsver;

		if (userAnsver == SIZE) {
			cout << "BINGO!" << endl;
			break;
		}
		if (userAnsver < SIZE) {
			cout << "Больше!" << endl;
		}
		if (userAnsver > SIZE) {
			cout << "Меньше!" << endl;
		}
	}
   
}

/*
5) Игра “УГАДАЙ ЧИСЛО”: компьютер загадывает (константа в программе)
число от 1 до 1000. Пользователь вводит числа до тех пор, пока не угадает –
тогда печатается BINGO!. Компьютер делает подсказки: больше или меньше.
*/