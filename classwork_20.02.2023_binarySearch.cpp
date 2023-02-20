#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int size = 0, left = 0, right = 0, mid = 0, have = 0, number = 0;
	cout << "Введите размер массива: " << "\n";
	cin >> size;
	right = size;
	cout << "Ключ какого числа в массиве вы хотите найти? " << "\n";
	cin >> number;
	int* array = new int[size];
	

	for (int i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 15;
		cout << array[i] << " ";
	}
	cout << "\n\n";

	sort(array, array + size);
	
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

 