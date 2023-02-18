#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int size = 0, key = 0, number = 0;
	bool have = 0;
	cout << "Введите размер массива " << "\n";
	cin >> size;

	int* array = new int[size];

	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
		cout << array[i] << " ";
		if (i == 9)
		{
			cout << endl;
		}
	}
	cout << endl;
	cout << "Ключ какого числа в массиве вы хотите найти? " << "\n";
	cin >> number;

	for (int i = 0; i < size; i++)
	{
		if (array[i] == number)
		{
			cout << "Ключ находится в ячейке: " << i + 1 << "\n";
			have = 1;
		}
		else if (have == 0 && i + 1 == size)
		{
			cout << "ключа нету";
		}
	}
}