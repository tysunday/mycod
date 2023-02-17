
#include <iostream>
#include <cmath>
using namespace std;

inline float module(float x = 0, float y = 0) {
	// inline используется при многократном использовании функции.
	// Т.е. для запоминания её в оперативной памяти и не возвращаться ранее к ней при повторном вызове.
	return sqrt(x * x + y * y);
}
#define LOL(X) X* X; /* - макрос для чего-то маленького */

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	float result = module(3, 2);

	int y = 5;
	int res = LOL(y);

	cout << result << "\n";
	cout << res << "\n";
}
