#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num, rem = 0;
        int prev, next = 0;

        cout << "Enter num: ";
        cin >> num;

        if (num < 0 || num == 0) {
            cout << "Enter correct number..." << endl;
        }
        else
        {
            while (num > 0)
            {
                rem = num % 10;
                prev = rem; // первое числа
                num = num / 10;
                next = num % 10; // второе числа

                if (prev == next) {
                    cout << "Contains" << endl;
                    return 0;
                }
            }
            cout << "no" << endl;
        }
    }
    return 0;
}

//6) Содержит ли число две одинаковые цифры, стоящие подряд ?