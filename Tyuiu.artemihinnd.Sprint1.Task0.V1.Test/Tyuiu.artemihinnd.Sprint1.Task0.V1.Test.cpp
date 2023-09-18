#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.artemihinnd.Sprint1.Task0.V1.Lib/Tyuiu.artemihinnd.Sprint1.Task0.V1.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Testik0
{
	TEST_CLASS(Testik0)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// Init
			ISprint1Task0V00 date = new service();
			int a = 3;
			int b = 4;
			int h = 5;
			int V;

			//run
			V = date Add(a, b, h);

			// Valid
			Assert::AreEqual(60, V);
		}
	};
}
