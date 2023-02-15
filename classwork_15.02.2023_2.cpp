#include <iostream>
#include <cmath>
using namespace std;

void loadArrAndMin(int arr[], int sizeArr, int min) {
	for (int i = 0; i < sizeArr; i++)
	{
		arr[i] = 1 + rand() % 8;
		cout << arr[i] << " ";
	}
	
	cout << endl;
	for (int j = 0; j < sizeArr; j++)
	{
		if (min > arr[j])
			min = arr[j];
		cout << min << endl;
	}
}




int main()
{
	
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int size = 5;
	int masif[size];
	int min = 9;

	loadArrAndMin(masif, size, min);
}

