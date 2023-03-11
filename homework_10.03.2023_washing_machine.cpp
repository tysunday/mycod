//Реализовать структуру "Стиральная машинка" (фирма, цвет, ширина, длина, высота, мощность, скорость отжима, температура нагрева).
//Создайте экземпляр структуры и проилюстрируйте работу с ним.

#include <iostream>
#include <windows.h>
using namespace std;
int numberWashingMachine = 0, // переменная для выбора взаимодействия с конкретной стиральной машиной
quantity = 0; // - количество стиральных машин в общем

struct washingMachine // структура объекта "стиральная машина"
{
	string company{ NULL };
	string color{ NULL };
	int width{ NULL }, length{ NULL }, height{ NULL };
	int spin_speed{ NULL };
	float heating_temperature{ NULL };
	string description{ NULL };

}washingMachines[100]; // массив для объектов стиральных машин

void Add_info(int quantity); // функция для создания новых стиральных машин
void Cout(int numberWashingMachine); // функция вывода информации о конкретной стиральной машине
void Adjust(int numberWashingMachine); // функция изменения информации о конкретной стиральной машине

int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int answer = 0;
	while (answer != 5) {
		cout << " \n\n***************Стиральная машина***************" << endl << endl;
		cout << "1 - Внести данные о новой стиральной машине." << endl;
		cout << "2 - Вывести данные о какой-либо стиральной машине." << endl;
		cout << "3 - Внести корректировки о какой-либо стиральной машине." << endl;
		cout << "5 - Выйти из программы." << endl;

		cin >> answer;

		switch (answer)
		{
			cin >> answer;
		case 1:
			system("cls");
			quantity++;
			Add_info(quantity);
			break;
		case 2:
			system("cls");
			if (quantity == 0) {
				cout << "В наличии доступных моделей нет " << endl;
			}
			else {
				cout << "Введите о номере какой стиральной машинки вы хотите узнать: " << endl;
				cout << "Имеющиеся на данный момент модели: " << endl;
				for (int i = 1; i <= quantity; i++)
				{
					cout << i << " - " << washingMachines[i].company << endl;
				}
				cin >> numberWashingMachine;
				Cout(numberWashingMachine);
			}
			break;
		case 3:
			if (quantity == 0)
			{
				cout << "В программе стиральных машин нет. \n\n";
				break;
			}
			Adjust(numberWashingMachine);
			break;
		default:
			break;
		}
	}
}
void Add_info(int quantity) // функция для создания новых стиральных машин
{
	cout << "Введите данные о стиральной машинке " << endl << endl;
	cout << "Фирма:  " << endl;
	cin >> washingMachines[quantity].company;
	cout << "Цвет: " << endl;
	cin >> washingMachines[quantity].color;
	cout << "Ширина: " << endl;
	cin >> washingMachines[quantity].width;
	cout << "Длина: " << endl;
	cin >> washingMachines[quantity].length;
	cout << "Высота: " << endl;
	cin >> washingMachines[quantity].height;
	cout << "Скорость отжима: " << endl;
	cin >> washingMachines[quantity].spin_speed;
	cout << "Температура нагрева: " << endl;
	cin >> washingMachines[quantity].heating_temperature;
	cout << "Описание стиральной машинки: " << endl;
	cin >> washingMachines[quantity].description;
}

void Cout(int numberWashingMachine) // функция вывода информации о конкретной стиральной машине
{
	cout << "Данные о стиральной машинке " << endl << endl;
	cout << "Фирма:  " << washingMachines[numberWashingMachine].company << endl;
	cout << "Цвет: " << washingMachines[numberWashingMachine].color << endl;
	cout << "Ширина: " << washingMachines[numberWashingMachine].width << endl;
	cout << "Длина: " << washingMachines[numberWashingMachine].length << endl;
	cout << "Высота: " << washingMachines[numberWashingMachine].height << endl;
	cout << "Скорость отжима: " << washingMachines[numberWashingMachine].spin_speed << endl;
	cout << "Температура нагрева: " << washingMachines[numberWashingMachine].heating_temperature << endl;
	cout << "Описание стиральной машинки: " << washingMachines[numberWashingMachine].description << endl;
}

void Adjust(int numberWashingMachine) // функция изменения информации о конкретной стиральной машине
{
	int numberInfo = 0;
	cout << "О какой стиральной машинке информацию вы хотите исправить?\n";
	cout << "Имеющиеся на данный момент модели: \n";
	for (int i = 1; i <= quantity; i++)
	{
		cout << i << " - " << washingMachines[i].company << endl;
	}
	cin >> numberWashingMachine;
	if (numberWashingMachine < 1 && numberWashingMachine > quantity)
	{
		cout << "Такого номера у стиральной машины нет.\n";
	}
	cout << "Какую информацию вы хотите исправить? \n";
	cout << R"(
	1 - Фирма		2 - Цвет				3 - Ширина					4 - Длина
	5 - Высота		6 - Скорость отжима		7 - Температура нагрева		8 - Описание)";
	cin >> numberInfo;

	switch (numberInfo)
	{
	case 1:
		cout << "Введите название фирмы: \n";
		cin >> washingMachines[numberWashingMachine].company;
		break;
	case 2:
		cout << "Введите цвет: \n";
		cin >> washingMachines[numberWashingMachine].color;
		break;
	case 3:
		cout << "Введите ширину: \n";
		cin >> washingMachines[numberWashingMachine].width;
		break;
	case 4:
		cout << "Введите длину: \n";
		cin >> washingMachines[numberWashingMachine].length;
		break;
	case 5:
		cout << "Введите высоту: \n";
		cin >> washingMachines[numberWashingMachine].height;
		break;
	case 6:
		cout << "Введите скорость отжима: \n";
		cin >> washingMachines[numberWashingMachine].spin_speed;
		break;
	case 7:
		cout << "Введите скорость нагрева температуры: \n";
		cin >> washingMachines[numberWashingMachine].heating_temperature;
		break;
	case 8:
		cout << "Введите новое описание стиральной машины: \n";
		cin >> washingMachines[numberWashingMachine].description;
		break;
	}
}