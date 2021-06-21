#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

void multiplicationTaskOne() {
    for (int i = 1; i < 11; i++) {
        for (int y = 1; y < 11; y++) {
            cout << y * i << "\t";
        }
        cout << endl;
    }
}

void mutants() {
    int m, p, n, dayCount = 0;
 
    cout << "Enter m(how many mutants attacked): " << endl;
    cin >> m;
    cout << "Enter p(how many % do they reproduce every day): " << endl;
    cin >> p;
    cout << "Enter n(how many of them will be killed every day): " << endl;
    cin >> n;
    

    while (m > 0) {
        if (n < m * p / 100) {
            cout << "Mutants winner";
            break;
        }
        else
        {
            int killDay = m - (m + (m * p / 100) - n);
            m = m - killDay;
            dayCount++;
        }
    }
    dayCount == 0 ? cout << ":(" : cout << "All mutants will be killed in: " << dayCount << " days";
    cout << endl;
    /*
    M = 60;
    P = 50% = 30;
    N = 35;
    1)	60 + 30 – 35 (один день) = 55;
    2)  55 + 27 - 35 (второй день) = 47
    3)  47 + 23 - 35 (третий денсь) = 35 
    4)  35 + 17 - 35 (четвертый день) = 17
    5)  17 + 8 - 35 (пять день) = -10
    m - (m + (m * p / 100) - n);
    */
}

void NOC_V1() {
    vector<int> arrForFirstNumber;// второй вектор элементов
    vector<int> arrForSecondNumber; // первый вектор элементов
    vector<int> arrOfFindItems; // вектор исключаеных элементов
    vector<int> arrOfAllItems; //конечный вектор 
    int firstNumber = 0; 
    int secondNumber = 0;
    int NOC = 1;

    cout << "Enter first number: " << endl;
    cin >> firstNumber;
    cout << "Enter second number: " << endl;
    cin >> secondNumber;

    cout << "Decomposition of the first number: "; // разбиваю первое число на простые множетели
    for (int i = 2; i <= firstNumber; i++) {
        if (firstNumber % i == 0) {  
            cout << " " << i;
            arrForFirstNumber.push_back(i);
            firstNumber = firstNumber / i;
            i--;
        }
    }

    cout << endl;
    cout << "Decomposition of the second number: "; // разбиваю второе число на простые множетели
    for (int i = 2; i <= secondNumber; i++) {
        if (secondNumber % i == 0) {
            cout << " " << i;
            arrForSecondNumber.push_back(i);
            secondNumber = secondNumber / i;
            i--;
        }
    }

    cout << endl; // делаю проверку на повторяющиеся множители первого и второго числа, заношу их в отдельный вектор 
    for (vector<int>::size_type i = 0; i < arrForFirstNumber.size(); ++i) { 
        for (vector<int>::size_type y = 0; y < arrForSecondNumber.size(); ++y) {
            if (arrForFirstNumber[i] == arrForSecondNumber[y])
            {
                arrOfFindItems.push_back(arrForFirstNumber[i]);
            }
        }
    }

    // сортирую вектор повторяющихся множетелей
    sort(arrOfFindItems.begin(), arrOfFindItems.end());
    //удаляю повторяющиеся э-ты чтобы они были в еденичном экзепляре
    arrOfFindItems.erase(unique(arrOfFindItems.begin(), arrOfFindItems.end()), arrOfFindItems.end());

    // копирую первый и второй вектор в один
    arrForFirstNumber.insert(arrForFirstNumber.end(), arrForSecondNumber.begin(), arrForSecondNumber.end());

    cout << endl;
    cout << "repeat item: ";
    for (vector<int>::size_type y = 0; y < arrOfFindItems.size(); ++y) {
        cout << " " <<arrOfFindItems[y];
    }

    //исключаю из первый+второй вектора элементы из вектора с повторяющимися множетелями
    for (vector<int>::size_type i = 0; i < arrOfFindItems.size(); ++i) {
        for (vector<int>::size_type y = 0; y < arrForFirstNumber.size(); ++y) {
            if (arrOfFindItems[i] == arrForFirstNumber[y]) {
                arrForFirstNumber.erase(arrForFirstNumber.begin() + y);
                break;
            }
        }
    }

    // копирую в итоговый вектор 
    arrOfAllItems.insert(arrOfAllItems.end(), arrForFirstNumber.begin(), arrForFirstNumber.end());

    cout << endl;
    cout << "final array: ";
    for (vector<int>::size_type y = 0; y < arrOfAllItems.size(); ++y) {
        cout << " " << arrOfAllItems[y];
        NOC *= arrOfAllItems[y];
    }

    cout << endl;
    cout << "НОК: ";
    cout << NOC;
}

int NOD(int firstNumber, int secondNumber) {

    cout << "FirstNumber: "<< firstNumber << endl;
    cout << "SecondNumber: "<< secondNumber << endl;

    while (firstNumber != secondNumber) {
        if (firstNumber > secondNumber) {
            firstNumber -= secondNumber;
        }
        else {
            secondNumber -= firstNumber;
        }
    }
    
    return secondNumber;
}

void NOC_V2(int firstNumber, int secondNumber) {
    int NOC = ((firstNumber * secondNumber) / NOD(firstNumber, secondNumber));

    cout << "НОК:" << NOC << endl;
}

void HORSES(int x, int y, int x2, int y2) {

    if (x - 2 == x2 && y + 1 == y2 || x + 2 == x2 && y + 1 == y2 || x - 2 == x2 && y - 1 == y2 || x + 2 == x2 && y - 1 == y2) {
        cout << "Beat" << endl;
    }
    else {
        cout << "No't beat" << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "_______________________________________" << endl;
    cout << "First task: " << endl;
    multiplicationTaskOne();
    cout << endl;

    cout << "_______________________________________" << endl;
    cout << "Second task: " << endl;
    mutants();
    cout << endl;
     
    cout << "_______________________________________" << endl;
    cout << "Third  task: V_1.0 " << endl;
    NOC_V1();
    cout << endl;

    cout << "_______________________________________" << endl;
    cout << "Third  task: V_2.0 " << endl;
    NOC_V2(24, 56);
    cout << endl;

    cout << "_______________________________________" << endl;
    cout << "Fourth  task: " << endl;
    HORSES(4, 4, 6, 5);
}
