//Пользователь вводит данные о своих расходах в долларах за неделю(каждый день).Написать программу, которая
//вычисляет :
//■ среднюю(за неделю) потраченную сумму;
//■ общую сумму, потраченную пользователем за неделю;
//■ количество дней и их названия(например, «вторник»),
//когда сумма расхода(в день) превысила 100 долларов.
#include <iostream>

using namespace std;
const int weeks = 7;
const int Y = 7;

int main()
{
	setlocale(LC_ALL, "Russian");

	int* expenses = new int [weeks]; // я ввёл динамический массив в котором пользователь сможет вводить свои расходы в долларах за неделю.
	string nameDays[Y] = { "Понедельник", "Вторник", "Среду", "Четверг", "Пятницу", "Субботу", "Воскресенье"};
	int sum = 0, average_expenses = 0;

	for (int i = 0; i < weeks; i++)
	{
		cout << "Введите свои расходы за " << nameDays[i] << endl;
		cin >> expenses[i];

	}

	for (int i = 0; i < weeks; i++)
	{
		sum = expenses[i] + sum;
		
	}
	for (int i = 0; i < weeks; i++)
	{
		if (expenses[i] > 100)
		{
			cout << "В " << nameDays[i] << " ваши расходы превысили 100 и составили: " << expenses[i] << endl;
		}
		
	}
	 cout << endl;

	cout << "общая сумма за " << 7 << " дней: " << sum << endl;
	average_expenses = sum / weeks;
	cout <<"среднее потраченное за неделю = " << average_expenses;
	
}

