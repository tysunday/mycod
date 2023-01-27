#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	setlocale(0, "");
	srand(time(NULL));
	int /*number1{ 1 + rand() % 10 }, number2{ 1 + rand() % 10 },*/ result{ 0 }, answer{ 0 }, countRepeat{ 10 },
		countGoodAnswer{ 0 };
		
	cout << "*************Рандомная викторина*************" << "\n";
	
	while (countRepeat != 0)

	{
		int number1{ 1 + rand() % 10 }, number2{ 1 + rand() % 10 };
		cout << "Ответьте на вопрос. Каков результат умножения:" << number1 << " на " << number2 << "\n";
		cin >> answer;
		result = number1 * number2;
		if (result == answer)
		{
			countRepeat--;
			countGoodAnswer += 1;
			cout << "Поздравляем! Вы ответили верно. \n";
		}
		else
		{
			countRepeat--;
			cout << "К сожалению ваш ответ неправильный \n";
		}
	}
	cout << countGoodAnswer << "\n";

	if (countGoodAnswer >= 8)
	{
		cout << "Вы знаток! Кол-во правильных ответов: " << countGoodAnswer << "\n";
	}
	else if (countGoodAnswer >= 5 && countGoodAnswer < 8)
	{
		cout << "Хороший результат! Кол-во правильных ответов: " << countGoodAnswer << "\n";
	}
	else
	{
		cout << "Ваше место в школе! Кол-во правильных ответов: " << countGoodAnswer << "\n";
	}




}

