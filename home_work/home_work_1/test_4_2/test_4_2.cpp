#include <iostream>
using namespace std;

void count(int n) {
	for (int i = 1; i < n; i++) {
		cout << i << " ";
	}
}

int main()
{
	int n = 0;
	cout << "Enter number: " << endl;
	cin >> n;
	count(n);
}


//2) count выводит от 1 до n

/*
1) count выводит от 1 до 10

2) count выводит от 1 до n

3) count передает 3 параметра min, max, step ( 2,4,6,8...)

4) Вводим число и функция передает ее куб

5) Функция расстояния:
передаем 4 числа, функция возвращает расстояние между двумя точками
*/