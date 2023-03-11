//Реализовать структуру "Стиральная машинка" (фирма, цвет, ширина, длина, высота, мощность, скорость отжима, температура нагрева).
//Создайте экземпляр структуры и проилюстрируйте работу с ним.

#include <iostream>
#include <windows.h>
using namespace std;

struct washingMachine
{
	string company{ NULL };
	string color{ NULL };
	int width{ NULL }, length{ NULL }, height{ NULL };
	int spin_speed{ NULL };
	float heating_temperature{ NULL };
	string description{ NULL };

}washingMachines[100];


void Add_info(int count)
{
	cout << "Введите данные о стиральной машинке " << endl << endl;
	cout << "Фирма:  " << endl;
	cin >> washingMachines[count].company;
	cout << "Цвет: " << endl;
	cin >> washingMachines[count].color;
	cout << "Ширина: " << endl;
	cin >> washingMachines[count].width;
	cout << "Длина: " << endl;
	cin >> washingMachines[count].length;
	cout << "Высота: " << endl;
	cin >> washingMachines[count].height;
	cout << "Скорость отжима: " << endl;
	cin >> washingMachines[count].spin_speed;
	cout << "Температура нагрева: " << endl;
	cin >> washingMachines[count].heating_temperature;
	cout << "Описание стиральной машинки: " << endl;
	cin >> washingMachines[count].description;
}

void Cout(int count)
{
	cout << "Данные о стиральной машинке " << endl << endl;
	cout << "Фирма:  " << washingMachines[count].company << endl;
	cout << "Цвет: " << washingMachines[count].color << endl;
	cout << "Ширина: " << washingMachines[count].width << endl;
	cout << "Длина: " << washingMachines[count].length << endl;
	cout << "Высота: " << washingMachines[count].height << endl;
	cout << "Скорость отжима: " << washingMachines[count].spin_speed << endl;
	cout << "Температура нагрева: " << washingMachines[count].heating_temperature << endl;
	cout << "Описание стиральной машинки: " << washingMachines[count].description << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = 0, count = 0;

	cout << "***************Стиральная машина***************" << endl << endl;
	cout << "1 - Внести данные о новой стиральной машине." << endl;
	cout << "2 - Вывести данные о какой-либо стиральной машине." << endl;
	cout << "3 - Внести корректировке о какой-либо стиральной машине." << endl;
	cout << "5 - Выйти из программы.";

	cin >> answer;

	while (answer != 5) {
		switch (answer) {

		case 1:
			Add_info(count);
			count++;
			break;
		case 2:
			if (count == 0) {
				cout << "В наличии доступных моделей нет " << endl;
			}
			else {
				cout << "Введите о номере какой стиральной машинки вы хотите узнать: " << endl;
				cout << "Имеющиеся на данный момент модели: " << endl;
				for (int i = 0; i < count; i++)
				{
					cout << washingMachines[i].company << endl;
				}
				cin >> count;
				break;
			}
		default:
			break;

		}
		//Cout(count);
	}


}