#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int N = 12;
	int B = 12;
	float percentOfYear = 12.5;
	int rateDollarToEuro = 0;

	int *sumUser = new int[B]; // объявляем динамический массив. звёздочка (*) - это указатель.
	// этот массив представляет из себя отношение курса от доллара к евро.

	cin >> sumUser[];

	for (int i = 1; i <= N; i++)
	{
		rateDollarToEuro = 60 + rand() % 20;
		cout << rateDollarToEuro << endl;
		sumUser[i] = rateDollarToEuro * sumUser[i] / percentOfYear;
		cout <<"Сумма за " << i << "месяц = " << sumUser[i] << endl;

	}


}

