// Tyuiu.artemihinnd.Sprint0.Task7.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.artemihinnd.Sprint0.Task7.V0.Lib/Tyuiu.artemihinnd.Sprint0.Task7.V0.Lib.cpp"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int number; // 4-х-значное число
    int digit;  // Введенная цифра
    bool k = false; // Логическая переменная для хранения результата

    cout << "Введите 4-х-значное число: ";
    cin >> number;

    cout << "Введите цифру для поиска: ";
    cin >> digit;

    // Проверяем, содержится ли введенная цифра в числе
    while (number != 0) {
        int lastDigit = number % 10; // Получаем последнюю цифру числа
        if (lastDigit == digit) {
            k = true; // Если цифра найдена, устанавливаем k в true
            break;    // Выходим из цикла
        }
        number /= 10; // Убираем последнюю цифру из числа
    }

    // Выводим результат
    if (k) {
        cout << "Цифра " << digit << " содержится в числе." << endl;
    }
    else {
        cout << "Цифра " << digit << " не содержится в числе." << endl;
    }

    return 0;
}