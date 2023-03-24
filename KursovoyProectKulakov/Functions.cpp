#pragma once
#include "Header.h"

//void CheckOpenFile(file)
//{
//	
//}

string CreatedFile(string path, ofstream fout)
{
	cout << "Введите название файла для его создания\n";
	cin >> path;
	fout.open(path);
	return path;
	fout.is_open();
		if (!fout.is_open())
			cout << "Файл не открыт. \n";
		else
			cout << "Файл успешно открыт\n";
}

void OpenFile(string path, ofstream &fout) 
{
	cout << "Введите название файла для его открытия:\n";
	cin >> path;
	fout.open(path, ofstream::app);
	fout.is_open();
	if (!fout.is_open())
		cout << "Файл не открыт. \n";
	else
		cout << "Файл успешно открыт\n";
}

string WriteInFile(ofstream &fout)
{
	cout << "Введите текст: \n";
	string sentence;
	getline(cin, sentence, '*'); // пишем в переменную
	fout << sentence; // с переменной передаём в текстовый файл
	return sentence;
	fout.close();

}

void ReadingFile(ifstream &fin)
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

void CopyFile(ifstream &fin, string path, ofstream &fout)
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
	if (!fout.is_open())
		cout << "Файл не открыт. \n";
	else
		cout << "Файл успешно открыт\n";

	while (getline(fin, sentence))
	{
		fout << sentence << endl;
	}
	fin.close();
}

void DeleteSomeString(ifstream &fin, string path, ofstream &fout )
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
	ReadingFile(fin);
	cout << "Введите номер строки которую хотите удалить:";
	cin >> NumberToDeleteString;

	cout << "Введите название файла для его открытия:\n";
	cin >> path;
	fout.open(path, ofstream::app);

	while (getline(fin, sentence))
	{
		NumberAllString++;
		if (NumberAllString == NumberToDeleteString)
			sentence = "";
		fout << sentence << endl;
	}
	fin.close();
}

void SearchMaxString(ifstream fin)
{
	int sizeChar = 0, maxChar = 0, numberMaxLine = 0, numberLine = 0;
	string read;
	cout << "Введите название файла для чтения:\n";
	cin >> read;
	fin.open(read);
	if (!fin.is_open()) // проверка открылся ли файл! это важно!
		cout << "Файл не открылся!\n";
	else
		cout << "Файл открылся!\n";
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

void AddSomeText()
{
	string text, name, info;
	ifstream fin("1.txt");
	ofstream fout("temp.txt");
	cout << "Введите данные по какому сотруднику вы хотите ввести:\n";
	cin >> name;
	cout << "Введите текст:\n";
	getline(cin, text, '*');
	string line;
	while (getline(fin, line)) {
		istringstream iss(line);
		string token;
		while (iss >> token) {
			if (token == name)
			{
				fout << "\n\n";
				fout << text << endl;
			}
		}
		fout.close();
		fin.close();
		cout << "GOTOVO";
	}
}

