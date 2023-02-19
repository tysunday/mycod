//Задание 1. Написать перегруженные функции(int, double,
//    char) для выполнения следующих задач :
//■ Инициализация квадратной матрицы;
//■ Вывод матрицы на экран;
//■ Определение максимального и минимального элемента
//на главной диагонали матрицы;
//■ Сортировка элементов по возрастанию отдельно для
//каждой строки матрицы.
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int** Array(int rows, int columns)
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int** array;
	cout << "enter rows counst" << endl;
	cin >> rows;
	cout << "enter colums count" << endl;
	cin >> columns;

	array = new int *[rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int [columns];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i][j] = rand() % 10;
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	int min = 10, max = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (i == j && array[i][j] < min)
				min = array[i][j];
			else if (i == j && array[i][j] > max)
				max = array[i][j];
		}
	}
	cout << "минимальное число на главной диагонали = " << min << "\n";
	cout << "максимальное число на главной диагонали = " << max << "\n";

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (array[i][j] > array[i][j + 1] && j + 1 < columns)
			{
				int b = array[i][j + 1];
				array[i][j + 1] = array[i][j];
				array[i][j] = b;
				j = -2; 
			}
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}

		return 0;
}
int main()
{
	int rows = 0, columns = 0;
	Array(rows, columns);

}

