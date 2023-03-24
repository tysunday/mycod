#pragma once
#include "Header.h"

//void CheckOpenFile(file)
//{
//	
//}

string CreatedFile(string path, ofstream fout)
{
	cout << "������� �������� ����� ��� ��� ��������\n";
	cin >> path;
	fout.open(path);
	return path;
	fout.is_open();
		if (!fout.is_open())
			cout << "���� �� ������. \n";
		else
			cout << "���� ������� ������\n";
}

void OpenFile(string path, ofstream &fout) 
{
	cout << "������� �������� ����� ��� ��� ��������:\n";
	cin >> path;
	fout.open(path, ofstream::app);
	fout.is_open();
	if (!fout.is_open())
		cout << "���� �� ������. \n";
	else
		cout << "���� ������� ������\n";
}

string WriteInFile(ofstream &fout)
{
	cout << "������� �����: \n";
	string sentence;
	getline(cin, sentence, '*'); // ����� � ����������
	fout << sentence; // � ���������� ������� � ��������� ����
	return sentence;
	fout.close();

}

void ReadingFile(ifstream &fin)
{
	string read;
	cout << "������� �������� ����� ��� ������:\n";
	cin >> read;
	string sentence = "";
	fin.open(read);
	if (!fin.is_open()) // �������� �������� �� ����! ��� �����!
		cout << "���� �� ��������!\n";
	else
		cout << "���� ��������!\n";
	while (getline(fin, sentence))
	{
		cout << sentence << endl;
	}
	fin.close();
}

void CopyFile(ifstream &fin, string path, ofstream &fout)
{
	string read;
	cout << "������� �������� ����� ��� ������:\n";
	cin >> read;
	string sentence = "";
	fin.open(read);
	if (!fin.is_open()) // �������� �������� �� ����! ��� �����!
		cout << "���� �� ��������!\n";
	else
		cout << "���� ��������!\n";

	cout << "������� �������� ����� ��� ��� ��������:\n";
	cin >> path;
	fout.open(path, ofstream::app);
	if (!fout.is_open())
		cout << "���� �� ������. \n";
	else
		cout << "���� ������� ������\n";

	while (getline(fin, sentence))
	{
		fout << sentence << endl;
	}
	fin.close();
}

void DeleteSomeString(ifstream &fin, string path, ofstream &fout )
{
	int NumberToDeleteString = 0, NumberAllString = 0; // ��������
	string read;
	cout << "������� �������� ����� ��� ������:\n";
	cin >> read;
	string sentence = "";
	fin.open(read);
	if (!fin.is_open()) // �������� �������� �� ����! ��� �����!
		cout << "���� �� ��������!\n";
	else
		cout << "���� ��������!\n";
	ReadingFile(fin);
	cout << "������� ����� ������ ������� ������ �������:";
	cin >> NumberToDeleteString;

	cout << "������� �������� ����� ��� ��� ��������:\n";
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
	cout << "������� �������� ����� ��� ������:\n";
	cin >> read;
	fin.open(read);
	if (!fin.is_open()) // �������� �������� �� ����! ��� �����!
		cout << "���� �� ��������!\n";
	else
		cout << "���� ��������!\n";
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
	cout << "������ ����� ������� ������: " << maxChar << endl;
	cout << "����� ����� ������� ������: " << numberMaxLine << endl;
	fin.close();
}

void SearchWord()
{
	string word;
	cout << "������� ����� ��� ������: ";
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
		cout << "���������� ��������� ����� \"" << word << "\": " << count << endl;
		fin.close();
	}
	else {
		cout << "�� ������� ������� ����" << endl;
	}
}

void ChangeWord()
{
	string word, new_word;
	cout << "������� �����, ������� ����� ��������: ";
	cin >> word;
	cout << "������� ����� �����: ";
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
		cout << "������ ���������";
	}
	else {
		cout << "�� ������� ������� ����" << endl;
	}
}

void AddSomeText()
{
	string text, name, info;
	ifstream fin("1.txt");
	ofstream fout("temp.txt");
	cout << "������� ������ �� ������ ���������� �� ������ ������:\n";
	cin >> name;
	cout << "������� �����:\n";
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

