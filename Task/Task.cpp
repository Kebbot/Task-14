#include <iostream>
#include <windows.h>
#include <math.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Rus");
    int howPeople, menu = 0, napID, kakeID, sum;
    int quanPep1, quanPep2, quanPep3, quanPep4;
    int sumNap = 0, sumKake = 0, sumOnePep;
    double nap1, nap2, nap3, nap4, nap5, nap6;
    double kake1, kake2, kake3, kake4;

    //Напитки
    nap1 = 90; //кола
    nap2 = 90; //спрайт
    nap3 = 60; //чай
    nap4 = 70; //кофе
    nap5 = 50; //сок
    nap6 = 40; //минеральная вода

    //кондитерски изделия
    kake1 = 150; //тортик 100г
    kake2 = 200; //венкские вафли
    kake3 = 300; //чизкейк
    kake4 = 100; //круасан
    cout << "Сколько людей пришло?:\n";
    cin >> howPeople;

    if (howPeople > 0)
    {
        for (int i = 1; i <= howPeople; i++)
        {
            do
            {
                cout << "Меню для клиента номер: " << i << endl;
                cout << "1. Напитки.\n";
                cout << "2. Кондитерские изделия.\n";
                cout << "3. Завершить.\n";
                sumOnePep = 0;
                cin >> menu;

                switch (menu)
                {
                case 1: // Напитки
                {
                    cout << "1. Кола = 90 руб\n";
                    cout << "2. Спрайт = 90 руб\n";
                    cout << "3. Чай = 60 руб\n";
                    cout << "4. Кофе = 70 руб\n";
                    cout << "5. Сок = 50 руб\n";
                    cout << "6. Минеральная вода = 40 руб\n";
                    cin >> napID;
                    switch (napID)
                    {
                    case 1:
                    {
                        napID = nap1;
                        cout << "Введите количество: ";
                        cin >> quanPep2;
                        break;
                    }
                    case 2:
                    {
                        napID = nap2;
                        cout << "Введите количество: ";
                        cin >> quanPep2;
                        break;
                    }
                    case 3:
                    {
                        napID = nap3;
                        cout << "Введите количество: ";
                        cin >> quanPep2;
                        break;
                    }
                    case 4:
                    {
                        napID = nap4;
                        cout << "Введите количество: ";
                        cin >> quanPep2;
                        break;
                    }
                    case 5:
                    {
                        napID = nap5;
                        cout << "Введите количество: ";
                        cin >> quanPep2;
                        break;
                    }
                    case 6:
                    {
                        napID = nap6;
                        cout << "Введите количество: ";
                        cin >> quanPep2;
                        break;
                    }

                    }
                    sumNap = sumNap + (napID * quanPep2);
                    break;
                }

                case 2: // Кондитерские изделия
                {
                    cout << "1. Тортик 100г = 150 руб\n";
                    cout << "2. Венские вафли 3шт = 200 руб\n";
                    cout << "3. Чизкейк = 300 руб\n";
                    cout << "4. Круасан = 100 руб\n";
                    cin >> kakeID;
                    switch (kakeID)
                    {
                    case 1:
                    {
                        kakeID = kake1;
                        cout << "Введите количество: ";
                        cin >> quanPep1;
                        break;
                    }
                    case 2:
                    {
                        kakeID = kake2;
                        cout << "Введите количество: ";
                        cin >> quanPep1;
                        break;
                    }
                    case 3:
                    {
                        kakeID = kake3;
                        cout << "Введите количество: ";
                        cin >> quanPep1;
                        break;
                    }
                    case 4:
                    {
                        kakeID = kake4;
                        cout << "Введите количество: ";
                        cin >> quanPep1;
                        break;
                    }

                    }
                    sumKake = sumKake + kakeID * quanPep1;
                    break;
                }

                case 3:
                {
                    sumOnePep = sumKake + sumNap;
                    cout << "Заказ завершен" << endl;
                    cout << "Сумма заказа на данный момент = " << sumOnePep << endl;
                    break;
                }

                }




            } while (menu < 3);


        }
        cout << "Общаяя сумма заказа: " << sumOnePep << endl;
        cout << "Приятного аппетита!";
    }
    else
    {
        cout << "Никто не пришел да? Чел ты......";
    }
    return 0;
}
