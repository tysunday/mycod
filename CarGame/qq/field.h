#pragma once
#include "Header.h"

class field
{
public:
	void CreatedField(); 
	// создание массива поля и заполнение его символами.
	void Rain();

	char GetLet() { return let; }
	char GetSymbol() { return symbol; }

	void Game(); 

	void VisionArray();
	// отображение массива.

	void CreateLet(char**& array,const char& let);
	// создание в разных местах первой строки рандомного количества препятствий(от 1 до 10).

	void MoveCar();


private:
	char** array;  
	char** tempArray;

	struct place_to_car {
		char icon = 'V';
		int width_place = 24;
		int length_place = 24;
	};

	int ch = 0;

	place_to_car car;
	const int length = 25, width = 50; // размеры поля.
	const char symbol = ' '; // клетки поля по которым можно перемещаться.
	bool accident = false;
	const char let = '-'; 
	// препятствия при столкновении с которыми происходит авария (accident).
};

