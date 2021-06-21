#include <iostream>
using namespace std;

int main()
{
    int num, rem = 0;
    cout << "Enter number" << endl;
    cin >> num;

    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;

        cout << rem << endl;
    }

    return 0;
}
//1) Печатаем все его цифры числа столбиком(с новой строки)