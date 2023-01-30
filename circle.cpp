//Пользователь вводит с клавиатуры диаметр окружности.
//Посчитать площадь и периметр окружности.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    long double circleDiameter = 0, area = 0, perimetr = 0, PI = 3.14159265358979323846, r = 0;

    cout << "Введите диаметр окружности\n"; cin >> circleDiameter;

    //S = d^2 : 4 × π, где d — это диаметр.

    area = pow(circleDiameter, 2) / 4 * PI;
    cout << "Площадь окружности: " << area << endl;

    //C = 2 · π · r , где C это периметр, r – радиус, π – число пи.
    
    r = circleDiameter / 2;
        perimetr = 2 * PI * r;
        cout << "Периметр окружности: " << perimetr << endl;
        


}

