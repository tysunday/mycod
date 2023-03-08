//Recur3.Описать рекурсивную функцию PowerN(X, N) вещественного типа,
//находящую значение N - й степени числа X по формулам :
//X0 = 1,
//XN = (XN/2)2 при четных N > 0,
//XN = X·XN−1 при нечетных N > 0,
//XN = 1 / X−N при N < 0
//    (X 6 = 0 — вещественное число, N — целое; в формуле для четных N должна использоваться операция целочисленного деления).
//    С помощью этой функции найти значения X N для данного X при пяти данных значениях N.

#include <iostream>
#include <cmath>
using namespace std;
int PowerN(double X, int  N) // X - это искомое число, N - это степень
{
	if (N % 2 == 0 && N > 0)
	{
			X = pow(X, N / 2);
			return X = pow(X, 2);
			N - 1;
	}
	else if (N % 2 == 1 && N > 0)
	{
			return X = X * pow(X, N - 1);
	}
	else if (N < 0)
	{
		return X = pow(X, -N);
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int X = 0, N = 0, result = 0;
	cout << "Введите число: \n";
	cin >> X;
	cout << "Введите степень: \n";
	cin >> N;
	result = PowerN(X, N);
	cout << result << endl;
}

