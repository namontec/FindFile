#include "File.h"


File::File()
{
}



File::~File()
{
  clear();
}



// Read file to memoryBuffer
int File::loadFile(const string& fileName)
{

  ifstream inputFile(fileName, ios::binary | ios::ate);

  if (inputFile.is_open()) {
    size_ = (unsigned int)inputFile.tellg();
    memoryBuffer_ = new char[size_];
    inputFile.seekg(0, ios::beg);
    inputFile.read(memoryBuffer_, size_);
    inputFile.close();
  }
  return 0;
}



// Read string to memoryBuffer
int File::loadString(const string & stringContent)
{
  size_ = stringContent.size() + 1;
  memoryBuffer_ = new char[size_];
  strcpy_s(memoryBuffer_, size_, stringContent.c_str()); 
  return 0;
}



char* File::getMemoryBuffer()
{
  return memoryBuffer_;
}



unsigned int File::getSize()
{
  return size_;
}




bool File::compare(File& fileToCompare)
{
  bool fileTooSmall = getSize() > fileToCompare.getSize();
  if (!fileTooSmall) {
    unsigned int iterations = fileToCompare.getSize() - getSize();
    for (unsigned int i = 0; i <= iterations; i++) {
      int result = memcmp(getMemoryBuffer(), fileToCompare.getMemoryBuffer() + i, getSize());
      if (result == 0) return true;        
    }
  }
  return false;
}




int File::clear()
{
  if (memoryBuffer_ != nullptr)
    delete memoryBuffer_;
  size_ = 0;
  return 0;
}
