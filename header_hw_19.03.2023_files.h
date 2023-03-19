#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <sstream>

using namespace std;

string path = "";  /*���������� ���������� ���������� ���������� ���� ��� ������ ����� �� � ���� ����� ����� ����� ������� � ����� �������*/
ofstream fout; // ���������� ���������� ��� ������ � �����.
ifstream fin; // ���������� ���������� ��� ������ ������ � ������.


//prototypes
void CheckOpenFile(); // �������� ����� �� ����
void CreateFile(); // ��� ��������/�������� ����� (� ���������� ������)
void OpenFile(string path);  // ���� ����� ������� ��� ������������ ���� � �������� ���������� ��� ��������� ������.
string WriteInFile(); // ������� ��� ������ ���������� � ����
void ReadingFile(); // ������� ��� ������ ������ � ������
void DeleteSomeString(); // ������� ��� �������� ��������� ������ (���� ��� ���������, ����� ����� �������� ����� ��������� ������)
void CopyFile(); // ������� ��������� �������� ���� ���� � ��������� ������������� ����
void SearchMaxString(); // ���� ����� ������� ������, ������� � �� �������, ������� ���������� �������� � ����� ���� ������
void SearchWord(); // ���� ������� ��� ����������� �������� ������������� �����
void ChangeWord(); // �������� ��� ��������� ��������� ������������� ����� �� ����� �����.
void CheckOpenFile()
{
	fin.is_open();
	if (!fin.is_open())
		cout << "���� �� ������. \n";
	else
		cout << "���� ������� ������\n";
}

string CreateFile(string path)
{
	cout << "������� �������� ����� ��� ��� ��������\n";
	cin >> path;
	fout.open(path);
	CheckOpenFile();
	return path;
}

void OpenFile(string path)
{
	cout << "������� �������� ����� ��� ��� ��������:\n";
	cin >> path;
	fout.open(path, ofstream::app);
	CheckOpenFile();
}

string WriteInFile()
{
	cout << "������� �����: \n";
	string sentence;
	getline(cin, sentence, '*'); // ����� � ����������
	fout << sentence; // � ���������� ������� � ��������� ����
	return sentence;
	fout.close();
}

void ReadingFile()
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

void CopyFile()
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
	CheckOpenFile();

	while (getline(fin, sentence))
	{
		fout << sentence << endl;
	}
	fin.close();
}

void DeleteSomeString()
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
	cout << "������� ����� ������ ������� ������ �������:";
	cin >> NumberToDeleteString;

	cout << "������� �������� ����� ��� ��� ��������:\n";
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
	cout << "������� �������� ����� ��� ������:\n";
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
