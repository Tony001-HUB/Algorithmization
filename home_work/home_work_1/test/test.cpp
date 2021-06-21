#include <iostream>
#include <cmath>

using namespace std;

void printSeries() {
    for (int i = 1; i < 30; i++) {
        cout << i * i << " ";
    }
}

int howManyDigitsInNumber(int numberFromTableSquares)
{
    int count = 0;
    while (numberFromTableSquares > 0)
    {
        count++;
        numberFromTableSquares /= 10;
    }
    return count;
}


void findNumber(int whatNumberPosition)
{
    int count = 0;
    int currentNumberFromTableSquares = 0;
    int currentDigitFromTableSquares = 0;
    for (int i = 1; i < whatNumberPosition + 1; i++)
    {
        currentNumberFromTableSquares = i * i;
        for (int y = 0; y < howManyDigitsInNumber(currentNumberFromTableSquares); y++)
        {
            currentDigitFromTableSquares = currentNumberFromTableSquares / pow(10, (howManyDigitsInNumber(currentNumberFromTableSquares) - (y + 1)));
            currentDigitFromTableSquares %= 10;

            while (currentDigitFromTableSquares > 0)
            {
                count++;
                if (count == whatNumberPosition)
                {
                    cout << "You have entered a position: " << whatNumberPosition << " and this is the number: " << currentDigitFromTableSquares;
                    cout << endl;
                    return;
                }
                currentDigitFromTableSquares /= 10;
            }
        }
    }
}

int main()
{
    while (true)
    {
        int whatNumberPosition = 0;
        cout << endl;
        printSeries();

        cout << endl;
        cout << "Enter the position of the number of the row: " << endl;
        cin >> whatNumberPosition;
        findNumber(whatNumberPosition);
        cout << endl;
    }
    return 0;
}

//
/*
123
1) Печатаем все его цифры числа столбиком (с новой строки)
2) Печатаем сумму цифр 
3) Печатаем произведение цифр
4) Является ли число возрастающей или убывающей последовательностью цифр?
5) Печатаем самую маленькую, среднюю и самую большую из всех цифр
6) Содержит ли число две одинаковые цифры, стоящие подряд?
7) Содержит ли число одинаковые цифры?

1) 1 2 3 4 5
2) -2 -1 0 1 2
3) -2 0 2 4 6
4) 5 4 3 2 1
5) 5 2 -1 -4 -7
6) 1 4 9 16 25
7) 1 2 4 7 11

0) выход по е - показать finita la commedia
1) выход, если введена буква
2) выход, если выбран 0 (число, а не символ ‘0’)
3) выход, если введена цифра(цифра)
4) выход, если введенно число в диапазоне от 1 до 10
5) Игра “УГАДАЙ ЧИСЛО”: компьютер загадывает (константа в программе) 
число от 1 до 1000. Пользователь вводит числа до тех пор, пока не угадает – 
тогда печатается BINGO!. Компьютер делает подсказки: больше или меньше.
*/

/*
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << "Enter c: " << endl;
    cin >> c;

    if (a == 0) {
        cout << "Error! a = 0" << endl;
        return 1;
    }

    double d = b * b - 4 * a * c;
    double x1 = 0.0;
    double x2 = 0.0;
    if (d < 0)
        cout << "No roots";
    else if (d == 0) {
        x1 = -b / (2 * a);
        cout << "x1 = " << x1;
    }
    else {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        cout << x1 << " " << x2;
    }
    */