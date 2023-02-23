//Задание 3. Написать игру «Крестики - нолики».
#include <iostream>
#include <conio.h>
using namespace std;
int x = 0;
void DiagonalRavno(int cols, int rows, int** arr)
{
	int x = 0, l = 0;
	if (cols == rows) // я делаю проверку диагоналей только для квадратных 
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (i == j && arr[i][j] == 1)
				{
					while (i + 1 < rows && j + 1 < cols && arr[i][j] == arr[i + 1][j + 1])
					{
						l++;
						if (l == rows - 1) 
						{
							cout << "user 1 win =!!!)))";
							exit(l == rows - 1);
						}
						else
							break;
					}
				}
				else if (i == j && arr[i][j] == 2)
				{
					while (i + 1 < rows && j + 1 < cols && arr[i][j] == arr[i + 1][j + 1])
					{
						l++;
						if (l == rows - 1)
						{
							cout << "user 2 win =!!!)))";
							exit(l == rows - 1);
						}
						else
							break;
					}
				}
			}
		}
	}
}

void MirrorDiagonalRavno(int cols, int rows, int** arr)
{
	int x = 0, l = 0;
	if (cols == rows)
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (i == cols - 1 - j && arr[i][j] == 1)
				{
					while (i - 1 >= 0 && j - 1 >= 0 && arr[i][j] == arr[i - 1][j - 1])
					{
						l++;
						cout << "hey!";
						if (l == rows - 1)
						{
							cout << "user 1 win =!!!)))";
							exit(l == rows - 1);
						}
						else
							break;
					}
				}
				else if (i == cols - 1 - j && arr[i][j] == 2)
				{
					while (i - 1 >= 0 && j - 1 >= 0 && arr[i][j] == arr[i - 1][j - 1])
					{
						l++;
						cout << "hey";
						if (l == rows - 1)
						{
							cout << "user 2 win =!!!)))";
							exit(l == rows - 1);
						}
						else
							break;
					}
				}
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int rows = 0, cols = 0; // строки и столбцы массива соответственно
	int user1 = 0, user2 = 0; // значения которые будут перезаписываться для игрока 1 и игрока 2.
	cout << "Введите количество строк в массиве: " << endl;
	cin >> rows;
	cout << "Введите количество столбцов в массиве: " << endl;
	cin >> cols;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
	}

	for (int i = 0; i < rows; i++)
	{
		cout << "\n";
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = 0;
			cout << arr[i][j];
		}
	}

	while (true) {
		for (int i = 0; i < rows; i++)
		{
			cout << "\n";
			for (int j = 0; j < cols; j++)
			{
				cout << "Ход игрока 1\n Введите координаты куда вы хотите поставить цифру 1: \n";
				cout << "строка: "; cin >> i;
				cout << "столбец: "; cin >> j;
				while (i - 1 > rows || j - 1 > cols || i - 1 < 0 || j - 1 < 0)
				{
					cout << "Вы ввели недопустимые значения, границы координат относительно строк и столбцов = " <<
						rows << " и " << cols << endl;
					cout << "Ход игрока 1\n Введите координаты куда вы хотите поставить цифру 1: \n";
					cout << "строка: "; cin >> i;
					cout << "столбец: "; cin >> j;
				}
				j -= 1; // программисты с нуля считают а обычные люди с единицы.
				i -= 1;
				arr[i][j] = 1;
				for (int i = 0; i < rows; i++)
				{
					cout << "\n";
					for (int j = 0; j < cols; j++)
					{
						cout << arr[i][j];
					}
				}
				cout << endl;
				i = 0, j = 0;

				DiagonalRavno(cols, rows, arr); // фунция проверки значений по главной диагонали
				MirrorDiagonalRavno(cols, rows, arr); // функция проверки зеркальной диагонали

				cout << "Ход игрока 2\n Введите координаты куда вы хотите поставить цифру 2: \n";
				cout << "строка: "; cin >> i;
				cout << "столбец: "; cin >> j;
				while (i - 1 > rows || j - 1 > cols || i - 1 < 0 || j - 1 < 0)
				{
					cout << "Вы ввели недопустимые значения, границы координат относительно строк и столбцов = " <<
						rows << " и " << cols << endl;
					cout << "Ход игрока 1\n Введите координаты куда вы хотите поставить цифру 2: \n";
					cout << "строка: "; cin >> i;
					cout << "столбец: "; cin >> j;
				}
				j -= 1; // программисты с нуля считают а обычные люди с единицы.
				i -= 1;
				arr[i][j] = 2;
				for (int i = 0; i < rows; i++)
				{
					cout << "\n";
					for (int j = 0; j < cols; j++)
					{
						cout << arr[i][j];
					}
				}
				cout << endl;
				i = 0, j = 0;
				DiagonalRavno(cols, rows, arr); // фунция проверки значений по главной диагонали
				MirrorDiagonalRavno(cols, rows, arr); // функция проверки зеркальной диагонали
			}
		}

	}
}
// устал делать это\ надо бы вместо 1 и 2 для пользователя сделать буквы Х и О
//ну массивы с буквами мы пока не проходили

