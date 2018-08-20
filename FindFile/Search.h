#pragma once

#include "Settings.h"
#include "File.h"
#include "Directory.h"



  class Search
  {
  public:
    Search(Settings& settings);
    ~Search();

    int SearchFromFile();
    int SearchFromString();
    int SearchFromBuffer();
  };

