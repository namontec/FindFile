#pragma once

#include "Settings.h"
#include "Directory.h"
#include "Settings.h"



  class Search
  {
  public:
    Search(Settings& settings);
    ~Search();

    int searchFile();
    int searchString();

  private:
    int searchBuffer();
    bool compare(char* input1, char* input2);
    unsigned int readFileToMemory(char* memoryBlock, const string& fileName);

  private:
    Settings& settings_;
    char* inputBuffer_;
  };

