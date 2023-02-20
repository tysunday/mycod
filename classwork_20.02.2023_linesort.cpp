#include <iostream>
using namespace std;

int LinearSearch(int array[], int size, int key) {
	for (int i = 0; i < size; i++)
		if (array[i] == key)
			return i;
	return -1;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int arraySize = 10;
	int a[arraySize], searchKey, element;
	for (int x = 0; x < arraySize; x++)
	{
		a[x] = 1 + rand() % 10;
	}

	for (int x = 0; x < arraySize; x++)
	{
		cout << a[x] << " ";
	}

		cout << "Пожалуйста введите число для поиска: ";
		cin >> searchKey;
		element = LinearSearch(a, arraySize, searchKey);
		if (element != -1)
		{
			cout << "Элемент найден:" << element << "\n";
		}
		else {
			cout << "\n Значение не найдено";
		}
		return 0;
	
}

