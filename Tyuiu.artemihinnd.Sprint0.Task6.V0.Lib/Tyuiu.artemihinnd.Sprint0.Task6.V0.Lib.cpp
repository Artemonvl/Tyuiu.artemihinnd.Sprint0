// Tyuiu.artemihinnd.Sprint0.Task6.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class service :public ISprint0Task6

{
	//inherited via ISprint0Task5
	virtual int add(int a, int b, int c) override;
};