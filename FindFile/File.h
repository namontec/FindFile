#pragma once

#include <string>
#include <fstream>

using namespace std;

class File
{
public:
  File();
  ~File();

  int loadFile(const string& fileName);
  int loadString(const string& stringContent);
  char* getMemoryBuffer();
  unsigned int getSize();
  bool compare(File& fileToCompare);
  int clear();

private:
  char* memoryBuffer_;
  unsigned int size_;

};

