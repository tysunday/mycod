#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int ch = 0;

	while (true)
	{
		ch = _getch();
		switch (char(ch)) {
		case 72:
			cout << ch << " " << (char)ch << "\n";
			cout << "UP" << endl;
			break;
		case 75:
			cout << ch << " " << (char)ch << "\n";
			cout << "LEFT" << endl;
			break;
		case 77:
			cout << ch << " " << (char)ch << "\n";
			cout << "RIGHT" << endl;
			break;
		case 80:
			cout << ch << " " << (char)ch << "\n";
			cout << "DOWN" << endl;
			break;
		default:
			cout << ch << " " << (char)ch << "\n";
		}
	}
	// ОБЯЗАТЕЛЬНО СТАВИТЬ ОПЕРАТОР BREAK ПОСЛЕ КАЖДОГО КЕЙСА ИНАЧЕ БУДУТ ОТОБРАЖАТЬСЯ СРАЗУ НЕСКОЛЬКО КЕЙСОВ
	// (ТЕХ ЧТО НИЖЕ ВЫБРАННОГО) И УКАЗЫВАТЬ ЕЩЁ (CHAR) в скобках перед переменной тоже важно.
	// через cout в default можно видеть более подробную информацию о клавише которая вводится.
}

