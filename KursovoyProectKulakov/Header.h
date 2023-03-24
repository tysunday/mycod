#pragma once

#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <sstream>

using namespace std;
//prototypes
/*void CheckOpenFile(ofstream file);*/ // проверка открыт ли файл
string CreatedFile(string path, ofstream fout); // для создания/открытия файла (с затиранием данных)
void OpenFile(string path, ofstream &fout);  // если хотим открыть уже существующий файл и изменить информацию без затирания данных.
string WriteInFile(ofstream &fout); // функция для записи информации в файл
void ReadingFile(ifstream &fin); // функция для чтения данных в файлах
void DeleteSomeString(ifstream &fin, string path, ofstream &fout); // функция для удаления последней строки (пока что последней, далее введу удаление любой указанной строки)
void CopyFile(ifstream &fin, string path, ofstream &fout); // функция полностью копирует один файл в указанный пользователем файл
void SearchMaxString(ifstream fin); // ищет самую длинную строку, выводит её на консоль, выводит количество символов и номер этой строки
void SearchWord(); // ищет сколько раз встречается заданное пользователем слово
void ChangeWord(); // заменяет все вхождения заданного пользователем слова на новое слово.
void AddSomeText(); // добавить конкретный текст в конкретную строку

