// Найти среднее арифметическое всех целых чисел от 1 до 1000.

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    int number = 1, sumNumber = 0;
    
    for (number; number <= 1000; number++)
    {
        sumNumber = sumNumber + number;
        cout << sumNumber << "\n";
        // строчкой выше cout выводит на экране весь процесс суммирования чисел от 1 до 1000.
    }

    cout << sumNumber / 1000; 
    // этот cout выводит необходимый нам результат т.е. среднее арифметическое суммы от 1 до 1000.
}

