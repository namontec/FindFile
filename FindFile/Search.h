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

  private:
    Settings& settings_;
    char* inputBuffer_;
  };

