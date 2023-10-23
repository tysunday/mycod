#pragma once
#include "Header.h"

class field
{
public:
	void CreatedField(); 
	// �������� ������� ���� � ���������� ��� ���������.
	void Rain();

	char GetLet() { return let; }
	char GetSymbol() { return symbol; }

	void Game(); 

	void VisionArray();
	// ����������� �������.

	void CreateLet(char**& array,const char& let);
	// �������� � ������ ������ ������ ������ ���������� ���������� �����������(�� 1 �� 10).

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
	const int length = 25, width = 50; // ������� ����.
	const char symbol = ' '; // ������ ���� �� ������� ����� ������������.
	bool accident = false;
	const char let = '-'; 
	// ����������� ��� ������������ � �������� ���������� ������ (accident).
};

