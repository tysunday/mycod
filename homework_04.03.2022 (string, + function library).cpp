//Задание 1. Дополните свою библиотеку функций реализациями нижеследующих функций :
//■ int mystrcmp(const char* str1, const char* str2); —
//функция сравнивает две строки, и, если строки равны
//возвращает 0, если первая строка больше второй, то
//возвращает 1, иначе –1.
//■ int StringToNumber(char* str); — функция конвертирует строку в число и возвращает это число.
//■ char* NumberToString(int number); — функция конвертирует число в строку и возвращает указатель на
//эту строку.
//■ char* Uppercase(char* str1); — функция преобразует
//строку в верхний регистр.
//■ char* Lowercase(char* str1); — функция преобразует
//строку в нижний регистр.
//■ char* mystrrev(char* str); — функция реверсирует
//строку и возвращает указатель на новую строку.
#include <iostream>

using namespace std;

int mystrcmp(const char* str1, const char* str2);
int StringToNumber(const char* str);

int main() {
    const char* str1 = "hello world";
    const char* str2 = "hello world";
    const char* str = "hello";
    int result = mystrcmp(str1, str2);
    cout << "Comparison result: " << result << endl;
   int result2 = StringToNumber(str);
   cout << "StringToNumber = " << result2 << endl;
}

int mystrcmp(const char* str1, const char* str2) {
    while (*str1 && *str2 && *str1 == *str2) {
        str1++;
        str2++;
        if (str1 > str2)
            return 1;
        else if (str1 < str2)
            return -1;
        else
            return 0;
    }
}
int StringToNumber(const char* str)
{
    int strNumber = 0;
    for (int i = 0; str[i] != '\0'; i++) 
    {
        strNumber = strNumber + (int)str[i];
    }
    return strNumber;
}