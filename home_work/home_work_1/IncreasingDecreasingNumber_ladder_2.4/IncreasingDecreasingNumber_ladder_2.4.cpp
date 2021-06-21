#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int num, rem = 0;
        int prev, next = 0;
        int countForIncreasing = 0;
        int countForDecreasing = 0;
        
        cout << "Enter num: ";
        cin >> num;//12435

        if (num < 0 || num == 0) {
            cout << "Enter correct number..." << endl;
        }
        else
        {
            while (num > 0)
            {
                rem = num % 10; //4
                prev = rem; // первое числа (4)
                num = num / 10; //1234
                next = num % 10; // второе числа 4

                if (prev > next && next != 0) {
                    countForIncreasing++;
                }
                if (prev < next && next != 0)
                {
                    countForDecreasing++;
                }
            }
            cout << endl;
        }

        if (countForIncreasing > 0 && countForDecreasing > 0) {
            return 0;
        }
        if (countForIncreasing > 0 && countForDecreasing == 0) {
            cout << "Increasing number" << endl;
        }
        if (countForIncreasing == 0 && countForDecreasing > 0) {
            cout << "Decreasing number" << endl;
        }
    }
    return 0;
}

//4) Является ли число возрастающей или убывающей последовательностью цифр?