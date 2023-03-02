//Задание 2. Написать функцию, которая удаляет из строки
//все вхождения в нее заданного символа.
//Задание 3. Написать функцию, которая вставляет в строку
//в указанную позицию заданный символ.

#include <iostream>
#include <string>
#include <windows.h> // для вывода ввода в консоль русских символов

using namespace std;

int replaceAllSymbol(string sentence);
int inputSomeSymbol(string sentence);
int ReplacePointerToExclamation(string sentence);

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string sentence = "";
	

	replaceAllSymbol(sentence);
	inputSomeSymbol(sentence);
	ReplacePointerToExclamation(sentence);
}

int replaceAllSymbol(string sentence)
{
	char symbol = '0';
	cout << "input sentence: \n";
	getline(cin, sentence);
	cout << sentence << " \n";

	cout << "what is symbol you wanna replace? \n";
	cin >> symbol;

	cout << endl;
	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == symbol)
		{
			sentence[i] = 0;
		}
		cout << sentence[i];
	}
	cout << endl;
	return 0;
}

int inputSomeSymbol(string sentence)
{
	char symbol = '0';
	int position = 0;

	cout << "input sentence: \n";
	getline(cin, sentence);
	cout << sentence << " \n";

	cout << "enter at which position you want to paste: \n";
	cin >> position;
	cout << "enter the symbol you want to insert: \n";
	cin >> symbol;

	sentence[position] = symbol;

	cout << sentence << "\n";
	return 0;
}

int ReplacePointerToExclamation(string sentence)
{
	cout << "input sentence: \n";
	getline(cin, sentence);
	cout << sentence << " \n";

	for (int i = 0; i < sentence.length(); i++)
	{
		if (sentence[i] == 46)
		{
			sentence[i] = 33;
		}
		cout << sentence[i];
	}
	return 0;
}
