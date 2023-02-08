#include <time.h>
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	
	int row = 0, column = 0;

	cout << "Программа для поиска первого вхождения максимального элемента массива v 1.0" << endl;
	cout << "Введите последовательно размерность вашего массива, кол-во строк и столбцов";
	cin >> row >> column;
	int array[100][100];

	for (int i = 0; i < row; i++)
	{
		cout << " ";
		cout << "\n";
		for (int j = 0; j < column; j++)
		{
			array[i][j] = 1 + rand() % 99;
			cout << " ";
			cout << array[i][j];
		}
	}
	int arrRes = array[0][0], r_max = 0, k_max = 0;
	for (int r = 0; r < row; r++)
	{
		for (int k = 0; k < column; k++)
		{
			if (array[r][k] > arrRes)
			{
				arrRes = array[r][k];
				r_max = r;
				k_max = k;
			}
		}
	}
	cout << endl; 
	cout << arrRes;
}
