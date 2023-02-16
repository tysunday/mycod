	//Задание 3. Число называется совершенным, если сумма
	//всех его делителей равна ему самому.Напишите функцию
	//поиска таких чисел во введенном интервале

	#include <iostream>
	#include <cmath>
	using namespace std;
	void PerfectNumbers(int number, int sum, int numeric) {
		number = numeric; 
		// мне нужно сохранить значение date для дальнейшего сравнения с ним как с исходным числом.
		if (number != 0 && number > 0 && number != 1)
		{
			while (number != 1)
			{
				number = number / 2;
				cout << "sum = " << sum << endl;
				{ 
					if (number % 2 == 1 && number >= 3)
					{
						number += 1;
						sum = sum + number;
					}
					else if (number % 2 == 0)
					{
						sum = sum + number;
					}
				}
			}
			if (numeric == sum) {
				cout << numeric << endl;
				cout << "congratulations" << endl;
			}
			else if (numeric != sum) {
				cout << "this number not perfect =( " << endl;;
			}
		}
	}

	int main()
	{
		setlocale(LC_ALL, "Russian");
		int x = 0;
		cin >> x;
		PerfectNumbers(0, 0, x);
		// EXAMPLE perfectNumbers for examination (take from wikipedia)
		/*
		6,
		28,
		496,
		8128,
		33 550 336,
		8 589 869 056,
		137 438 691 328,
		2 305 843 008 139 952 128,
		2 658 455 991 569 831 744 654 692 615 953 842 176,
		191 561 942 608 236 107 294 793 378 084 303 638 130 997 321 548 169 216,*/
	}

