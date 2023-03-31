#include <iostream>
using namespace std;

class FirstClass
{
public:
	void setData(int d) {
		data = d;
	}

	void showData() {
		cout << "Значение поля: " << data << endl;;
	}

	void getHello() {
		hello();
	}

private:
	int data;
	void hello() {
		cout << "Hello world \n";
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");
	FirstClass variable1, variable2;

	//variable1.setData(5);
	//variable2.setData(9);
	//variable1.showData();
	//variable2.showData();

	variable1.getHello();
}