#pragma once
#include <iostream>
#include <windows.h>
#include <time.h>
#include <cmath>
using namespace std;
void writeArray(int arr[], int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		arr[i] = 1 + rand() % 8;
		cout << arr[i] << endl << endl;
	}
}
