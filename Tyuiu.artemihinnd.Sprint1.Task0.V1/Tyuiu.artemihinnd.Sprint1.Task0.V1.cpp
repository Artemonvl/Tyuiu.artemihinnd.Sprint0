#include <iostream>

int main() {
    setlocale(LC_ALL, "RU");
    double length, width, height;

    // ������ ������������ ����� �����, ������ � ������ ���������������
    std::cout << "������� ����� ���������������: ";
    std::cin >> length;

    std::cout << "������� ������ ���������������: ";
    std::cin >> width;

    std::cout << "������� ������ ���������������: ";
    std::cin >> height;

    // ���������� ������ ���������������
    double volume = length * width * height;

    // ����� ����������
    std::cout << "����� ���������������: " << volume << std::endl;

    return 0;
}