#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "RU"); // Кодировка RU

    float x;
    cout << "Введите число: ";
    cin >> x;
    
    if (x <= 100) {
        cout << "Дробная часть: " << x - floor(x) << endl;
    } 
    else if (x > 100 && x <= 1000)
    {
        int roundedX = round(x); // Округление
        int reversed = 0; // Резерв
        
        // Разбивка числа на отдельные цифры
        int n1 = roundedX % 10;
        int n2 = (roundedX / 10) % 10;
        int n3 = (roundedX / 100) % 10;
        int n4 = (roundedX / 1000) % 10;
        
        if (roundedX >= 1000) 
        {
            reversed = n1 * 1000 + n2 * 100 + n3 * 10 + n4;
        } 
        else if (roundedX >= 100) {
            reversed = n1 * 100 + n2 * 10 + n3;
        } 
        else if (roundedX >= 10) {
            reversed = n1 * 10 + n2;
        } 
        else {
            reversed = n1;
        }
        
        cout << "Округленное число Х в обратном порядке: " << reversed << endl;
    }
    
    return 0;
}
