
#include <iostream>
#include <iomanip> // для функции setw которая ограничивает кол-во введёных символов и не даёт выйти за пределы массива.
#include <time.h>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int findStr = 0;
	//string fullName, nickName, address;
	//string greeting("Здравствуйте, ");
	//cout << "Введите ваше имя: " << "\n";

	//getline(cin, fullName);

	string s1 = "В лесу родилась елочка";
	findStr = s1.find("елочка"); // поиск по всему массиву ( ищет целую строку(слово) )
	cout << "Елочка найдена " << findStr << endl;
	findStr = s1.find_first_of("умка"); // поиск по первому вхождению ( по символам )
	cout << "Елочка найдена " << findStr << endl;
	findStr = s1.find_first_not_of("абАБВ"); // поиск по последующим вхождениям подстроки
	cout << "Елочка найдена " << findStr << endl; 

	//cout << greeting + fullName;















	/*const int DAYS = 7;
	const int max = 12;

	string str3 = "Копоть";
	string str4 = ("Уголь");

	cout << "Шашлык " + str3 + " " + str4 + " Горячие" << endl;
	cout << str4 << endl;


	char days[DAYS][max] =
	{
		"Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье"
	};

	for (int i = 0; i < DAYS; i++)
	{
		for (int j = 0; j < max; j++)
		{
			cout << days[i][j];
		}
		cout << " ";
	}*/












	//const int maxSize = 80;
	//char str[] = "Я памятник себе воздвиг нерукотворный ";

	//char str2[80];


	//strcpy_s(str2, str); // функция для копирования строк

	////for (int i = 0; i <= strlen(str); i++) // цикл для копирования строк
	////{
	////	str2[i] = str[i];
	////}

	//cout << str2 << endl;




	//char str[maxSize];

	//cout << "Введите строку: " << "\n";
	//cin.get(str, maxSize, '$'); // при вводе значка доллара он завершает ввод.
	//cout << "Вы ввели : " << str;



}

