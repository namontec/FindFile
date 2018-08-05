#pragma once


#include <iostream>
#include <fstream>
#include <string>
#include <boost/filesystem.hpp>

#include "Settings.h"

using namespace boost::filesystem;



class File
{
public:
  File(Settings& settings);
  ~File();

  vector<string>* getFilesList();
};

