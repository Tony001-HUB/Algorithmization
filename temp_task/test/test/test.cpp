#include <iostream>
#include <string>
using namespace std;
using namespace std;

int main()
{
    int a;

    cout << "Enter a: ";
    cin >> a;
     
    cout << typeid(a).name() << " " << a;
    
    return 0;
}