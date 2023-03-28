#pragma once
#include "Header.h"

string CreatedFile(string path, ofstream &fout)
{
	cout << "Введите название файла для его создания\n";
	cin >> path;
	fout.open(path);
	
	fout.is_open();
		if (!fout.is_open())
			cout << "Файл не открыт. \n";
		else
			cout << "Файл успешно открыт\n";
		return path;
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
	cin.ignore();
	getline(cin, sentence, '*'); // пишем в переменную
	fout << sentence; // с переменной передаём в текстовый файл
	return sentence;

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

void SearchMaxString(ifstream &fin)
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

void SearchWord(ifstream& fin, string path)
{
	cout << "Введите название файла\n";
	cin >> path;
	string word;
	cout << "Введите слово для поиска: ";
	cin >> word;
	fin.open(path);
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

void ChangeWord(ifstream& fin, string path)
{
	string word, new_word;
	cout << "Введите файл в котором будем менять слово: \n";
	cin >> path;
	fin.open(path);
	cout << "Введите слово, которое нужно заменить: ";
	cin >> word;
	cout << "Введите новое слово: ";
	cin >> new_word;
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
		remove(path.c_str());
		rename("temp.txt", "1.txt");
		cout << "Замена завершена";
	}
	else {
		cout << "Не удалось открыть файл" << endl;
	}
}

void AddSomeText()
{
	string text, name, chapter;
	cout << "Введите данные по какому сотруднику вы хотите ввести:\n";
	cin >> name;
	cout << "Введите текст:\n";
	getline(cin, text, '*');
	ifstream fin("1.txt");
	ofstream fout("temp.txt");
	if (fin.is_open()) {
		string line;
		while (getline(fin, line)) {
			istringstream iss(line);
			string token;
			while (iss >> token) {
				if (token == name) {
					token = token + "\n" + text;
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

void VisionFile()
{
	fs::path current_path = fs::current_path();

	// Проходим по всем файлам в папке с проектом
	for (const auto& entry : fs::directory_iterator(current_path)) {
		// Проверяем, является ли файл текстовым файлом
		if (entry.path().extension() == ".txt") {
			// Выводим имя текстового файла на экран
			cout << entry.path().filename() << endl;
		}
	}
}

void RemoveFile()
{
	string nameRemoveFile;
	cout << "Введите название файла которое вы хотите удалить\n";
	cin >> nameRemoveFile;
	remove(nameRemoveFile.c_str()); // c_str нужен для преобразования объекта string в С - строку т.е. указатель на массив символов типа const char*
}

void CreatedMoreFile(string path, ofstream& fout)
{
	int numberFiles = 0;
	cout << "Введите название файла для его создания\n";
	cin >> path;
	string temp = path; // для сохранения названия 
	cout << "Введите сколько файлов вы хотите создать:\n";
	cin >> numberFiles;
	for (int i = 1; i <= numberFiles; i++)
	{
		path = path + "(" + to_string(i) + ")" + ".txt";
		fout.open(path);
		path = temp; // возвращаем исходное название файлу

		fout.is_open();
		if (!fout.is_open())
			cout << "Файл не открыт. \n";
		else
			cout << "Файл успешно открыт\n";
		fout.close();
	}
}

void RenameFile()
{
	string oldNameFile, newNameFile;
	cout << "Введите какой файл вы хотите переименовать: \n";
	cin >> oldNameFile;
	cout << "Введите какое имя ему хотите дать: \n";
	cin >> newNameFile;
	rename(oldNameFile.c_str(), newNameFile.c_str());
}
