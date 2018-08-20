#pragma once

#include <vector>
#include <algorithm>
#include <string>
#include <iostream>
#include <boost/filesystem.hpp>

using namespace std;

class Directory
{
public:
  Directory(const string& path);
  ~Directory();

  const vector<string>& getDirectory();

private:
  int getDirectoryStructure(const boost::filesystem::path& path, vector<string>& directory);

private:
  vector<string> directory_;
};

