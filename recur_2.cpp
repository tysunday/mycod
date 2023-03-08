//Recur2.Описать рекурсивную функцию Fact2(N) вещественного типа, вычисляющую значение двойного факториала
//N!!= N·(N−2)·(N−4)·. . .
//(N > 0 — параметр целого типа; последний сомножитель в произведении
//	равен 2, если N — четное число, и 1, если N — нечетное).С помощью
//	этой функции вычислить двойные факториалы пяти данных чисел.

#include <iostream>
using namespace std;
int DoubleFact(int number)
{
	if (number % 2 == 0)
	{
		if (number > 0 && number != 2)
			return number * DoubleFact(number - 2);
	}
	else if (number % 2 == 1)
	{
		if (number > 0 && number != 1)
			return number * DoubleFact(number - 2);
	}
	return number;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	int number = 0, result = 0;
	cout << "Введите число: \n";
	cin >> number;
	result = DoubleFact(number);
	cout << result << endl;
}

