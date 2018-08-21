#pragma once

#include "Settings.h"
#include "Directory.h"
#include "File.h"




  class Search
  {
  public:
    Search(Settings& settings);
    ~Search();

    int searchBuffer();

    bool compare(const File & file1, const File & file2);

  private:
    Settings& settings_;
    File inputFile_;
  };

