#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU"); // Кодировка RU

    // Переменные
    int n, a, b, zero = 0, cur_zero = 0;

    // Вводим размер массива
    cout << "Введите размер массива: ";
    cin >> n;

    // Объявляем динамический массив
    int *mas = new int[n];

    // Генератор
    srand(time(0)); 

    // Диапазон случайных чисел
    cout << "\nВведите минимальное число: ";
    cin >> a;
    cout << "Введите максимальное число: ";
    cin >> b;

    // Заполнение массива случайными числами
    cout << "\nЧисла массива:\n";

    for (int i = 0; i < n; i++) 
    {
        mas[i] = rand() % (b - a + 1 ) + a;
        cout << mas[i] << " ";
    }
    cout << endl;

    // Поиск нулей
    for (int i = 0; i < n; i++)
    {
        if (mas[i] == 0)
        {
            cur_zero++;
            zero = max(zero, cur_zero);
        }
        else
        {
            cur_zero = 0;
        }
    }

    cout << "\nМаксимальное количество подряд идущих нулей: " << zero << endl;

    return 0;
}

