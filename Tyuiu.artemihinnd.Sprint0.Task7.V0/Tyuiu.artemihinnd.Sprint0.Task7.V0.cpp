// Tyuiu.artemihinnd.Sprint0.Task7.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.artemihinnd.Sprint0.Task7.V0.Lib/Tyuiu.artemihinnd.Sprint0.Task7.V0.Lib.cpp"

using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int number; // 4-�-������� �����
    int digit;  // ��������� �����
    bool k = false; // ���������� ���������� ��� �������� ����������

    cout << "������� 4-�-������� �����: ";
    cin >> number;

    cout << "������� ����� ��� ������: ";
    cin >> digit;

    // ���������, ���������� �� ��������� ����� � �����
    while (number != 0) {
        int lastDigit = number % 10; // �������� ��������� ����� �����
        if (lastDigit == digit) {
            k = true; // ���� ����� �������, ������������� k � true
            break;    // ������� �� �����
        }
        number /= 10; // ������� ��������� ����� �� �����
    }

    // ������� ���������
    if (k) {
        cout << "����� " << digit << " ���������� � �����." << endl;
    }
    else {
        cout << "����� " << digit << " �� ���������� � �����." << endl;
    }

    return 0;
}