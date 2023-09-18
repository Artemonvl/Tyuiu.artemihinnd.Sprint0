// Tyuiu.artemihinnd.Sprint1.Task0.V1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class service :public ISprint1Task0V00
{

	// Inherited via ISprint0Task3V0
	virtual int Add(int a, int b, int h) override
	{
		return a * b * h; //решение

	};


};
