#include <iostream>
using namespace std;

int main()
{
    int const SIZE = 10;

    for (int i = 1; i <= SIZE; i++) {
        for (int y = 1; y <= SIZE; y++) {
            cout << y * i << "\t";
        }
        cout << endl;
    }
}
