//Задание 1. Даны два массива : А[M] и B[N](M и N вводятся
//	с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
//	элементы массива A, которые не включаются в массив B,
//	без повторений.
//	Задание 2. Даны два массива : А[M] и B[N](M и N вводятся
//		с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать
//	элементы массивов A и B, которые не являются общими
//	для них, без повторений.

#include <iostream>
#include <time.h>
using namespace std;

int FillArray(int* array, int size);
void CoutArray(int* array, int size);
int ElementsFirstArrayNotIncludedToSecondArray
(int* arrayOne, int* arrayTwo, int sizeOne, int sizeTwo, int* arrayThird, int sizeThird);

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int sizeA = 0, sizeB = 0, sizeC = 0, sizeD = 0, sizeF = 0;
	int sizeThirdC = 0, sizeThirdD = 0;
	bool flag;

	cout << "Введите размерность первого массива: \n";
	cin >> sizeA;
	cout << "Введите размерность второго массива: \n";
	cin >> sizeB;
	int* arrayA = new int[sizeA];
	int* arrayB = new int[sizeB];
	int* arrayC = new int[sizeC];
	int* arrayD = new int(sizeD);
	int* arrayF = new int(sizeF);
	FillArray(arrayA, sizeA);
	FillArray(arrayB, sizeB);
	CoutArray(arrayA, sizeA);
	CoutArray(arrayB, sizeB);
	
	sizeThirdC = ElementsFirstArrayNotIncludedToSecondArray
	(arrayA, arrayB, sizeA, sizeB, arrayC, sizeC);
	sizeThirdD = ElementsFirstArrayNotIncludedToSecondArray
	(arrayB, arrayA, sizeB, sizeA, arrayD, sizeD);


	cout << sizeThirdC << " sizeC\n";
	cout << sizeThirdD << " sizeD\n"; 

	for (int i = 0; i < sizeThirdC; i++)
	{
		arrayF[i] = arrayC[i];
		++sizeF;
	}
	for (int j = 0; j < sizeThirdD; j++)
	{
		arrayF[j + sizeThirdC] = arrayD[j];
		++sizeF;
	}
	cout << "Числа не состоящие в массивах друг-друга: ";
	for (int i = 0; i < sizeF; i++)
	{
		cout << arrayF[i] << " ";
		
	}
	cout << endl;
	cout << "Кол-во найденных элементов не состоящих в массивах друг друга: " << sizeF;
}

int FillArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 10;
	}
	cout << "\n";
	return 0;
}

void CoutArray(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << "\n";
}

int ElementsFirstArrayNotIncludedToSecondArray
(int* arrayOne, int* arrayTwo, int sizeOne, int sizeTwo, int* arrayThird, int sizeThird)
{
	bool flag;
	for (int i = 0; i < sizeOne; i++)
	{
		flag = false;
		for (int j = 0; j < sizeTwo; j++)
		{
			if (arrayOne[i] == arrayTwo[j])
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			for (int l = 0; l < sizeThird; l++)
			{
				if (arrayOne[i] == arrayThird[l])
				{
					flag = true;
					break;
				}
			}
		}
		if (flag == false)
		{
			arrayThird[sizeThird] = arrayOne[i];
			cout << "Число не входящее в противоположный массив: " << arrayThird[sizeThird] << endl;
			sizeThird++;
		}
	}
	return sizeThird;
}