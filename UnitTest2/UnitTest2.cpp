#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int Max = 0;
			const int n = 10;
			int a[n] = { 4, 7, 5, 9, 2, 23, 11, 8, 10, 3 };

			Assert::AreEqual(23, Max);

		}
	};
}
