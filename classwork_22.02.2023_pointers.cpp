#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	//int arrayPoint[10] = { 1,2,3,4,5,6,7,8,9, 10 };
	//int* number;

	//number = &arrayPoint[3];
	//cout << *number << endl;
	int num1 = 0, num2 = 0;
	num1 = 1 + rand() % 10;
	num2 = 1 + rand() % 10;
	int* pointer1, * pointer2;

	pointer1 = &num1;
	pointer2 = &num2;

	if (*pointer1 > *pointer2)
		cout << *pointer1 << " biggest than " << *pointer2;
	else if (*pointer1 < *pointer2) cout << *pointer2 << " biggest than " << *pointer1;
	else cout << "they equal " << *pointer1 <<  " " << *pointer2;

}

