#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int sizeArr = 0;
	int arrStar[15][15];

	cout << "Программа нарисуй звездочку версия 2.0" << endl;
	cout << "Введите нечетное число, не больше 15" << endl;

	cin >> sizeArr;

	for (int i = 0; i < sizeArr; i++)
	{
		for (int j = 0; j < sizeArr; j++)
		{
			if (i == j || i == sizeArr - 1 - j || i == sizeArr / 2 || j == sizeArr / 2) arrStar[i][j] = 1;
			else arrStar[i][j] = 0;
			cout << arrStar[i][j];
		}
		cout << "\n";
	}

	for (int r = 0; r < sizeArr; r++)
	{
		for (int k = 0; k < sizeArr; k++)
		{
			if (arrStar[r][k] == 0) cout << "." << " ";
			else cout << "*" << " ";
		}
		cout << "\n";
	}
}
