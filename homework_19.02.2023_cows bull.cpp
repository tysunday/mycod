//Задание 3. Написать игру «Быки и коровы».Программа
//«загадывает» четырёхзначное число и играющий должен
//угадать его.После ввода пользователем числа программа
//сообщает, сколько цифр числа угадано(быки) и сколько
//цифр угадано и стоит на нужном месте(коровы).После
//отгадывания числа на экран необходимо вывести количество сделанных пользователем попыток.В программе
//необходимо использовать рекурсию.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int number = 0, userNumber = 0, userTry = 0, bulls = 0, cows = 0;
	number = 4000 + rand() % 4999;
	cout << number << endl;

	int point_1 = number / 1000 % 10;
	int point_2 = number / 100 % 10;
	int point_3 = number / 10 % 10;
	int point_4 = number / 1 % 10;


	int arrayNumber[4] = { point_1, point_2, point_3, point_4 };

	cout << "Добро пожаловать!" << endl;
	cout << "Попробуйте угадать загаданную чётырёхзначную цифру" << endl;
	cin >> userNumber;

	while (userNumber != number)
	{
		userTry++;
		cout << "К сожалению ваше число неверно" << endl;

		for (int i = 0; i < 4; i++)
		{
			int userNumber_1 = userNumber / 1000 % 10;
			int userNumber_2 = userNumber / 100 % 10;
			int userNumber_3 = userNumber / 10 % 10;
			int userNumber_4 = userNumber / 1 % 10;

			int userNumber[4] = { userNumber_1, userNumber_2, userNumber_3, userNumber_4 };

			if (userNumber[i] == arrayNumber[i])
			{
				++cows;
			}
			for (int j = 0; j < 4; j++)
			{
				if (arrayNumber[i] == userNumber[j])
				{
					bulls += 1;
					j += 1;
				}
			}
		}
		cout << "(COWS) Кол-во чисел на своих местах = " << cows << endl;
		cows = 0;
		cout << "(BULLS) Кол-во	угаданных чисел = " << bulls << endl;
		bulls = 0;
		cout << userTry << " - Количество попыток." << endl;
		cin >> userNumber;
	}
}
