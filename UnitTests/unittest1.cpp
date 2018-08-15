#include "stdafx.h"
#include "CppUnitTest.h"

#include "../FindFile/File.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
  TEST_CLASS(UnitTest1)
  {
  public:
    
    TEST_METHOD(__OTHERgetInputFileNameTest)
    {
      
      File* file = new File();
     
     

      Assert::AreEqual(1, 1);
      Assert::AreNotEqual(1, 2);

    }


    TEST_METHOD(__OTHERgetPath)
    {
      Assert::AreEqual(1, 2);
    }

  };
}