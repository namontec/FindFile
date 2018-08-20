#include "stdafx.h"
#include "CppUnitTest.h"

#include "../FindFile/Directory.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{		
  TEST_CLASS(DirectoryTest)
  {
  public:
    
    TEST_METHOD(getDirectory)
    {
      
     // File* file = new File();
     
      std::string path = "./";
      Directory dir(path);
      auto dirResult = dir.getDirectory();

      Assert::AreNotEqual( (size_t)0, dirResult.size() );

    }


  };
}