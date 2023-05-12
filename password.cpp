#include <iostream>
#include <vector>

using namespace std;

bool is_password_valid(string password);

int main() {
	setlocale(LC_ALL, "Russian");
	string password;
	cout << R"(Пароль от некоторого сервиса должен удовлетворять таким ограничениям:

	состоять из символов таблицы ASCII с кодами от 33 до 126;
	быть не короче 8 символов и не длиннее 14;
	из 4 классов символов — большие буквы, маленькие буквы, цифры, прочие символы — 
	в пароле должны присутствовать не менее трёх любых.)" << endl;
	cout << "Введите пароль: " << endl;
	cin >> password;

	if (is_password_valid(password))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}


bool is_password_valid(string password) {
	bool flag = true;
	for (const char c : password)
	{
		if (!(c >= 33 && c <= 126)) {
			cout << c << " - не находится в промежутке 33 - 126 по таблицеA ASCII" << endl;
			cout << "Недопустимый символ..." << endl;
			flag = false;
			break;
		}
	}

	for (const char c : password) {
		if (password.size() < 8 || password.size() > 14)
		{
			cout << "Ваш пароль должен содержать от 8 до 14 символов" << endl;
			cout << "Количество символов в вашем пароле: " << password.size() << endl;
			flag = false;
			break;
		}
	}

	vector<bool> has_class(4, false);
	for (const char c : password) {
		if (has_class[0] != true && (c >= 'A' && c <= 'Z'))
			has_class[0] = true; // Большие буквы
		if (has_class[1] != true && (c >= 'a' && c <= 'z'))
			has_class[1] = true; // Маленькие буквы
		if (has_class[2] != true && (c >= '0' && c <= '9'))
			has_class[2] = true; // Цифры
		if (has_class[3] != true && (c >= '33' && c<= '47'))
			has_class[3] = true; // Прочие символы
	}

	short num_class = 0;
	for (bool has : has_class)
	{
		if (has == true) {
			num_class++;
			cout << "Ваш пароль должен содержать большие буквы и цифры." << endl;
		}
	}

	if (num_class < 3) {
		flag = false;
	}
	return flag;
}