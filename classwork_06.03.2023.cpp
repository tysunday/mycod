//Задание 1. Написать функцию, добавляющую столбец
//двухмерному массиву в указанную позицию.
//Задание 2. Написать функцию, удаляющую столбец двухмерного массива по указанному номеру.
//Задание 3. Дана матрица порядка M×N(M строк, N столбцов).Необходимо заполнить ее значениями и написать
//функцию, осуществляющую циклический сдвиг строк
//и / или столбцов массива указанное количество раз и в указанную сторону.
#include <iostream>
#include <time.h>
using namespace std;

int ArrayFill(int** array, int rows, int columns);
int task1(int** array, int columns, int rows);
//int task2(int** array, int columns, int rows); ЭТО НЕПРАВИЛЬНАЯ ФУНКЦИЯ

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int rows = 0, columns = 0;
	cout << "Введите количество строк: \n";
	cin >> rows;
	cout << "Введите количество столбцов: \n";
	cin >> columns;

	int** array = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[columns];
	}
	ArrayFill(array, rows, columns);

	cout << endl << endl;
	task1(array, columns, rows);
	//task2(array, columns, rows); ОНА НЕПРАВИЛЬНАЯ
	

}

int ArrayFill(int** array, int rows, int columns)
{
	

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i][j] = 1 + rand() % 9;
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}

int task1(int** array, int columns, int rows)
{
	int position = 0, temp = 0, temp2 = 0;
	cout << "В какую позицию вы хотите добавить столбец? \n";
	cin >> position;

	columns += 1;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (j + 1 == position)
			{

				temp = array[i][j];
				for (int x = j; x != columns; x++)
				{
					temp2 = array[i][x + 1];
					array[i][x + 1] = temp;
					temp = temp2;
				}
				array[i][j] = 0;

			}
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}

//int task2(int** array, int columns, int rows)
//{
//	int position = 0, temp = 0, temp2 = 0;
//	cout << "Из какой позиции вы хотите удалить столбец? \n";
//	cin >> position;
//
//	columns += 1;
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < columns; j++)
//		{
//			if (j + 1 == position)
//			{
//				temp = array[i][j + 2];
//				for (int x = j; x != columns; x++)
//				{
//					temp2 = array[i][x - 1];
//					array[i][x - 1] = temp;
//					temp = temp2;
//				}
//			}
//			cout << array[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}  ЭТО ВООБЩЕ ВСЁ НЕПРАВИЛЬНО!


