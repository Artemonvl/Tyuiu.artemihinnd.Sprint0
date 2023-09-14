// Tyuiu.artemihinnd.Sprint0.Task3.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.artemihinnd.Sprint0.Task3.V0.Lib/Tyuiu.artemihinnd.Sprint0.Task3.V0.Lib.cpp"

using namespace std;
int main()
{
	ISprint0Task3* date = new Service();
	cout << "artemihinnd\n";
	cout << "P = a+b+c\n";
	cout << "Rezult ="<< date -> Add(10, 8, 7);
	cout << endl;
}