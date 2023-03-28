#pragma once
#define _SILENCE_EXPERIMENTAL_FILESYSTEM_DEPRECATION_WARNING

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <sstream>
#include <experimental/filesystem>
#include <windows.h>
#include <cstdio> 

using namespace std;
namespace fs = std::experimental::filesystem;

//prototypes
string CreatedFile(string path, ofstream &fout); // ��� ��������/�������� ����� (� ���������� ������)
void OpenFile(string path, ofstream &fout);  // ���� ����� ������� ��� ������������ ���� � �������� ���������� ��� ��������� ������.
string WriteInFile(ofstream &fout); // ������� ��� ������ ���������� � ����
void ReadingFile(ifstream &fin); // ������� ��� ������ ������ � ������
void DeleteSomeString(ifstream &fin, string path, ofstream &fout); // ������� ��� �������� ��������� ������ (���� ��� ���������, ����� ����� �������� ����� ��������� ������)
void CopyFile(ifstream &fin, string path, ofstream &fout); // ������� ��������� �������� ���� ���� � ��������� ������������� ����
void SearchMaxString(ifstream &fin); // ���� ����� ������� ������, ������� � �� �������, ������� ���������� �������� � ����� ���� ������
void SearchWord(ifstream& fin, string path); // ���� ������� ��� ����������� �������� ������������� �����
void ChangeWord(ifstream& fin, string path); // �������� ��� ��������� ��������� ������������� ����� �� ����� �����.
void AddSomeText(); // �������� ���������� ����� ����� ���������� ������
void VisionFile(); // ��� ������� ����� �������� ����� �� ������ ������ � ����� ������� �����
void RemoveFile(); // ������� ��� �������� ������-������ �����.
void CreatedMoreFile(string path, ofstream& fout); // ������� ��� �������� ������ ������ (������)
void RenameFile(); // ������� ��� ��������� �������� �����

