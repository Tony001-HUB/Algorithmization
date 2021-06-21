#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num, rem, sum = 0;

        cout << "Enter number" << endl;
        cin >> num;

        if (num < 0) {
            cout << "Enter correct number..." << endl;
        } else {
            
            while (num > 0)
            {
                rem = num % 10;
                num = num / 10;

                sum += rem;
            }

        }

        num < 0 ? cout << endl : cout << "Sum: " << sum << endl;
    }

    return 0;
}

//2) Печатаем сумму цифр 