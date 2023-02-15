
#include <iostream>
using namespace std;

void loadArr(int arr[], int sizeArr) {
	for (int i = 0; i < sizeArr; i++) {
		arr[i] = 1 + rand() % 8;
	}
}

void printArr(int arr[], int sizeArr) {
	for (int i = 0; i < sizeArr; i++) {
		cout << arr[i];
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	const int sizeA = 5;
	int arraryTest[sizeA];

	loadArr(arraryTest, sizeA);
	printArr(arraryTest, sizeA);
	cout << endl;

	for (int j = 0; j < sizeA; j++)
	{
		cout << arraryTest[j];
	}
}
//int Sqrt(int integer, int sqr) {
//	int result = pow(integer, sqr);
//
//	return result;
//}
	//int res = Sqrt(2, 6);
	//cout << res;