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
	//// Задание № 1 заменить пробелы на табуляцию 
	//string s1 = "В лесу родилась елочка, в лесу она росла.";
	//string result = "";
	//while (s1.find(" ", 0) != s1.npos) {
	//	result = s1.replace(s1.find(" "), 1, "\t");
	//}
	//cout << result;


	/*cout << "Посчитать кол-во букв цифр символов и пробелов. (СИМВОЛЫ ДЛЯ МЕНЯ ЭТО ТОЧКИ ЗАПЯТЫЕ)" << endl;;
	string s1 = "В лесу родилась елочка, в лесу она росла. 999000";
	int countSymbol = 0, countNumber = 0, countChar = 0,
		stringSize = s1.length(), space = 0;
	string result = "";

	for (size_t i = 0; i < stringSize; i++)
	{
		if (s1[i] == 32)
			space++;
		else if (48 <= s1[i] && s1[i] <= 57)
			countNumber++;
		else if (33 <= s1[i] && s1[i] <= 47 || 91 <= s1[i] && s1[i] <= 96)
			countSymbol++;
		else countChar++;

		cout << char(s1[i]);
	}


	cout << space << " пробелы \n";
	cout << countNumber << " цифры \n";
	cout << countSymbol << " символы \n";
	cout << countChar << " буквы \n";*/

	// задание 3 проверьте ваше предложение, палидром ли это?

	string sentence = " ";
	cout << "Введите предложение: ";
	getline (cin, sentence); // пишем getline для того чтобы выводилось предложение с пробелами, просто cin выведет первое слово и после пробела - ничего.
	//cout << sentence;
	string sentence2 = "";
	int stringSize = sentence.length();
	string sentenceWithoutSpace = sentence;

	for (size_t i = 0; i < stringSize; i++)
	{
		if (sentenceWithoutSpace[i] == 32)
			sentenceWithoutSpace[i] = 0;
		//cout << sentenceWithoutSpace[i];
	}

	int j = sentenceWithoutSpace.length();
	for (size_t i = 0; i < sentenceWithoutSpace.length(); i++)
	{
		if (sentenceWithoutSpace.length() % 2 == 0)
		{
			sentenceWithoutSpace[i] = sentence2[j];
			cout << sentence2;
		}
	}


}

