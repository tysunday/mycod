// Даны  два действительных числа х и у. Проверьте принадлежит ли точка с координатами (х, у) заштрихованному квадрату 
// (включая его границу). Если точка принадлежит квадрату, введите слово YES, иначе  выведите слово NO.

#include <iostream>
#include <cmath>
using namespace std;

float Belong(double x, double y)
{
	float result = (abs(x + y));
	return result;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	double x = 0, y = 0;
	cout << "Введите значения: " << endl;
	cin >> x >> y;

	float sum = Belong(x, y);
	cout << sum << endl;

	if (sum <= 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

}
