//3. Даны два массива : А[n] и B[m].Необходимо создать
//третий массив, в котором нужно собрать :
//■ Элементы обоих массивов;
//■ Общие элементы двух массивов;
//■ Элементы массива A, которые не включаются в B;
//■ Элементы массива B, которые не включаются в A;
//■ Элементы массивов A и B, которые не являются общими для них(то есть объединение результатов двух
//	предыдущих вариантов).

#include <iostream>
#include <time.h>
using namespace std;

int CreateMassive(int* array, int size);
int MassiveFull(int* arrayFull, int size2, int* arrayOne, int* arrayTwo);
int СommonElements(int* arrayCommon, int* arrayOne, int* arrayTwo, int size, int sizeCommon);
int CoutMassive(int* array, int size);
int FirstNoTwoMassive(int* arrayOne, int* arrayTwo, int size);
int TwoNoFirstMassive(int* arrayOne, int* arrayTwo, int size);

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int size = 5, sizeCommon = 0;
	
	int* arrayOne = new int[size];
	int* arrayTwo = new int[size];
	int* arrayFull = new int[size * 2];
	int* arrayCommon = new int[sizeCommon];

	CreateMassive(arrayOne, size);
	cout << "1 массив " << endl << endl;
	CreateMassive(arrayTwo, size);
	cout << "2 массив " << endl << endl;
	MassiveFull(arrayFull, size, arrayOne, arrayTwo);
	СommonElements(arrayCommon, arrayOne, arrayTwo, size, sizeCommon);
	FirstNoTwoMassive(arrayOne, arrayTwo, size); // функция нахождения элементов из 1-го массива не входящих во 2-ой 
	TwoNoFirstMassive(arrayOne, arrayTwo, size); // это идеал, и наоборот из 2-го в 1-ый аналогично идеал.

}

int CreateMassive(int *array, int size) // заполнение массива рандомными числами от 1 до 9
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 1 + rand() % 9;
		cout << array[i] << " ";
		if ((i + 1) % 25 == 0 && i != 0)
			cout << "\n";
	}
	cout << endl;
	return 0;
}

int MassiveFull(int* arrayFull, int size, int* arrayOne, int* arrayTwo) // создание одного массива вмещающего два массива поменьше
{
	for (int i = 0; i < size * 2; i++)
	{
		if (i < size)
			arrayFull[i] = arrayOne[i];
		else
			arrayFull[i] = arrayTwo[i - (size)];
		cout << arrayFull[i] << " ";
	}
	cout << endl;
	cout << "Массив сочетающий в себе все элементы " << endl;
	return 0;
}

int СommonElements(int* arrayCommon, int* arrayOne, int* arrayTwo, int size, int sizeCommon) // массив с одинаковыми элементами
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arrayOne[i] == arrayTwo[j])
			{
				arrayCommon[sizeCommon] = arrayOne[i];
				cout << arrayCommon[sizeCommon] << " ";
				sizeCommon++;
				break;
			}
		}
	}
	cout << endl;
	if (sizeCommon > 0)
		cout << "Кол-во найденных одинаковых элементов = " << sizeCommon << endl;
	else cout << "Одинаковых элементов нет." << endl;
	return 0;
} // Нахождение одинаковых элементов корявое, он находит всё верно, но повторяется. Это меня напрягает.

int CoutMassive(int* array, int size) // вывод желаемого нами массива
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	return 0;
}

int FirstNoTwoMassive(int* arrayOne, int* arrayTwo, int size)
{
	int sizeThird = 0;
	int* arrayThird = new int[sizeThird];
	bool flag;
	
	for (int i = 0; i < size; i++)
	{
		flag = false;
		for (int j = 0; j < size; j++)
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
			cout << "Число из первого массива не входящее во второй: " << arrayThird[sizeThird] << endl;
			sizeThird++;
		}
	}
	return 0;
} 

int TwoNoFirstMassive(int* arrayOne, int* arrayTwo, int size)
{
	int sizeThird = 0;
	int* arrayThird = new int[sizeThird];
	bool flag;

	for (int i = 0; i < size; i++)
	{
		flag = false;
		for (int j = 0; j < size; j++)
		{
			if (arrayOne[j] == arrayTwo[i])
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			for (int l = 0; l < sizeThird; l++)
			{
				if (arrayTwo[i] == arrayThird[l])
				{
					flag = true;
					break;
				}
			}
		}
		if (flag == false)
		{
			arrayThird[sizeThird] = arrayTwo[i];
			cout << "Число из второго массива не входящее в первый: " << arrayThird[sizeThird] << endl;
			sizeThird++;
		}
	}
	return 0;
}