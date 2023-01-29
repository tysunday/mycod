#include <iostream> 
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int idGoods = 0, countClient = 0, moreGoods = 0;
    double toyCar = 350.00, dool = 243.00, mimiMishka = 450.00, dozdik = 15.00, costs = 0,
        costsAll = 0, countGood = 0, countGood1 = 10, countGood2 = 15, countGood3 = 456, countGood4 = 1000, countGoodsAll = 0, revenue = 0;
    int countGood1Buy = 0, countGood2Buy = 0, countGood3Buy = 0, countGood4Buy = 0;
    int needs = 0;

    cout << "********Новогодний 1с. 1.0******** " << "\n";

    cout << "Сколько покупателей на кассе?" << "\n";
    cin >> countClient;

    while (countClient != 0)
    {
        cout << "Здравствуйте, желаете воспользоваться магазином? Y = 1 or N = 0 \n";
        cin >> needs;
        while (needs == 1 && needs != 0)
        {

            cout << R"(
Выберите товар из списка:
1 - Игрушечная машинка: Цена 350.00 р.
2 - Кукла: Цена 243.00 р.
3 -  МиМиМишка: Цена 450.00 р.
4 - Дождик "Новогодний": Цена 15.00 р.
                )" << "\n";

            cin >> idGoods;
            cout << "Введите его количество \n";
            cin >> countGood;

            switch (idGoods)
            {
            case 1:
                if (countGood1 >= countGood && countGood1 != 0)
                {
                    costs = countGood * toyCar;
                    cout << "Вы выбрали " << idGoods << " в количестве: " << countGood; cout << " цена: " << costs << endl;
                    countGoodsAll = countGood + countGoodsAll;
                    costsAll = costs + costsAll;
                    countGood1 = countGood1 - countGood;
                    countGood1Buy = countGood1Buy + countGood;
                    countGood = 0;
                }
                else
                {
                    cout << "Товар указанный вами, недоступен для покупки, т.к. отсутствует необходимое кол-во (доступное количество: " << countGood1 << ") \n";
                }
                break;
            case 2:
                if (countGood2 >= countGood && countGood2 != 0)
                {
                    costs = countGood * dool;
                    cout << "Вы выбрали " << idGoods << " в количестве: " << countGood; cout << " цена: " << costs << endl;
                    countGoodsAll = countGood + countGoodsAll;
                    costsAll = costs + costsAll;
                    countGood2 = countGood2 - countGood;
                    countGood2Buy = countGood2Buy + countGood;
                    countGood = 0;
                }
                else
                {
                    cout << "Товар указанный вами, недоступен для покупки, т.к. отсутствует необходимое кол-во (доступное количество: " << countGood2 << ") \n";
                }
                break;
            case 3:
                if (countGood3 >= countGood && countGood3 != 0)
                {
                    costs = countGood * mimiMishka;
                    cout << "Вы выбрали " << idGoods << " в количестве: " << countGood; cout << " цена: " << costs << endl;
                    countGoodsAll = countGood + countGoodsAll;
                    costsAll = costs + costsAll;
                    countGood3 = countGood3 - countGood;
                    countGood3Buy = countGood3Buy + countGood;
                    countGood = 0;
                }
                else
                {
                    cout << "Товар указанный вами, недоступен для покупки, т.к. отсутствует необходимое кол-во (доступное количество: " << countGood3 << ") \n";
                }
                break;
            case 4:
                if (countGood4 >= countGood && countGood4 != 0)
                {
                    costs = countGood * dozdik;
                    cout << "Вы выбрали " << idGoods << " в количестве: " << countGood; cout << " цена: " << costs << endl;
                    countGoodsAll = countGood + countGoodsAll;
                    costsAll = costs + costsAll;
                    countGood4 = countGood4 - countGood;
                    countGood4Buy = countGood4Buy + countGood;
                    countGood = 0;
                }
                else
                {
                    cout << "Товар указанный вами, недоступен для покупки, т.к. отсутствует необходимое кол-во (доступное количество: " << countGood4 << ") \n";
                }
                break;
            default:
                cout << "Вы ввели id несуществующего товара. \n";
                cout << "Хотите попробовать ещё раз? Y = 1, N = 0 \n";
                cin >> needs;
                break;
            }
            cout << "Количество всего товара равно: " << countGoodsAll << "\n";
            cout << "Сумма за все покупки равна: " << costsAll << "\n";
            cout << "Хотите продолжить покупки? Y = 1, N = 0 \n";
            cin >> needs;
            cout << endl;
        }
        if (costsAll > 1000 || countGoodsAll > 20)
        {
            cout << "Т.к. сумма ваших товаров больше 1000 рублей и количество больше 20, вам положена скидка 5%\n";
            costsAll = costsAll - costsAll * 0.05;
        }
        cout << "Сумма всех покупок равна: " << costsAll << endl;
        cout << "Вы купили: ";
        if (countGood1Buy > 0) {
            cout << "Игрушка: \"Машинка\" в кол-ве " << countGood1Buy << endl;
        }
        if (countGood2Buy > 0) {
            cout << "Игрушка: \"Кукла\" в кол-ве " << countGood2Buy << endl;
        }
        if (countGood3Buy > 0) {
            cout << "Игрушка: \"Мимимишка\" в кол-ве " << countGood3Buy << endl;
        }
        if (countGood4Buy > 0) {
            cout << "Игрушка: \"Дождик\" в кол-ве " << countGood4Buy << endl;
        }
        cout << "Приходите ещё!\n" << endl;
        revenue = costsAll + revenue;
        costsAll = 0;
        countGood1Buy = 0;
        countGood2Buy = 0;
        countGood3Buy = 0;
        countGood4Buy = 0;
        countGoodsAll = 0;
    
        countClient--;    
    }
    cout << "Клиентов больше не осталось =( " << endl;
    cout << "Выручка составила: " << revenue << endl;
    cout << "Товаров осталось: " << endl;
        cout << "Машинок: " << countGood1 << endl;
        cout << "Кукол: " << countGood2 << endl;
        cout << "Мимишек: " << countGood3 << endl;
        cout << "Дождиков: " << countGood4 << endl;
        
}