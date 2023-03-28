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
string CreatedFile(string path, ofstream &fout); // для создания/открытия файла (с затиранием данных)
void OpenFile(string path, ofstream &fout);  // если хотим открыть уже существующий файл и изменить информацию без затирания данных.
string WriteInFile(ofstream &fout); // функция для записи информации в файл
void ReadingFile(ifstream &fin); // функция для чтения данных в файлах
void DeleteSomeString(ifstream &fin, string path, ofstream &fout); // функция для удаления последней строки (пока что последней, далее введу удаление любой указанной строки)
void CopyFile(ifstream &fin, string path, ofstream &fout); // функция полностью копирует один файл в указанный пользователем файл
void SearchMaxString(ifstream &fin); // ищет самую длинную строку, выводит её на консоль, выводит количество символов и номер этой строки
void SearchWord(ifstream& fin, string path); // ищет сколько раз встречается заданное пользователем слово
void ChangeWord(ifstream& fin, string path); // заменяет все вхождения заданного пользователем слова на новое слово.
void AddSomeText(); // добавить конкретный текст после конкретной строки
void VisionFile(); // эта функция будет выводить какие на данный момент в папке имеются файлы
void RemoveFile(); // функция для удаления какого-нибудь файла.
void CreatedMoreFile(string path, ofstream& fout); // функция для создания многих файлов (пустых)
void RenameFile(); // функция для изменения названия файла

