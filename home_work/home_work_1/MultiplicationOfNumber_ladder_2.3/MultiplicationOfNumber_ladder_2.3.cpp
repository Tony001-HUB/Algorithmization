#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num, rem = 0;
        int mult = 1;

        cout << "Enter number" << endl;
        cin >> num;

        if (num < 0) {
            cout << "Enter correct number..." << endl;
        }
        else {

            while (num > 0)
            {
                rem = num % 10;
                num = num / 10;

                mult *= rem;
            }

        }

        num < 0 ? cout << endl : cout << "Mult: " << mult << endl;
    }

    return 0;
}


//3) Печатаем произведение цифр
