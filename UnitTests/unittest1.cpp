#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
      Assert::AreEqual(1, 1);
      Assert::AreNotEqual(1, 2);

		}


    TEST_METHOD(TestMetod2)
    {
      Assert::AreEqual(1, 2);
    }

	};
}