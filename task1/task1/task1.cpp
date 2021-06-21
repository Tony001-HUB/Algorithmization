#include <iostream>
#include <string>
using namespace std;

void firstTask()
{
    int enterItem = 0;

    cin >> enterItem;

    if (enterItem % 2 == 0) {
        std::cout << ("Even") << endl;
    }
    else {
        std::cout << ("Odd") << endl;
    }
}

void secondTask()
{
    int firstItem = 0;
    int secondItem = 0;

    cin >> firstItem;
    cin >> secondItem;

    if (firstItem % 2 == 0 && secondItem % 2 == 0) {
        cout << "both even" << endl;
    }
}

void thirdTask()
{
    int a = 0;
    int b = 0;

    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;

    if (a and b % 2 == 0 and a == b) {
        cout << "YES" << endl; //equal even
    }
}

void fourthTask()
{
    int a = 0;
    bool indicator = true;

    cout << "Please enter an integer a: " << endl;
    cin >> a;

    if (a % a == 0 && a % 1 == 0)
    {
        for (int i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                indicator = false;
            }
        }
        if (indicator)
        {
            cout << "Prime";
        }
        else
        {
            cout << "Isn't prime";
        }
    }
}


int main()
{
    firstTask();
    secondTask();
    thirdTask();
    fourthTask();
}

