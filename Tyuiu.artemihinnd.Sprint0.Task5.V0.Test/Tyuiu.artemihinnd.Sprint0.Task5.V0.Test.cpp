#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.artemihinnd.Sprint0.Task5.V0.Lib/Tyuiu.artemihinnd.Sprint0.Task5.V0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(TyuiuartemihinndSprint0Task5V0Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			//Init
			ISprint0Task5* service = new Service();
			int a = 4;
			int b = 5;
			int c = 6;

			//run
			c = service->Add(a, b);

			//valid
			Assert::AreEqual(25, c);

		}
	};
}
