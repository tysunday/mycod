//2. Даны два массива, упорядоченных по возрастанию :
//А[n] и B[m].Сформируйте массив C[n + m], состоящий из элементов массивов А и В, упорядоченный
//по возрастанию.Используйте синтаксис указателей.

#include <iostream>
#include <time.h>
#include <algorithm>

using namespace std;
const int rows = 5;
const int columns = 5;
int CreateArray(int** array); // prototype function
int CoutArray(int** array);
int SortArray(int** array);
int CreateArrayThird(int** array);
int CoutArrayThird(int** array);
int SumMassiveOneTwoOnThird(int** arrayFirst, int** arraySecond, int** arrayThird);
int SortArrayThird(int** arrayThird);

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	int** arrayFirst = new int* [rows];
	int** arraySecond = new int* [rows];
	int** arrayThird = new int* [10];

	CreateArray(arrayFirst);
	CreateArray(arraySecond);
	CreateArrayThird(arrayThird);

	CoutArray(arrayFirst);
	CoutArray(arraySecond);
	CoutArrayThird(arrayThird);

	SortArray(arrayFirst);
	SortArray(arraySecond);

	CoutArray(arrayFirst);
	CoutArray(arraySecond);
	SumMassiveOneTwoOnThird(arrayFirst, arraySecond, arrayThird);
	CoutArrayThird(arrayThird);
	SortArrayThird(arrayThird);
	CoutArrayThird(arrayThird);



}

int CreateArray(int** array) // наполним массив данными
{

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[columns];
	}
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			array[i][j] = 10 + rand() % 25;
		}
	}
	return 0;
}
int CreateArrayThird(int** array) // наполним массив данными
{

	for (int i = 0; i < rows; i++)
	{
		array[i] = new int[columns * 2];
	}
	return 0;
}
int CoutArray(int** array)  // выведем массив на экран
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
	return 0;
}
int CoutArrayThird(int** array)  // выведем массив на экран
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns * 2; j++)
		{
			cout << array[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
	return 0;
}
int SortArray(int** array) // отсортируем массив
{
	int temp = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (array[i][j] < array[i][j - 1])
			{
				temp = array[i][j];
				array[i][j] = array[i][j - 1];
				array[i][j - 1] = temp;
				j -= 2;
			}
		}
	}
	return 0;
}
int SumMassiveOneTwoOnThird(int** arrayFirst, int** arraySecond, int** arrayThird)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			arrayThird[i][j] = arrayFirst[i][j];
			arrayThird[i][j + columns] = arraySecond[i][j];
		}
	}
	return 0;
}
int SortArrayThird(int** array) // отсортируем массив
{
	int temp = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns * 2; j++)
		{
			if (array[i][j] < array[i][j - 1])
			{
				temp = array[i][j];
				array[i][j] = array[i][j - 1];
				array[i][j - 1] = temp;
				j -= 2;
			}
		}
	}
	return 0;
}
// здесь много функций потому что я так захотел
// так можно было бы в одну функцию прописать для первых двух и во вторую функцию для третьей
