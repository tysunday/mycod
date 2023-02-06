//Напишите программу, которая выполняет поэлементную
//сумму двух массивов и результат заносит в третий массив.
//Элементы массивов можно сгенерировать в произвольном
//диапазоне.
#include <iostream>
using namespace std;
const int X = 5; // константы массивов.
const int Y = 5;
const int Z = 5;
int main()
{
	setlocale(LC_ALL, "Russian");
	int* arrayFirst = new int[X];
	int* arraySecond = new int [Y];
	int* arraySum = new int[Z];
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите число с первого массива: "; cin >> arrayFirst[i]; cout << endl;
		cout << "Введите число со второго массива: "; cin >> arraySecond[i]; cout << endl;
		arraySum[i] = arrayFirst[i] + arraySecond[i];
		cout << "Сумма элементов с первого и второго массива = " << arraySum[i] << endl;
	}
	cout << "сумма чисел первого и второго массива: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arraySum[i] << endl;
	}
}

