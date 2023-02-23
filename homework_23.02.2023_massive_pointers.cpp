#include <iostream>
#include <time.h>
using namespace std;
int DynamicArray(int rows, int columns, int** array); // prototype function
int MassiveFill(int rows, int columns, int** array); // prototype function
int ChangeMassive(int rows, int columns, int** array, int* pointer1, int* pointer2); // prototype function


int main()
{
	setlocale(LC_ALL, "Russian");
	int rows = 0, columns = 0;
	int* pointer1 = NULL;
	int* pointer2 = NULL;

	cout << "Введите количество строк в массиве: ";
	cin >> rows;
	cout << "Введите количество столбцов в массиве: ";
	cin >> columns;
	int** array = new int* [rows];

	DynamicArray(rows, columns, array);
	MassiveFill(rows, columns, array);
	ChangeMassive(rows, columns, array, pointer1, pointer2);
}


int DynamicArray(int rows, int columns, int** array) // функция создания динамического массива
{

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[columns];
	}
	return 0;
}

int MassiveFill(int rows, int columns, int** array) // функция заполнения массива и вывода
{
	srand(time(NULL));
	for (int i = 0; i < rows; i++)
	{
		cout << "\n";
		for (int j = 0; j < columns; j++)
		{
			array[i][j] = 10 + rand() % 50;
			cout << array[i][j] << " ";
		}
	}
	cout << endl << endl;
	return 0;
}

int ChangeMassive(int rows, int columns, int** array, int* pointer1, int* pointer2) // функция смены местами чётных и нечётных ключей
{

	for (int i = 0; i < rows; i++)
	{
		cout << "\n";
		for (int j = 0; j < columns; j++)
		{
			if (j % 2 == 0) {
				pointer1 = &array[i][j];
			}
			else if (j % 2 == 1) {
				pointer2 = &array[i][j];
				cout << *pointer2 << " ";
				cout << *pointer1 << " ";
			}
			if (j % 2 == 0 && j == columns - 1) {
				pointer2 = &array[i][j = columns - 1];
				cout << *pointer2 << " ";
			} 
			// это для вывода последнего столбика в массиве с учётом что массив нечётный.
			// а вообще нужно было бы двигать в сторону это всё по правильному.
		}
	}
	return 0;
}


