//
//Задание 1. Используя два указателя на массив целых
//чисел, скопировать один массив в другой.Использовать
//в программе арифметику указателей для продвижения
//по массиву, а также оператор разыменования.
//Задание 2. Используя указатель на массив целых чисел,
//изменить порядок следования элементов массива на
//противоположный.
//Использовать в программе арифметику указателей
//для продвижения по массиву, а также оператор разыменования.
#include <iostream>
#include <time.h>
using namespace std;
int FillMassive(int* array, int size);

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	
	int sizeA = 0, sizeB = 0;
	int* pointer = NULL;
	cout << "Введите размер первого массива: " << " \n";
	cin >> sizeA;

	int *arrayA = new int[sizeA];
	int* arrayB = new int[sizeB];

	FillMassive(arrayA, sizeA);

	for (int i = sizeA - 1; i >= 0; --i, ++sizeB)
	{
		pointer = &arrayA[i];
		arrayB[i] = *pointer; // бредовое задание, зачем тут указатель вообще.
		cout << arrayB[i] << " ";
	}
	cout << " razmer" << sizeB;

}


int FillMassive(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 9;
		cout << array[i] << " ";
	}
	cout << endl;
	return 0;
}