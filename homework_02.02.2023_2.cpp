//Пользователь вводит прибыль фирмы за год(12 месяцев).
//Затем пользователь вводит диапазон(например, 3 и 6 — поиск
//    между 3 - м и 6 - м месяцем).Необходимо определить месяц,
//    в котором прибыль была максимальна и месяц, в котором
//    прибыль была минимальна с учетом выбранного диапазона.
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
const int X = 12;

int main()
{
	setlocale(LC_ALL, "Russian");
	int profitYear = 0, profitMouth[X] = { 561330, 304320, 522510, 727140, 424740, 85980, 368070, 886740, 206430, 929100, 263700, 685350 };
	int profitMin = 0, profitMax = 0;
	int rangeMin = 0, rangeMax = 0;
		int i = 0; // счётчик
	cout << "Введите последовательно 2 месяца в диапазоне которых будет поиск минимальной и максимальной прибыли " << endl;

	cin >> rangeMin;
	cin >> rangeMax;

	if (rangeMin == rangeMax || rangeMin > rangeMax)
	{
		cout << "Введите сначала минимальное значение, потом максимальное. Так же значения не должны быть равны друг-другу. " << endl;
		cin >> rangeMin;
		cin >> rangeMax;
	}


	profitMin = min(profitMouth[rangeMin], profitMouth[rangeMax]);
	cout << profitMin << endl;

	profitMax = max(profitMouth[rangeMin], profitMouth[rangeMax]);
	cout << profitMax << endl;

}

