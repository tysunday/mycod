#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	
	int index_min = 0, temp = 0, arrStart = 0, arrEnd = 0, mid = 0;
	const int arrSize = 15;
	int arr[arrSize];
	arrEnd = arrSize;
	for (int i = 0; i < arrSize; i++)
	{
		arr[i] = 1 + rand() % 15;
	}


	for (int i = 0; i < arrSize - 1; i++)
	{
		index_min = i;
		for (int j = i + 1; j < arrSize; j++)
		{
			if (arr[j] < arr[index_min])
			{
				index_min = j;
			}		
		}
		if (index_min != i) {
			temp = arr[i];
			arr[i] = arr[index_min];
			arr[index_min] = temp;
		}
	}

	for (int i = 0; i < arrSize; i++)
	{
		cout << arr[i] << "\n";
	}

	int searchElem = 0;
	int notSearch = -1;
	cout << "Введите искомый элемент: " << endl;
	cin >> searchElem;

	while (arrStart <= arrEnd);
	{
		mid = (arrStart + arrEnd) / 2;
		if (searchElem == arr[mid]) 
		{
			cout << "Элемент найден. ";
			return 0;
		}
		if (searchElem < arr[mid]) arrEnd = mid - 1;
		else arrStart = mid + 1;
	}
}

