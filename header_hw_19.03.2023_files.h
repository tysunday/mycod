#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <sstream>

using namespace std;

string path = "";  /*глобальная переменная являющаяся изменяемым путём для файлов через неё я пишу какие новые файлы создать а какие открыть*/
ofstream fout; // глобальная переменная для записи в файлы.
ifstream fin; // глобальная переменная для чтения данных с файлов.


//prototypes
void CheckOpenFile(); // проверка отрыт ли файл
void CreateFile(); // для создания/открытия файла (с затиранием данных)
void OpenFile(string path);  // если хотим открыть уже существующий файл и изменить информацию без затирания данных.
string WriteInFile(); // функция для записи информации в файл
void ReadingFile(); // функция для чтения данных в файлах
void DeleteSomeString(); // функция для удаления последней строки (пока что последней, далее введу удаление любой указанной строки)
void CopyFile(); // функция полностью копирует один файл в указанный пользователем файл
void SearchMaxString(); // ищет самую длинную строку, выводит её на консоль, выводит количество символов и номер этой строки
void SearchWord(); // ищет сколько раз встречается заданное пользователем слово
void ChangeWord(); // заменяет все вхождения заданного пользователем слова на новое слово.
void CheckOpenFile()
{
	fin.is_open();
	if (!fin.is_open())
		cout << "Файл не открыт. \n";
	else
		cout << "Файл успешно открыт\n";
}

string CreateFile(string path)
{
	cout << "Введите название файла для его создания\n";
	cin >> path;
	fout.open(path);
	CheckOpenFile();
	return path;
}

void OpenFile(string path)
{
	cout << "Введите название файла для его открытия:\n";
	cin >> path;
	fout.open(path, ofstream::app);
	CheckOpenFile();
}

string WriteInFile()
{
	cout << "Введите текст: \n";
	string sentence;
	getline(cin, sentence, '*'); // пишем в переменную
	fout << sentence; // с переменной передаём в текстовый файл
	return sentence;
	fout.close();
}

void ReadingFile()
{
	string read;
	cout << "Введите название файла для чтения:\n";
	cin >> read;
	string sentence = "";
	fin.open(read);
	if (!fin.is_open()) // проверка открылся ли файл! это важно!
		cout << "Файл не открылся!\n";
	else
		cout << "Файл открылся!\n";

	while (getline(fin, sentence))
	{
		cout << sentence << endl;
	}
	fin.close();
}

void CopyFile()
{
	string read;
	cout << "Введите название файла для чтения:\n";
	cin >> read;
	string sentence = "";
	fin.open(read);
	if (!fin.is_open()) // проверка открылся ли файл! это важно!
		cout << "Файл не открылся!\n";
	else
		cout << "Файл открылся!\n";

	cout << "Введите название файла для его открытия:\n";
	cin >> path;
	fout.open(path, ofstream::app);
	CheckOpenFile();

	while (getline(fin, sentence))
	{
		fout << sentence << endl;
	}
	fin.close();
}

void DeleteSomeString()
{
	int NumberToDeleteString = 0, NumberAllString = 0; // счётчики
	string read;
	cout << "Введите название файла для чтения:\n";
	cin >> read;
	string sentence = "";
	fin.open(read);
	if (!fin.is_open()) // проверка открылся ли файл! это важно!
		cout << "Файл не открылся!\n";
	else
		cout << "Файл открылся!\n";
	cout << "Введите номер строки которую хотите удалить:";
	cin >> NumberToDeleteString;

	cout << "Введите название файла для его открытия:\n";
	cin >> path;
	fout.open(path, ofstream::app);
	CheckOpenFile();

	while (getline(fin, sentence))
	{
		NumberAllString++;
		if (NumberAllString == NumberToDeleteString)
			sentence = "";
		fout << sentence << endl;
	}
	fin.close();
}

void SearchMaxString()
{
	int sizeChar = 0, maxChar = 0, numberMaxLine = 0, numberLine = 0;
	string read;
	cout << "Введите название файла для чтения:\n";
	cin >> read;
	fin.open(read);
	CheckOpenFile();
	char ch;
	while (fin.get(ch))
	{
		cout << ch;
		sizeChar++;
		if (ch == '\n')
		{
			numberLine++;
			if (sizeChar > maxChar)
			{
				maxChar = sizeChar;
				numberMaxLine = numberLine;
			}
			sizeChar = 0;
		}
	}
	cout << endl;
	cout << "Размер самой большой строки: " << maxChar << endl;
	cout << "Номер самой большой строки: " << numberMaxLine << endl;
	fin.close();
}

void SearchWord()
{
	string word;
	cout << "Введите слово для поиска: ";
	cin >> word;
	ifstream fin("1.txt");
	if (fin.is_open()) {
		string line;
		int count = 0;
		while (getline(fin, line)) {
			istringstream iss(line);
			string token;
			while (iss >> token) {
				if (token == word) {
					count++;
				}
			}
		}
		cout << "Количество вхождений слова \"" << word << "\": " << count << endl;
		fin.close();
	}
	else {
		cout << "Не удалось открыть файл" << endl;
	}
}
void ChangeWord()
{
	string word, new_word;
	cout << "Введите слово, которое нужно заменить: ";
	cin >> word;
	cout << "Введите новое слово: ";
	cin >> new_word;
	ifstream fin("1.txt");
	ofstream fout("temp.txt");
	if (fin.is_open()) {
		string line;
		int count = 0;
		while (getline(fin, line)) {
			istringstream iss(line);
			string token;
			while (iss >> token) {
				if (token == word) {
					token = new_word;
					count++;
				}
				fout << token << " ";
			}
			fout << endl;
		}
		fout.close();
		fin.close();
		remove("1.txt");
		rename("temp.txt", "1.txt");
		cout << "Замена завершена";
	}
	else {
		cout << "Не удалось открыть файл" << endl;
	}
}
