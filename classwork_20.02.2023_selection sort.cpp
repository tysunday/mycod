#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	const int n = 10;
	int B[n] = { 87,45,30,85,61,40,45,39,84,45 };
	int index_min;
	int temp;
	int cb = 0;
	for (int i = 0; i < n - 1; i++)
	{
		index_min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (B[j] < B[index_min])
			{
				index_min = j;
			}
		}
		if (index_min != i)
		{
			temp = B[i];
			B[i] = B[index_min];
			B[index_min] = temp;
			cb++;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << B[i] << " ";
	}

	cout << endl;
	cout << "Count " << cb << endl;
}

