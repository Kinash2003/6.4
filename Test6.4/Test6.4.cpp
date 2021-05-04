#include "pch.h"
#include "CppUnitTest.h"
#include "../6.4/6.4.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test64
{
	TEST_CLASS(Test64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			

			int a[5] = { 1, 1, 1, 1, 1 };
			Assert::AreEqual(Ordered(a, a + 5), true);
			
		}
	};
}
