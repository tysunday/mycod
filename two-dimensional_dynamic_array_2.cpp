// two-dimensional_dynamic_array_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{

	int rows = 0;
	int cols = 0;
	cout << "enter rows counst" << endl;
	cin >> rows;
	cout << "enter colums count" << endl;
	cin >> cols;

	int** arr = new int* [rows]; // здесь массив указателей на массивы.
	for (int i = 0; i < rows; i++) // т.е. формирование указателей на подмассивы из основного массива.
	{
		arr[i] = new int[cols];

	}

	for (int i = 0; i < rows; i++) // цикл for для заполнения массива данными.
	{
		for (int j = 0; j < cols; j++)
		{
			arr[i][j] = rand() % 20;
		}
	}
	//////////////////////////////////////////////////

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	} // вывод информации.

	//////////////////////////////////////////////////

	for (int i = 0; i < rows; i++)
	{
		delete[] arr[i];
	} // чистим память сначала в подмассивах

	delete[] arr; // потом чистим память массива основного (с указателями на подмассивы)



}