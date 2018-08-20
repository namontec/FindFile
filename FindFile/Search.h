#pragma once

#include "Settings.h"
#include "Directory.h"



  class Search
  {
  public:
    Search(Settings& settings);
    ~Search();

    int searchFile();
    int searchString();

  private:
    int searchBuffer();
  };

