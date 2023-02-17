#include <iostream>
#include <cmath>
using namespace std;
int abc(int x) {
	cout << "function 1 " << "\n";
	return x > 0 ? x : -x; // тернарный оператор
}

double abc(double x) {
	cout << "function 2 " << "\n";
	return x > 0 ? x : -x; // тернарный оператор
}

double abc(double x, double y) {
	cout << "function 3 " << "\n";
	return sqrt(x * x + y * y); // тернарный оператор
}


int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));


	cout << abc(-3) << "\n";
	cout << abc(2.5) << "\n";
	cout << abc(3, 2) << "\n";

}