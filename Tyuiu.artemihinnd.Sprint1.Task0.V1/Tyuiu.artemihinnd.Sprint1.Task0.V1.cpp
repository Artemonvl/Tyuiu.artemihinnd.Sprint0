#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    double length, width, height;

    // Запрос пользователю ввода длины, ширины и высоты параллелепипеда
    std::cout << "Введите длину параллелепипеда: ";
    std::cin >> length;

    std::cout << "Введите ширину параллелепипеда: ";
    std::cin >> width;

    std::cout << "Введите высоту параллелепипеда: ";
    std::cin >> height;

    // Вычисление объема параллелепипеда
    double volume = length * width * height;

    // Вывод результата
    std::cout << "Объем параллелепипеда: " << volume << std::endl;

    return 0;
}