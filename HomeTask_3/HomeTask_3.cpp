#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float distance, consum, benz92, benz95, diesel,
        trip1,trip2,trip3;

    cout << "Введите растояние в км: \n";
    cin >> distance;
    cout << "Укажите расход топлива в литрах: \n";
    cin >> consum;
    cout << "Введите цену 92-го бензина: \n";
    cin >> benz92;
    cout << "Введите цену 95-го бензина: \n";
    cin >> benz95;
    cout << "Введите цену \"Дизеля\"\n";
    cin >> diesel;
    trip1 = (consum / 100) * distance * benz92;
    trip2 = (consum / 100) * distance * benz95;
    trip3 = (consum / 100) * distance * diesel;

    cout << "|Вид Топлива|Цена Поездки|\n";
    cout << "|    №92    |" << trip1 << "\n";
    cout << "|    №95    |" << trip2 << "\n";
    cout << "|  Дизель   |" << trip3 << "\n";



}

