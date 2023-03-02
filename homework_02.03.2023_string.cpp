//Задание 1. Написать функцию, которая удаляет из строки
//символ с заданным номером.

#include <iostream>
#include <string>
#include <windows.h> // для вывода ввода в консоль русских символов
#include <time.h>
#include <iomanip> // для функции setw которая ограничивает кол-во введёных символов и не даёт выйти за пределы массива.

void CinClear(); // функция очищения буфера Cin
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int numberLetter = 0, size = 50;
	string ch = "";
	string sentence = "";
	string Choose = "Да";

	cout << "Введите предложение: \n";
	getline(cin, sentence);

	while (Choose != "Нет" && Choose == "Да") {
		
		cout << sentence << endl;

		cout << " Какую по счёту букву вы хотите убрать? \n";
		cin >> numberLetter;

		while (numberLetter > sentence.length() || numberLetter <= 0)
		{
			cout << "Попробуйте ещё раз ваше число не подходит в диапозон количества букв в предложении \n";
			cin >> numberLetter;
		}

		CinClear();
		cout << " на что хотите заменить? \n";
		getline(cin, ch);

		string result = "";
		result = sentence.replace(sentence.find(sentence[numberLetter - 1]), 1, ch);
		cout << result << " \n";

		cout << "Хотите поменять ещё какие-то буквы ? \n Да? Нет? \n";
		cin >> Choose;
	}


}

void CinClear()
{
	if (char(cin.peek()) == '\n')
		cin.ignore();

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(32767, '\n');
	}
}