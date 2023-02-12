//      Задание 3. Создайте двухмерный массив.
// Заполните его случайными числами и покажите на экран.Пользователь выбирает количество сдвигов и положение(влево, вправо, вверх, вниз).
// Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int rows = 5;
	const int columns = 5;
	int idMove = 0, answer = 0, positions = 0;
	idMove = 0;

	int arrayMove[rows][columns];
	int array[rows][columns]; // здесь массив указателей на массивы.

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i][j] = rand() % 25;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}

	cout << "wanna play? 1 - YES, another symbol - NO" << endl;
	cin >> answer;
	while (answer == 1)
	{
		cout << "how we will move our massive? 1 - left, 2 - right, 3 - up, 4 - down" << endl;
		cin >> idMove;
		cout << "for how many positions? " << endl;
		cin >> positions;

			if (idMove == 1)
			{
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < columns; j++)
					{
						if (j <= positions)
						{
							arrayMove[i][j] = array[i][abs(j - positions)];
						}
						else if (j > positions)
						{
							arrayMove[i][j] = array[i][j];
						}
					}
				}
			}
			cin >> answer;
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

