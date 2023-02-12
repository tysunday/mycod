// two-dimensional_dynamic_array.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int size = 0;
	cout << "enter array size" << endl;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	for (int i = 0; i <=  size; i++)
	{
		cout << arr[i] << "\t";

		cout << arr + i << endl; // здесь будут выводиться адреса оперативной памяти
	}
	delete [] arr;
}

