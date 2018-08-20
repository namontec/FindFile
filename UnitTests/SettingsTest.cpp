#include "stdafx.h"
#include "CppUnitTest.h"

#include "../FindFile/Settings.h"

#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
  TEST_CLASS(SettingsTest)
  {

  private:
    string path           { "c:\temp" };
    string fileMask       { "*.txt" };
    string inputFileName  { "string.txt" };
    string InputString    { "Hello world" };
    string outputFileName {"result.txt"};


    char* argv[12] { "ff.exe", "-p", "c:\temp", "-m", "*.txt", "-i", "string.txt", "-is", "Hello world", "-o", "result.txt", 0 };
    int args = 12;


  public:

    TEST_METHOD(getPath)
    {
      Settings settings(args, argv);
      Assert::AreEqual( path, (settings.getPath()) );  
      Assert::AreNotEqual(path, "_" + (settings.getPath()) );
    }



    TEST_METHOD(getInputFileName)
    {
      Settings settings(args, argv);
      Assert::AreEqual(inputFileName, (settings.getInputFileName()));
      Assert::AreNotEqual(inputFileName, "_" + (settings.getInputFileName()));
    }


    TEST_METHOD(getInputString)
    {
      Settings settings(args, argv);
      Assert::AreEqual(InputString, (settings.getInputString()));
      Assert::AreNotEqual(InputString, "_" + (settings.getInputString()));
    }


    TEST_METHOD(getOutputFileName)
    {
      Settings settings(args, argv);
      Assert::AreEqual(outputFileName, (settings.getOutputFileName()));
      Assert::AreNotEqual(outputFileName, "_" + (settings.getOutputFileName()));
    }


    TEST_METHOD(getFileMask) 
    {
      Settings settings(args, argv);
      Assert::AreEqual(fileMask, (settings.getFileMask()));
      Assert::AreNotEqual(fileMask, "_" + (settings.getFileMask()));
    }

  };
}