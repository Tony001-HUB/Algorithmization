#include <iostream>
using namespace std;

int main()
{
    int number = 0;

    while (true)
    {
        cout << "Enter number[1..10]" << endl;
        cin >> number;

        if (number >= 1 && number <= 10) {
            cout << "Number" << number << endl;
            break;
        }
        cout << "not number[1..10]" << number << endl;
    }
}