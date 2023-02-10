#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	const int N = 100, K = 100; 
	//выделяемые для памяти значения

	int arraySize[N][K];
	int n = 0, k = 0;
	cout << "Введите кол-во строк в массиве "; 
	cin >> n;
	cout << "Введите кол-во столбцов в массиве "; 
	cin >> k;
	 //кол-во строк и столбцов

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			arraySize[i][j] = 1 + rand() % 9;
			cout << arraySize[i][j] << " ";

		}	
		cout << "\n";
	}

	cout << endl;

	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arraySize[j][i] << " ";
		}
		cout << "\n";
	}


}

