#include <iostream>
#include <cmath>
using namespace std;

int Multiplay(int number, int n)
{
	if (number == n)
		return number;
	else
		n = number - n;
	return number * Multiplay(n + 1, number);
}


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << "Введите желаемое число ";


	int n = 0, number = 0;
	cin >> number;

	int multiplay;
	multiplay = Multiplay(n, number);

	cout << multiplay;
}

