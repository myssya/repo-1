#include <iostream>
using namespace std;

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    }
    else if (year % 100 != 0) {
        return true;
    }
    else if (year % 400 != 0) {
        return false;
    }
    else {
        return true;
    }
}


int main()
{
    setlocale(LC_ALL, "Russian");
    
    int year;
    cout << "Введите любой год: ";
    cin >> year;

    if (isLeapYear(year))
    {
        cout << "Этот год является високосным" << endl;
    }
    else
    {
        cout << " 'Этот год не является високосным" << endl;
    }

    return 0;
}