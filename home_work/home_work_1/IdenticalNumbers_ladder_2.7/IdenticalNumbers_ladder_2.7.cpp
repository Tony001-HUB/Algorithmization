#include <iostream>
#include <vector>
using namespace std;

int main()
{
    while (true)
    {
        int num = 0, copyNum = 0;
        int currentItem = 0, copyCurrentItem = 0;
        int count = 0;

        cout << "Enter num: ";
        cin >> num;
        copyNum = num;

        if (num < 0 || num == 0) {
            cout << "Enter correct number..." << endl;
        }
        else
        {
            while (num > 0)
            {
                currentItem = num % 10;
                num = num / 10;
                copyNum = num;

                while (copyNum > 0)
                {
                    copyCurrentItem = copyNum % 10;
                    copyNum = copyNum / 10;
                    
                    if (currentItem == copyCurrentItem) {
                        cout << "Identical: " << currentItem << "and" << copyCurrentItem << endl;
                    }
                }
            }
        }

        

    }
    return 0;
}

//7) Содержит ли число одинаковые цифры ? 