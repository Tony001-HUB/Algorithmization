#include <iostream>
using namespace std;

int main()
{
    while (true)
    {
        int day = 0, month = 0, year = 0;
        int countDay = 0, countMonth = 0, countYear = 0;
        int total = 0, totalCount = 0;

        cout << "Enter day" << endl;
        cin >> day;
        cout << "Enter month" << endl;
        cin >> month;
        cout << "Enter year" << endl;
        cin >> year;

        if (day > 31 && month > 12 && year > 2100 && year < 1900) {
            return 0;
        }

        while (day > 0)
        {
            countDay += day % 10;
            day = day / 10;
        }
        while (month > 0)
        {
            countMonth += month % 10;
            month = month / 10;
        }
        while (year > 0)
        {
            countYear += year % 10;
            year = year / 10;
        }

        total = countDay + countMonth + countYear;

        while (total > 0)
        {
            totalCount += total % 10;
            total = total / 10;
        }
        totalCount == 10 ? totalCount = 1 : totalCount;

        cout << "Number of fate: " << totalCount << endl;
    }
    return 0;
}

//ЧИСЛО СУДЬБЫ. Цифры полной даты рождения суммируются, пока не получится одна цифра. 
//Это число судьбы (введите свою дату рождения и проверьте, сходится ли описание в интернете))