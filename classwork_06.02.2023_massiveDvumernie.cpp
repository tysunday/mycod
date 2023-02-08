#include <iostream>
using namespace std;

int main()
{
	setlocale(0, "");
	const int column = 2; // переменные отвечающие за колонки и строки в двумерном массиве.
	const int row = 2; /*и строки в двумерном массиве.*/

	int arr[column][row] = { { 2, 3 }, {4, 7} };

	for (int i = 0; i < column; i++)
	{
		for (int j = 0; j < row; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}


