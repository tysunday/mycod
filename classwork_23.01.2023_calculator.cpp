#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x = 0, y = 0;
float b = 0;
	int idDo = 0;

	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;
	cout << 
		R"(Введите арифметическое действие
			1 - сложение
			2 - вычитание
			3 - умножение
			4 - деление)" 
		<< endl;
	cin >> idDo;

	switch (idDo) 
	{
	case 1:	
		b = x + y;
		cout << b << endl;
		break;
	case 2:
		b = x - y;
		cout << b << endl;
		break;
	case 3:	
		b = x * y;
		cout << b << endl;	
		break;
	case 4:
		b = x / y;
		cout << b << endl;
		break;
	}
}
	
	


