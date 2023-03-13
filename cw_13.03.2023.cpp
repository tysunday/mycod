// cw_13.03.2023.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Header.h"
#define PI 3.14159265
#define SQUARE(x) ((x) * (x))
#define FOREVER for(int i = 0; i < 50; i++)
#define size 5
#define POWER_4(x) pow(x, 4)
#define SIGN(x) if (x > 0) cout << "+"; else cout << "-";

int main()
{
	setlocale(LC_ALL, "Russian");
	double x = 9;

	SQUARE(x);
	cout << SQUARE(x) << endl;

	x = PI * 9;
	cout << x << endl;

	FOREVER
	{
		cout << i << endl;
	}



	int arrayTest[size];
	FOREVER{
	writeArray(arrayTest, size);
	}

	cout << POWER_4(x) << endl;


}

