//Грузовой самолет должен пролететь с грузом из пункта A в пункт С через пункт В. Емкость бака для топлива у самолета — 300 литров.
//Потребление топлива на 1 км в зависимости от веса груза у самолета следующее :
//■ до 500 кг — 1 литров / км;
//■ до 1000 кг — 4 литров / км;
//■ до 1500 кг — 7 литров / км;
//■ до 2000 кг — 9 литров / км;
//■ более 2000 кг — самолет не поднимает.
//Пользователь вводит расстояние между пунктами А и В,
//и расстояние между пунктами В и С, а также вес груза.Программа должна рассчитать какое минимальное количество
//топлива необходимо для дозаправки самолету в пункте В,
//чтобы долететь из пункта А в пункт С.В случае невозможности преодолеть любое из расстояний — программа должна
//вывести сообщение о невозможности полета по введенному
//маршруту.

#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    float a_b = 0, b_c = 0; // расстояние от пункта А до Б и от пункта Б до С соответственно
    float fuel_tank = 300.00; // ёмкость бака с топливом
    float weight = 0; // вес груза
    float fuel_1 = 0, fuel_2 = 0, refuel = 0, refuel_1 = 0, refuel_2 = 0;
    // затраченное топливо на первый и второй машрут соответственно
   
    cout << "Введите расстояние между пунктами A и B: "; cin >> a_b;

    cout << "Введите расстояние между пунктами В и С: "; cin >> b_c;
   
    cout << "Введите вес груза: "; cin >> weight;

    if (weight >= 0 && weight < 500)
    {
     
        fuel_1 = a_b * 1;
        fuel_2 = b_c * 1;

        if (fuel_1 <= fuel_tank && fuel_2 <= fuel_tank)
        {
            cout << "Необходимо будет заправиться в контрольном пункте B на: " << fuel_1 << " литров\n";
            cout << "Мы потратим " << fuel_2 << " литров топлива на перелёт с пункта В в пункт С\n";
        }
        else if (fuel_1 > fuel_tank)
        {
            cout << "Нам не хватает ёмкости бака на дистанции от пункта А до пункта В\n";
            cout << "Не хватает: " << fuel_1 - fuel_tank << " литров" << endl;
        }
        else if (fuel_2 > fuel_tank)
        {
            cout << "Нам не хватает ёмкости бака на дистанции от пункта В до пункта С\n";
            cout << "Не хватает: " << fuel_2 - fuel_tank << " литров" << endl;
        }
    }
    else if (weight >= 500 && weight < 1000)
    {

        fuel_1 = a_b * 4;
        fuel_2 = b_c * 4;

        if (fuel_1 <= fuel_tank && fuel_2 <= fuel_tank)
        {
            cout << "Необходимо будет заправиться в контрольном пункте B на: " << fuel_1 << " литров\n";
            cout << "Мы потратим " << fuel_2 << " литров топлива на перелёт с пункта В в пункт С\n";
        }
        else if (fuel_1 > fuel_tank)
        {
            cout << "Нам не хватает ёмкости бака на дистанции от пункта А до пункта В\n";
            cout << "Не хватает: " << fuel_1 - fuel_tank << " литров" << endl;
        }
        else if (fuel_2 > fuel_tank)
        {
            cout << "Нам не хватает ёмкости бака на дистанции от пункта В до пункта С\n";
            cout << "Не хватает: " << fuel_2 - fuel_tank << " литров" << endl;
        }
    }
    else if (weight >= 1000 && weight < 1500)
    {

        fuel_1 = a_b * 7;
        fuel_2 = b_c * 7;

        if (fuel_1 <= fuel_tank && fuel_2 <= fuel_tank)
        {
            cout << "Необходимо будет заправиться в контрольном пункте B на: " << fuel_1 << " литров\n";
            cout << "Мы потратим " << fuel_2 << " литров топлива на перелёт с пункта В в пункт С\n";
        }
        else if (fuel_1 > fuel_tank)
        {
            cout << "Нам не хватает ёмкости бака на дистанции от пункта А до пункта В\n";
            cout << "Не хватает: " << fuel_1 - fuel_tank << " литров" << endl;
        }
        else if (fuel_2 > fuel_tank)
        {
            cout << "Нам не хватает ёмкости бака на дистанции от пункта В до пункта С\n";
            cout << "Не хватает: " << fuel_2 - fuel_tank << " литров" << endl;
        }
    }
    else if (weight >= 1500 && weight <= 2000)
    {

        fuel_1 = a_b * 9;
        fuel_2 = b_c * 9;

        if (fuel_1 <= fuel_tank && fuel_2 <= fuel_tank)
        {
            cout << "Необходимо будет заправиться в контрольном пункте B на: " << fuel_1 << " литров\n";
            cout << "Мы потратим " << fuel_2 << " литров топлива на перелёт с пункта В в пункт С\n";
        }
        else if (fuel_1 > fuel_tank)
        {
            cout << "Нам не хватает ёмкости бака на дистанции от пункта А до пункта В\n";
            cout << "Не хватает: " << fuel_1 - fuel_tank << " литров" << endl;
        }
        else if (fuel_2 > fuel_tank)
        {
            cout << "Нам не хватает ёмкости бака на дистанции от пункта В до пункта С\n";
            cout << "Не хватает: " << fuel_2 - fuel_tank << " литров" << endl;
        }
    }
    else
    {
        cout << "Необходимо сбросить груз, при таком весе мы не взлетим \n";
        cout << "Необходимо сбросить: " << abs (2000 - weight); /* здесь я ввёл модуль
        очень удивился что не понадобилась math библиотека, и так всё работает*/
    }
   /*  программа считает необходимое количество топлива по дистанции на всех её промежутках, и так же предельный вес
    при котором может взлететь самолёт, и выводит подсчёты и предупреждения на экран*/
    /* я буквально сделал шаблон if else для веса от 0 до 500 и вбил необходимые мне параметры для этого случая,
    уже дальше я копировал и вставил ещё 3 таких же действия только для разных весов и в конце в команду else
    я вбил предельный вес и вывел на экран сколько нужно сбросить веса чтоб самолёт взлетел*/
}

