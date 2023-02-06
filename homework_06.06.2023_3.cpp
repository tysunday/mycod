//Пользователь вводит данные о своих расходах в долларах за неделю(каждый день).Написать программу, которая
//вычисляет :
//■ среднюю(за неделю) потраченную сумму;
//■ общую сумму, потраченную пользователем за неделю;
//■ количество дней и их названия(например, «вторник»),
//когда сумма расхода(в день) превысила 100 долларов.
#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
const int weeks = 7;
const int N = 7;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int* expenses = new int [weeks]; // я ввёл динамический массив в котором пользователь сможет вводить свои расходы в долларах за неделю.
	string nameDays[N] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"};
	int sum = 0, average_expenses = 0;


	for (int i = 0; i < weeks; i++)
	{

		cout << "Введите свои расходы за " << i + 1 << " день недели:" << endl;
		cin >> expenses[i];
		cout << expenses[i] << endl;

	}

	for (int i = 0;i < weeks; i++)
	{
		sum = expenses[i] + sum;
		cout << " сумма за " << i + 1 << " день " << sum << endl;
	}
	average_expenses = sum / weeks;
	cout <<"среднее потраченное за неделю = " << average_expenses;
	
}