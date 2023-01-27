
#include <iostream> 
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int idGoods = 0,  countClient = 0, moreGoods = 0;
    double toyCar = 350.00, dool = 243.00, mimiMishka = 450.00, dozdik = 15.00, costs = 0,
        costsAll = 0, countGood = 0, countGood1 = 10, countGood2 = 15, countGood3 = 456, countGood4 = 1000, countGoodsAll = 0, countGoodRemainder = 0;
    int needs = 0;

        cout << "********Новогодний 1с. 1.0******** " << "\n";

        cout << "Сколько покупателей на кассе?" << "\n";
        cin >> countClient;

       while (countClient != 0)
        {
            cout << "Хотите воспользоваться нашим магазином? Y = 1 or N = 0 \n";
            cin >> needs;
            while (needs == 1)
            {
                countClient--;
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
                        /*countGood1 = countGood - countGood1;*/
                        if (countGood1 >= countGood /*|| countGood2 >= countGood || countGood3 >= countGood || countGood4 >= countGood*/)
                        {
                            costs = countGood * toyCar;
                            cout << "Вы выбрали " << idGoods << " в количестве: " << countGood; cout << " цена: " << costs << endl;
                            countGoodsAll = countGood + countGoodsAll;
                            costsAll = costs + costsAll;  
                            cout << "Количество всего товара равно: " << countGoodsAll << "\n";
                            cout << "Сумма за все покупки равна: " << costsAll << "\n";
                            cout << "Хотите продолжить покупки? Y = 1, N = 0 \n";
                            cin >> needs;
                        }
                        else /*(countGood1 <= countGood || countGood2 < countGood || countGood3 < countGood || countGood4 < countGood)*/
                        {
                           cout << "Товар указанный вами, недоступен для покупки, т.к. отсутствует необходимое кол-во (доступное количество: " << countGood1 << ") \n";\
                               cout << "Количество всего товара равно: " << countGoodsAll << "\n";
                    cout << "Сумма за все покупки равна: " << costsAll << "\n";
                    cout << "Хотите продолжить покупки? Y = 1, N = 0 \n";
                    cin >> needs;
                               
                        }
                    break;
                case 2:
                    if (countGood >= countGood)
                    {
                       
                        costs = countGood * dool;
                    }
                    else if (countGood2 < countGood)
                    {
                        
                        break;
                    }
                    break;
                case 3:
                    if (countGood3 >= countGood)
                    {
                        costs = countGood * mimiMishka;
                    }
                    else if (countGood3 < countGood)
                    {
                        
                        break;
                    }
                    break;
                case 4:
                    if (countGood4 >= countGood)
                    {
                        costs = countGood * dozdik;
                    }
                    else if (countGood4 < countGood)
                    {
                        
                        break;
                    } 
                    break;
                default:
                        break;
                } 

                    
                    
                    /*cout << "Количество всего товара равно: " << countGoodsAll << "\n";
                    cout << "Сумма за все покупки равна: " << costsAll << "\n";
                    cout << "Хотите продолжить покупки? Y = 1, N = 0 \n";
                    cin >> needs;*/
            } 
            break;
        }
}