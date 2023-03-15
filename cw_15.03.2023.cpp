﻿#include <iostream>
using namespace std;

union Employee
{
    int id;
    double salary;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));

    Employee myEmployee;
    
    myEmployee.id = 15;
    cout << "The first value (id) at ";
    cout << "the allocated memory: ";
    cout << myEmployee.id << "\n";
    cout << myEmployee.salary << endl;
    myEmployee.salary = 100.35;
    cout << "The next value (salary) strored ";
    cout << "after removing the previous value: ";
    cout << myEmployee.salary << endl;
    cout << myEmployee.id << "\n";


    


    int x = 6, y = 5, z = 0;

    z = x | y;

    /*  При логическом & - когда оба операнда true т.е. при
    * 
    * 11001 & 10010 = 00101;
    * 
    * При логическом | - когда какой-либо из операндов true
    * 
    * 11001 | 10010 = 11011;
    * 
    * При логическом ^ - когда операнды не совпадают возвращает true
    * 
    *   11001 ^ 10010 = 01011;
    * 
    * При логическом ~ - делает обратное с операндом т.е. если 0, то возвращает 1,
    *  если 1 то возвращает 0.
    * 
    * ~11011 = 00100;
    * 
    */
}

