#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        cout << endl;

        int firstNumber, secondNumber = 0;
        int NOD = 0;

        cout << "Enter firstNumber: " << endl;
        cin >> firstNumber;
        cout << "Enter secondNumber: " << endl;
        cin >> secondNumber;

        if (secondNumber < 0 || firstNumber < 0 || secondNumber == 0 || firstNumber == 0) {
            cout << "Enter correct number..." << endl;
            return 0;
        }

        while (firstNumber != secondNumber) {
            if (firstNumber > secondNumber) {
                firstNumber -= secondNumber;
            }
            else {
                secondNumber -= firstNumber;
            }
        }

        NOD = secondNumber;

        cout << "NOD:" << NOD << endl;

    }

    return 0;
}
