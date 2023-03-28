//Задание 1. Дан текстовый файл. 
//Удалить из него последнюю строку.
//Результат записать в другой файл.
//Задание 2. Дан текстовый файл.Найти длину самой
//длинной строки.
//Задание 3. Дан текстовый файл.Посчитать сколько раз
//в нем встречается заданное пользователем слово.
//Задание 4. Дан текстовый файл.Найти и заменить в нем
//заданное слово.Что искать и на что заменять определяется пользователем.

#include "Header.h"

string path;  /*глобальная переменная являющаяся изменяемым путём для файлов через неё я пишу какие новые файлы создать а какие открыть*/
ofstream fout; // глобальная переменная для записи в файлы.
ifstream fin; // глобальная переменная для чтения данных с файлов.

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int answer = 1;

	while (answer != 0)
	{
		cout << R"(    Выберите вариант ответа: 
			1 - создать файл
			2 - прочитать файл
			3 - записать информацию в файл
			4 - удалить файл
			5 - создание множества одинаковых файлов
			6 - найти какое-либо слово в файле
			7 - изменить название файла
			8 - скопировать информацию с одного файла в другой
			9 - изменить слово в конкретном файле на другое слово
			0 - выйти из файла)" << endl;
		cout << "Файлы которые есть на данный момент: " << endl << endl;
		VisionFile();

		cin >> answer;

		switch (answer)
		{
		case 1:
			CreatedFile(path, fout);
			system("pause");
			system("cls");
			break;
		case 2:
			ReadingFile(fin);
			system("pause");
			system("cls");
			break;
		case 3:
			cout << R"(запишем информацию в уже имеющийся файл или создадим новый?
				1 - в имеющийся (без затирания информации
				2 - в имеющийся (с затиранием информации);
				3 - в новый
				)" << endl;;
			cin >> answer;
			switch (answer)
			{
			case 1:
				OpenFile(path, fout);
				WriteInFile(fout);
				fout.close();
				break;
			case 2:
				CreatedFile(path, fout);
				WriteInFile(fout);
				fout.close();
				break;
			case 3:
				CreatedFile(path, fout);
				WriteInFile(fout);
				fout.close();
				break;
			}
			system("pause");
			system("cls");
			break;
		case 4:
			RemoveFile();
			system("pause");
			system("cls");
			break;
		case 5:
			CreatedMoreFile(path, fout);
			system("pause");
			system("cls");
			break;
		case 6:
			SearchWord(fin, path);
			system("pause");
			system("cls");
			break;
		case 7:
			RenameFile();
			system("pause");
			system("cls");
			break;
		case 8:
			CopyFile(fin, path, fout);
			system("pause");
			system("cls");
			break;
		case 9:
			ChangeWord(fin, path);
			system("pause");
			system("cls");
			break;
		case 0:
			break;
		default:
			cout << "oh you choose unrelease case =( \n\n";
			system("pause");
			system("cls");
			break;
		}
	}
}