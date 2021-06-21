#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        cout << endl;

        int m, p, n, dayCount = 0;

        cout << "Enter m(how many mutants attacked): " << endl;
        cin >> m;
        cout << "Enter p(how many % do they reproduce every day): " << endl;
        cin >> p;
        cout << "Enter n(how many of them will be killed every day): " << endl;
        cin >> n;


        while (m > 0) {
            if (n < m * p / 100) {
                cout << "Mutants winner";
                break;
            }
            else
            {
                int killDay = m - (m + (m * p / 100) - n);
                m = m - killDay;
                dayCount++;
            }
        }
        dayCount == 0 ? cout << ":(" : cout << "All mutants will be killed in: " << dayCount << " days";
        cout << endl;

    }
    /*
    M = 60;
    P = 50% = 30;
    N = 35;
    1)	60 + 30 – 35 (один день) = 55;
    2)  55 + 27 - 35 (второй день) = 47
    3)  47 + 23 - 35 (третий денсь) = 35
    4)  35 + 17 - 35 (четвертый день) = 17
    5)  17 + 8 - 35 (пять день) = -10
    m - (m + (m * p / 100) - n);
    */
}