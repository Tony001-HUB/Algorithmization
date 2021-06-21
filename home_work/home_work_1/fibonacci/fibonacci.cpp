#include <iostream>
#include <cmath>
using namespace std;

double fibonacci(int n) {
    double number = (pow(((1 + sqrt(5)) / 2), n) - pow(((1 - sqrt(5)) / 2), n)) / sqrt(5);

    return number;
}

int main()
{
    int n = 100;
    cout << fibonacci(n);
}
/*
Напишите функцию фибоначчи и выведите n-е число
Когда n = 100, отрицательное значение, почему?
*/ 