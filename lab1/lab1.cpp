#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //Переменные
    float x, z, t, y, e = exp(1.0);;

    //Ввод переменных с клавиатуры
    cout << "Введите число X: ";
    cin >> x;
    cout << "Введите число Z: ";
    cin >> z;
    cout << "Введите число T: ";
    cin >> t;

    //Формула
    y = fabs(pow(x, 3.0) - 10.0) * (atan(z+0.2) + pow(e, -(x / 2.0 + 3.0)));

    //Вывод результата
    cout << "\nРезультат: " << y;
    
    return 0;
}