// Tyuiu.artemihinnd.Sprint0.Task5.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	//Заданные длины катетов и гипотенузы
	double first_cathetus = 4.0;
	double second_cathetus = 5.0;
	double hypotenuse = 6.0;

	// Вычисление площади треугольника (по формцле Пифагора)
	double area = 0.5 * first_cathetus * second_cathetus;

	//Вычисление периметра треугольника
	double perimeter = first_cathetus + second_cathetus + hypotenuse;

    //Вывод результатов
	cout << "Сумма периметра и площади прямоугольного треугольника:" << endl;
	cout << "Площадь:" << area << "см^2" << endl;
	cout << "Периметр:" << perimeter << "см" << endl;

	return 0;
}
