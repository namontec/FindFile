#pragma once

#include <iostream>
#include <fstream>
#include <string>
//#include <boost/filesystem.hpp>

//using namespace boost::filesystem;

#include "Settings.h"


  class File
  {
  public:
    File();
    File(Settings& settings);
    ~File();

    vector<string>* getFilesList();
  };




