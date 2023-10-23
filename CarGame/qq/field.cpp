#include "field.h"

void field::CreatedField() {
	array = new char* [length];
	for (int i = 0; i < length; i++)
		array[i] = new char[width];

	for (int i = 0; i < length; i++)
		for (int j = 0; j < width; j++)
			array[i][j] = symbol;

}

void field::Rain() {
	tempArray = new char* [length];
	for (int i = 0; i < length; i++)
		tempArray[i] = new char[width];

	for (int i = 1; i < length; i++)
		for (int j = 0; j < width; j++) {
			tempArray[i][j] = array[i - 1][j];
		}

	for (int i = 1; i < length; i++)
		for (int j = 0; j < width; j++)
		{
			array[0][j] = ' ';
			array[i][j] = tempArray[i][j];
		}
}
void field::VisionArray()
{
	array[car.length_place][car.width_place] = car.icon;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < width; j++) {
			RESET_FROM_EDGE_CONSOLE;
			cout << array[i][j];
		}
		cout << endl;
	}

}

void field::MoveCar()
{
	ch = _getch();
	switch (char(ch)) {
	case 72:
		if (car.length_place - 1 > 0)
			car.length_place--;
		break;
	case 75:
		if (car.width_place - 1 > 0)
			car.width_place--;
		break;
	case 77:
		if (car.width_place + 1 < 50)
			car.width_place++;
		break;
	case 80:
		if (car.length_place + 1 < 24)
			car.length_place++;
		break;
	}
}

void field::Game()
{
	CreatedField();
	while (!accident && _kbhit)
	{
			MoveCar();
			//Sleep(300);
			system("cls");
			VisionArray();
			CreateLet(array, let);
			Rain();
			if (array[car.length_place][car.width_place] == '-')
			{
				system("cls");
				cout << "\t\t\t\t\t\n\n\n\n\n\t\t\t\t\tYOU LOST\n\n\n\n\n\n\n\n\n";
				break;
			}
	}
}

void field::CreateLet(char**& array,
	const char& let)
{
	int randomCount = rand() % 5;
	for (int i = 0; i < width; i++)
		array[0][i] = ' ';
	for (int i = 0; i < randomCount; i++)
		array[0][1 + rand() % 50] = let;
}