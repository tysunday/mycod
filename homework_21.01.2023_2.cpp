//Напишите программу, которая вычисляет сумму целых
//чисел от а до 500 (значение a вводится с клавиатуры).

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	long double a = 0, sum = 0;
	cout << "Введите число с которого начать подсчёт: "; cin >> a;

	for (a; a <= 500; ++a)
	{
		
		sum = sum + a;
	}

	cout << "Сумма всех натуральных чисел начиная с введёного вами числа до 500 = " << sum;

}