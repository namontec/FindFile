#include "stdafx.h"
#include "CppUnitTest.h"

#include "../FindFile/Settings.h"

#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
  TEST_CLASS(SettingsTest)
  {
  public:

    TEST_METHOD(TestMethod4)
    {
      string* path = new string("c:\temp");

      char* argv[] = { "ff.exe", "-p", "c:\temp", "-m", ".", "-i", "string.txt", "-o", "result.txt", 0 };
      int args = 10;

      Settings* settings = new Settings(args, argv);

  
      
    }


  };
}