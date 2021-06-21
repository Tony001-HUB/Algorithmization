#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        cout << endl;

        int firstNumber, secondNumber, tempFirst, tempSecond = 0;

        cout << "Enter firstNumber: " << endl;
        cin >> firstNumber;
        tempFirst = firstNumber;
        cout << "Enter secondNumber: " << endl;
        cin >> secondNumber;
        tempSecond = secondNumber;

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

        int NOD = secondNumber;

        int NOC = ((tempFirst * tempSecond) / NOD);

        cout << "NOC:" << NOC << endl;

    }

    return 0;
}