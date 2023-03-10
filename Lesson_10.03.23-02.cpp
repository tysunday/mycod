//		Задание 2. 
//		Реализовать структуру «животное».

#include <iostream>
#include <Windows.h>

using namespace std;

struct Animal
{
	string title_of_animal{ NULL };
	string class_of_animal{ NULL };
	string nick_of_animal{ NULL };
	string voice{ NULL };
} animals[100];

void Display_animal(int k)
{
	cout << "Название: " << animals[k].title_of_animal << "\n";
	cout << "Класс: " << animals[k].class_of_animal << "\n";
	cout << "Кличка: " << animals[k].nick_of_animal << "\n";
}

void Display_animals(int k)
{
	for (int i = 1; i <= k; i++)
	{
		cout << "Название: " << animals[i].title_of_animal << "\n";
		cout << "Класс: " << animals[i].class_of_animal << "\n";
		cout << "Кличка: " << animals[i].nick_of_animal << "\n\n";
	}
}

void Search_name(int k, string name)
{
	int count{ 0 };
	for (int i = 1; i <= k; i++)
	{
		if (animals[i].title_of_animal == name)
		{
			count++;
			Display_animal(i);
			cout << "\n";
		}
	}
	if (count == 0)
	{
		cout << "Ничего не найдено.\n\n";
	}
}

void Search_name_voice(int k, string name)
{
	int count{ 0 };
	for (int i = 1; i <= k; i++)
	{
		if (animals[i].title_of_animal == name)
		{
			count++;
			cout << animals[i].voice;
			cout << "\n\n";
		}
	}
	if (count == 0)
	{
		cout << "Ничего не найдено.\n\n";
	}
}



void Add_info(int k)
{
	cout << "Введите данные о жЫвотном: \n\n";
	cout << "название: ";
	cin >> animals[k].title_of_animal;
	cout << "класс: ";
	cin >> animals[k].class_of_animal;
	cout << "кличка: ";
	cin >> animals[k].nick_of_animal;
	cout << "голос: ";
	cin >> animals[k].voice;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int answer_id{ 0 }, k{ 3 }, name{ 0 };
	string name_ch{ NULL };

	animals[1] = { "петух", "пернатое", "убица", "КУКАРЕКУ" };
	animals[2] = { "кот", "кошачьи", "мурзик", "МЯУ" };
	animals[3] = { "собака", "собачью", "псина", "ГАВ" };

	while (answer_id != 5)
	{
		system("cls");

		cout << "***Структура жЫвотное***\n\n";

		cout << "- 1 - Добавить запись.\n";
		cout << "- 2 - Вывести весь список.\n";
		cout << "- 3 - Поиск по названию.\n";
		cout << "- 4 - Подать голос.\n";
		cout << "- 5 - Выход.\n";

		cin >> answer_id;
		system("cls");

		switch (answer_id)
		{
		case(1):
			k++;
			Add_info(k);
			break;

		case(2):
			Display_animals(k);
			system("pause");
			break;

		case(3):
			cout << "Введите название жЫвотного: ";
			cin >> name_ch;
			cout << "\n";
			Search_name(k, name_ch);
			system("pause");
			break;

		case(4):
			cout << "Введите название жЫвотного, чтобы подать голос: ";
			cin >> name_ch;
			cout << "\n";
			Search_name_voice(k, name_ch);
			system("pause");
			break;

		default:
			break;
		}
	}

	return 0;
}
