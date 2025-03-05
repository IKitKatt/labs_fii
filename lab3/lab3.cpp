#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); // Кодировка RU

    // Ввод числа
    int n;
    cout << "Введите натуральное число N: ";
    cin >> n;
    cout << "\n";

    int neg = 0; // Негативные числа
    float sum = 0; // Переменная для суммы

    for (int i = 1; i < n; i++) 
    {
        // Ввод числа А1....Аn
        float a;
        cout << "Введите число A" << i << ": ";
        cin >> a;

        // Отбор негативных
        if (a < 0)
        {
            neg++;
        }
        
        // Сумма диапазона
        if (a >= -5 && a <= 5)
        {
            sum += a;
        }
    }

    cout << "\nКоличество отрицательных членов: " << neg << endl;
    cout << "Сумма элементов в диапазоне [-5, 5]: " << sum << endl;

    return 0;
 
}
