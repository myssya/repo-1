﻿#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
    if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int year;
    cout << "Введите год: ";
    cin >> year;

    if (isLeapYear(year))
    {
        cout << "Год является високосным" << endl;
    }
    else
    {
        cout << "Год не является високосным" << endl;
    }

    return 0;
}