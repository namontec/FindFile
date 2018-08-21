#include "stdafx.h"
#include "CppUnitTest.h"

#include "../FindFile/File.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
  TEST_CLASS(FileTest)
  {
  public:
    
    TEST_METHOD(loadString)
    {
      
      File file;
      string testString{ "test" };

      file.loadString(testString);

      Assert::AreEqual(4, (int)file.getSize());

    }



  };
}