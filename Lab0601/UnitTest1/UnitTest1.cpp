#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab0601/Lab0601.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int a [10]  = { 5, 7, 10, 14, 15, 13, 16, 9, 4, 11 };
			t = unittest(a, 2, 3);
			Assert::AreEqual(t, 4);
		}
	};
}
