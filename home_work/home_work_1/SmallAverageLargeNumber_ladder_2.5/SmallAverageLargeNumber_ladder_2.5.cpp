#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
    int tempNum = 0, tempNum1 = 0;
    setlocale(LC_CTYPE, "rus");
    while (true)
    {
        int num, rem = 0;
        int next, currentItem = 0, currentItem1 = 0;
        int countForIncreasing = 0;
        int countForDecreasing = 0;
        int max = 0;
        int min = 0;
        double allAvg = 0, avg = 0;
        int countItem = 0;

        cout << "Enter num: ";
        cin >> num;
        min = ((num / 10) % 10); // next от currentItem 
        tempNum = num;
        tempNum1 = num;

        if (num < 0 || num == 0) {
            cout << "Enter correct number..." << endl;
        }
        else
        {
            while (num > 0)
            {
                //12345
                currentItem = num % 10; //5
                num = num / 10;
                next = num % 10;

                allAvg += currentItem;
                countItem++;
              
                max < currentItem ? max = currentItem : max;
                min > currentItem ? min = currentItem : min;
            }
            allAvg = allAvg / countItem;
            cout << "Самая большая: "<< max << endl;
            cout << "Самая маленькая: " << min << endl;
            cout << "Средняя арифметическое всех чисел: " << allAvg << endl;
  
            currentItem = 0;
            int minOstatok = 0;
            double tempAvg = tempNum1 % 10 - allAvg;
            double currentAvg = 0;
            while (tempNum > 0)
            {
                currentItem = tempNum % 10;
                tempNum1 = tempNum;
                tempNum = tempNum / 10;

                while (tempNum1 > 0)
                {
                    currentItem1 = tempNum1 % 10;
                    tempNum1 = tempNum1 / 10;   

                    currentAvg = fabs(currentItem1 - allAvg);   
                    if (tempAvg > currentAvg) {
                        tempAvg = currentAvg;
                    }
                }
            }
            cout << "среднее: " <<tempAvg + allAvg << endl;
        }
        

    }
    return 0;
}

//5) Печатаем самую маленькую, среднюю и самую большую из всех цифр