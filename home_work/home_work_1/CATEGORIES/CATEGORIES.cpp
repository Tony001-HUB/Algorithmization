#include <iostream>
using namespace std;

int howManyDigitsInNumber(int numberFromTableSquares)
{
    int count = 0;
    while (numberFromTableSquares > 0)
    {
        count++;
        numberFromTableSquares /= 10;
    }
    return count;
}

void swapDigits(int number) {
    int currentDigitFromTableSquares = 0;

    for (int y = 0; y < howManyDigitsInNumber(number); y++)
    {
        currentDigitFromTableSquares = number / pow(10, (howManyDigitsInNumber(number) - (y + 1)));
        currentDigitFromTableSquares %= 10;

        while (currentDigitFromTableSquares > 0)
        {
            cout << currentDigitFromTableSquares << " ";
            currentDigitFromTableSquares /= 10;
        }
    }

}

int main()
{
   swapDigits(1234);

}

/*
 РАЗРЯДЫ. Разработайте функцию, которая переворачивает переданное ей целое число: 1234 -> 4321
*/