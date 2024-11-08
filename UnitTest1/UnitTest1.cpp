#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\admin\source\repos\Project__9.2.2\Project__9.2.2\lab_9.2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
#ifdef USE_INT
			int expected = 6;  
			int result = SUM_NUMBERS(3, 1, 2, 3);
			Assert::AreEqual(expected, result);
#else
			Assert::Fail(L"USE_INT is not defined.");
#endif
		}
	};
}
