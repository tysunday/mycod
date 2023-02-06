//Написать программу, копирующую последовательно элементы
//одного массива размером 10 элементов в 2 массива размером
//5 элементов каждый.Элементы первоначального массива можно
//сгенерировать в произвольном диапазоне.
#include <iostream>
using namespace std;
const int N = 10;
const int X = 5;
const int Y = 5;

int main()
{
    setlocale(0, "");
    srand(time(NULL));
    int* arrayN = new int[N];
    int* arrayX = new int[X];
    int* arrayY = new int[Y];
    int y = 0, x = 0;

    for (int i = 0; i < N; i++)
    {
        arrayN[i] = rand();
        cout << arrayN[i] << endl << endl;
    }
    for (int q = 0; q < 10; q++)
    {
        if (q < 5)
        {
            arrayX[x] = arrayN[q];
            cout << arrayX[x] << " элемент первой половины" << endl;
        }
        else if (q >= 5)
        {
            arrayY[y] = arrayN[q];
            cout << arrayY[y] << " элемент второй половины" << endl;
        }
    }
    
    
   
}

