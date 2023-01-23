//Пользователь пишет 5 оценок и выводится среднее арифметическое предпологающее допущен ли студент к экзамену



#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    setlocale(LC_ALL, "Russian");

    float countGrade = 5;
    int grade = 0, contain = 0;
    float sumGrade = 0;
    float result = 0;

    cout << "Допуск ++ \n";
    
    cout << "Введите 5 оценок: ";
    for (int j = 0; j < countGrade; j++)
    {
        cout << "Введите оценку № " << j + 1 << "\n";
        cin >> grade;
        contain += grade;
        sumGrade = contain;
    }

    result = sumGrade / countGrade;
    cout << round(result);
    
    if (result >= 4)
    {
        cout << "Студент допущен \n, средняя оценка = " << result;
    }
    else
    {
        cout << "Студент не допущен \n, средняя оценка = " << result;
    }
}



