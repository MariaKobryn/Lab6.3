#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab6.3\Lab6.3\Lab6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63
{
	TEST_CLASS(UnitTest63)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { 1, 2, 3,};
			int min = Min(a, 3);
			Assert::AreEqual(min, 1);

		}
	};
}
