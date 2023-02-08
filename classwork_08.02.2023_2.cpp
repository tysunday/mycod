#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int arrSize = 0;
	int arrMatrix[100][100];

	cout << "Заполнение квадратной матрицы" << "\n";
	cout << "Укажите размер матрицы (не больше 10)" << "\n";
	cin >> arrSize;
	int x = 0, /* переменная для главной диагонали */ y = 0; // переменная для накопления 
	


	for (int r = 0; r < arrSize; r++)
	{
		for (int k = 0; k < arrSize; k++)
		{
			arrMatrix[r][k] = (int)abs(r - k);
		}
	}

	for (int i = 0; i < arrSize; i++)
	{
		for (int j = 0; j < arrSize; j++)
		{
			cout << arrMatrix[i][j];
		}
		cout << "\n";
	}
}
