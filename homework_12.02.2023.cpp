	
// 
// Задание 1. Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу :
// пользователь вводит число(например, 3) первый элемент массива принимает значение этого числа,
// последующий элемент массива принимает значение этого числа умноженного на 2 (т.е. 6 для нашего примера),
// третий элемент массива предыдущий элемент умноженный на
// 2 (т.е. 6 * 2 = 12 для нашего примера).Созданный массив вывести на экран.
// 
//		Задание 2. Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу :
// пользователь вводит число(например, 3) первый элемент массива принимает значение этого числа,
// последующий элемент массива принимает значение этого числа + 1 (т.е. 4 для нашего примера),
// третий элемент массива предыдущий элемент + 1 (т.е. 5 для нашего примера).Созданный массив вывести на экран.


#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int column = 5;
	const int row = 5;
	int number = 0;

	int arr[row][column];
	
	cin >> number;
	cout << endl;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = number;
			cout << arr[i][j] << " ";
			number *= 2;
		}
		cout << endl;
	}

	cout << endl;

	number = 0;
	cout << "Введите первое число в массиве и посмотрите что будет: " << endl;
	cin >> number;

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			arr[i][j] = number;
			cout << arr[i][j] << " ";
			number += 1;
		}
		cout << endl;
	}



}


