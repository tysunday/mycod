//      Задание 3. Создайте двухмерный массив.
// Заполните его случайными числами и покажите на экран.Пользователь выбирает количество сдвигов и положение(влево, вправо, вверх, вниз).
// Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	const int rows = 5;
	const int columns = 5;
	int idMove = 0, answer = 0, positions = 0;
	idMove = 0;

	int array[rows][columns]; // исходный
	int arrayMove[rows][columns]; // передвигаемый
	int arrayFinal[rows][columns]; // готовый
	

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i][j] = rand() % 25;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

		cout << "how we will move our massive? 1 - left, 2 - right, 3 - up, 4 - down" << endl;
		cin >> idMove;
		cout << "for how many positions? " << endl;
		cin >> positions;
		positions %= rows;
		cout << "Move massive on " << positions << " positions" << endl;

		if (idMove == 1)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					arrayMove[i][j] = array[i][(j + positions) % rows];
				}
			}
		}
		else if (idMove == 2)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					arrayFinal[i][j] = array[i][j]; 
					// ввёл дополнительный массив arrayFinal для того чтоб не менять переменные в основном,
					//а менять всё постепенно, т.к. в основном массиве, будут перезаписываться нужные нам в дальнейшем данные.
					arrayMove[i][(j + positions) % rows] = arrayFinal[i][j];
				}
			}
		}
		else if (idMove == 3)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					arrayMove[i][j] = array[(i + positions) % rows][j];
				}
			}
		}
		else if (idMove == 4)
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j < columns; j++)
				{
					arrayFinal[i][j] = array[i][j];
					// ввёл дополнительный массив arrayFinal для того чтоб не менять переменные в основном,
					//а менять всё постепенно, т.к. в основном массиве, будут перезаписываться нужные нам в дальнейшем данные.
					arrayMove[(i + positions) % rows][j] = arrayFinal[i][j];
				}
			}
		}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << arrayMove[i][j] << " ";
		}
		cout << endl;
	}
}

