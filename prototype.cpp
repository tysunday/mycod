#include <iostream>
using namespace std;

void Hello();

int main()
{
	setlocale(LC_ALL, "Russian");
	const int sizeA = 5;
	int arraryTest[sizeA];

	Hello();
}

void Hello()
{
	cout << "Hello";
}