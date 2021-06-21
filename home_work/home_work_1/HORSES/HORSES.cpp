#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        cout << endl;
        int x, y, x2, y2 = 0;

        cout << "Enter x: " << endl;
        cin >> x;
        cout << "Enter y: " << endl;
        cin >> y;
        cout << "Enter x2: " << endl;
        cin >> x2;
        cout << "Enter y2: " << endl;
        cin >> y2;

        if (
            x - 2 == x2 && y + 1 == y2 || 
            x + 2 == x2 && y + 1 == y2 || 
            x - 2 == x2 && y - 1 == y2 || 
            x + 2 == x2 && y - 1 == y2 || 
            x + 1 == x2 && y - 2 == y2 ||
            x + 1 == x2 && y + 2 == y2 ||
            x - 1 == x2 && y + 2 == y2 ||
            x - 1 == x2 && y - 2 == y2
            ) {
            cout << "Beat" << endl;
        }
        else {
            cout << "No't beat" << endl;
        }
    }
    
    return 0;
}