#include <iostream>
#include <cmath>
using namespace std;

int Sum(int i, int A[], int n)
{
	if (i == n - 1)
		return A[i];
	else
		return A[i] + Sum(i + 1, A, n);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int A[] = { 5, 7, 2, -1 };
	int n = 4;
	int sum;
	sum = Sum(0, A, n);

	cout << sum;
}
