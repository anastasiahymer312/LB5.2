#include "pch.h"
#include "CppUnitTest.h"
#include "../LB5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double result = A(0.9, 2, 0.9);
			Assert::AreEqual(result, -0.54, 0.1);
		}
	};
}
