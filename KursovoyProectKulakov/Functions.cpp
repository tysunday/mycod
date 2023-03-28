#pragma once
#include "Header.h"

string CreatedFile(string path, ofstream &fout)
{
	cout << "������� �������� ����� ��� ��� ��������\n";
	cin >> path;
	fout.open(path);
	
	fout.is_open();
		if (!fout.is_open())
			cout << "���� �� ������. \n";
		else
			cout << "���� ������� ������\n";
		return path;
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
	cin.ignore();
	getline(cin, sentence, '*'); // ����� � ����������
	fout << sentence; // � ���������� ������� � ��������� ����
	return sentence;

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

void SearchMaxString(ifstream &fin)
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

void SearchWord(ifstream& fin, string path)
{
	cout << "������� �������� �����\n";
	cin >> path;
	string word;
	cout << "������� ����� ��� ������: ";
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
		cout << "���������� ��������� ����� \"" << word << "\": " << count << endl;
		fin.close();
	}
	else {
		cout << "�� ������� ������� ����" << endl;
	}
}

void ChangeWord(ifstream& fin, string path)
{
	string word, new_word;
	cout << "������� ���� � ������� ����� ������ �����: \n";
	cin >> path;
	fin.open(path);
	cout << "������� �����, ������� ����� ��������: ";
	cin >> word;
	cout << "������� ����� �����: ";
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
		cout << "������ ���������";
	}
	else {
		cout << "�� ������� ������� ����" << endl;
	}
}

void AddSomeText()
{
	string text, name, chapter;
	cout << "������� ������ �� ������ ���������� �� ������ ������:\n";
	cin >> name;
	cout << "������� �����:\n";
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
		cout << "������ ���������";
	}
	else {
		cout << "�� ������� ������� ����" << endl;
	}
}

void VisionFile()
{
	fs::path current_path = fs::current_path();

	// �������� �� ���� ������ � ����� � ��������
	for (const auto& entry : fs::directory_iterator(current_path)) {
		// ���������, �������� �� ���� ��������� ������
		if (entry.path().extension() == ".txt") {
			// ������� ��� ���������� ����� �� �����
			cout << entry.path().filename() << endl;
		}
	}
}

void RemoveFile()
{
	string nameRemoveFile;
	cout << "������� �������� ����� ������� �� ������ �������\n";
	cin >> nameRemoveFile;
	remove(nameRemoveFile.c_str()); // c_str ����� ��� �������������� ������� string � � - ������ �.�. ��������� �� ������ �������� ���� const char*
}

void CreatedMoreFile(string path, ofstream& fout)
{
	int numberFiles = 0;
	cout << "������� �������� ����� ��� ��� ��������\n";
	cin >> path;
	string temp = path; // ��� ���������� �������� 
	cout << "������� ������� ������ �� ������ �������:\n";
	cin >> numberFiles;
	for (int i = 1; i <= numberFiles; i++)
	{
		path = path + "(" + to_string(i) + ")" + ".txt";
		fout.open(path);
		path = temp; // ���������� �������� �������� �����

		fout.is_open();
		if (!fout.is_open())
			cout << "���� �� ������. \n";
		else
			cout << "���� ������� ������\n";
		fout.close();
	}
}

void RenameFile()
{
	string oldNameFile, newNameFile;
	cout << "������� ����� ���� �� ������ �������������: \n";
	cin >> oldNameFile;
	cout << "������� ����� ��� ��� ������ ����: \n";
	cin >> newNameFile;
	rename(oldNameFile.c_str(), newNameFile.c_str());
}
