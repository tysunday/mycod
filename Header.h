#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <sstream>

using namespace std;
//prototypes
/*void CheckOpenFile(ofstream file);*/ // �������� ������ �� ����
string CreatedFile(string path, ofstream fout); // ��� ��������/�������� ����� (� ���������� ������)
void OpenFile(string path, ofstream &fout);  // ���� ����� ������� ��� ������������ ���� � �������� ���������� ��� ��������� ������.
string WriteInFile(ofstream &fout); // ������� ��� ������ ���������� � ����
void ReadingFile(ifstream &fin); // ������� ��� ������ ������ � ������
void DeleteSomeString(ifstream &fin, string path, ofstream &fout); // ������� ��� �������� ��������� ������ (���� ��� ���������, ����� ����� �������� ����� ��������� ������)
void CopyFile(ifstream &fin, string path, ofstream &fout); // ������� ��������� �������� ���� ���� � ��������� ������������� ����
void SearchMaxString(ifstream fin); // ���� ����� ������� ������, ������� � �� �������, ������� ���������� �������� � ����� ���� ������
void SearchWord(); // ���� ������� ��� ����������� �������� ������������� �����
void ChangeWord(); // �������� ��� ��������� ��������� ������������� ����� �� ����� �����.
void AddSomeText(); // �������� ���������� ����� � ���������� ������

