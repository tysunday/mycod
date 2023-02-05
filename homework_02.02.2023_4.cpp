/*В одномерном массиве, состоящем из N вещественных
чисел вычислить :
■ Сумму отрицательных элементов.
■ Произведение элементов, находящихся между min и max
элементами.
■ Произведение элементов с четными номерами.
■ Сумму элементов, находящихся между первым и последним отрицательными элементами.*/
#include <iostream>
using namespace std;
const int N = 10;
int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int* numbers = new int[N];

	for (int i = 0; i < N; i++)
	{
		numbers[i] = -25 + rand() % 75; // рандом от -50 до 50.
		cout << numbers[i] << endl;
	}
	int sum = 0, i = 0;
	while (i < N)
	{
		if (numbers[i] < 0)
		{
			sum = numbers[i] + sum;
			i++;
		}
		else
		{
			i++;
		}
	}
	cout << endl << sum << " - это сумма всех отрицательных чисел" << endl;
	i = 0;
	int multiplication = 1;
	while (i < N)
	{
		if (numbers[i] % 2 == 0)
		{
			multiplication = numbers[i] * multiplication;
			cout << multiplication << endl;
			i++;
		}
		else
		{
			i++;
		}
	}
	cout << multiplication << " - это перемножение всех чётных чисел " << endl;
}