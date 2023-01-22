
// Напишите программу, которая запрашивает два целых числа
// x и y, после чего вычисляет и выводит значение x в степени y.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	double x = 0, y = 0, w = 0;
	cout << "Введите число: "; cin >> x; cout << endl;
	cout << "Введите в какую степень хотите его возвести: "; cin >> y; cout << endl;

	w = pow(x, y);

		cout << w;
}

