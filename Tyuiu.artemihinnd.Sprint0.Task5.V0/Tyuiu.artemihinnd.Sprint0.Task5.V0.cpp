// Tyuiu.artemihinnd.Sprint0.Task5.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

		float a, b, c;

		cout << "������� ������" << "\n";
		cin >> a;
		cin >> b;

		c = sqrt(pow(a, 2) + pow(b, 2));
		cout << "����������" << c << endl;

		cout << "��������:" << a + b + c << endl;
		cout << "�������:" << (a * b) / 2 << endl;

		system("pause");
		return 0;
}