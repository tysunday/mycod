#include <iostream>
#include <time.h>
#include <algorithm>
using namespace std;

inline int BinarySearch(int left, int right, int mid, int array[], int number, bool have, int size)
{


	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;
		cout << array[i] << " ";
		if ((i + 1) % (size / 2) == 0)
		{
			cout << endl;
		}
	} 
	cout << endl << endl;

	sort(array, array + size);

	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
		if ((i + 1) % (size / 2) == 0)
		{
			cout << endl;
		}
	}

	cout << endl;
	cout << endl;


	while ((left <= right) && (have != 1))
	{
		mid = (left + right) / 2;
		if (array[mid] == number) have = 1;
		if (array[mid] > number) right = mid - 1;
		else left = mid + 1;
		cout << mid << endl;
	}

		if (have == 1) cout << "Индекс элемента " << number << " равен " << mid + 1;
		else cout << "такого элемента нет" << endl;

	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));


	bool have = 0;
	int size = 0, key = 0, number = 0;

	cout << "Введите размер массива " << "\n";
	cin >> size;
	cout << "Ключ какого числа в массиве вы хотите найти? " << "\n";
	cin >> number;

	int left = 0, right = size, mid = 0;

	int* array = new int[size];

int res = BinarySearch(left, right, mid, array, number, false, size);
}