#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>
#include <windows.h>
#include <cstdio>

using namespace std;


struct Test {
	unsigned int Python: 15;
	unsigned int JS: 2;
	unsigned int PHP: 2;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	FILE* myFile;
	myFile = fopen("Текст.txt", "a");
	if (myFile == NULL)
		cout << "Ошибка при открытии файла";
	else
		cout << "Файл открыт";
	
	char text[40];
	cin.get(text, 50);

	fputs(text, myFile);
	fclose(myFile);
	
	cout << myFile;

}