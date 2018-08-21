#include "Search.h"

#include <fstream>


Search::Search(Settings& settings) : settings_(settings)
{
}



Search::~Search()
{
  if (inputBuffer_)
    delete inputBuffer_;
}



int Search::searchFile()
{
  // Read Input file to memory (inputBuffer)
  double size = readFileToMemory(inputBuffer_, settings_.getInputFileName());

  searchBuffer();
  return 0;
}



int Search::searchString()
{
  // Read string to inputBuffer
  string istring = settings_.getInputString();
  int inputSize = istring.size() + 1;
  inputBuffer_   = new char[inputSize];
  strcpy_s(inputBuffer_, inputSize, istring.c_str());

  searchBuffer();
  return 0;
}



int Search::searchBuffer()
{
  ofstream outputFile(settings_.getOutputFileName());
  int countFound{ 0 };
  Directory dir(settings_.getPath());

  for (auto x : dir.getDirectory()) {
    char* inputBuffer2 = nullptr;
    readFileToMemory(inputBuffer2, x);

    if (compare(inputBuffer_, inputBuffer2) == true) {
      outputFile << x << endl;
      countFound++;
    }

    if (inputBuffer2 != nullptr) delete inputBuffer2;
  }
  outputFile.close();

  return 0;
}



bool Search::compare(char * input1, char * input2)
{


  return false;
}


// Read file to memory, return size of memory block
unsigned int Search::readFileToMemory(char * memoryBlock, const string & fileName)
{
  ifstream inputFile(fileName, ios::binary | ios::ate);

  if (inputFile.is_open()) {
    streampos inputSize = inputFile.tellg();
    memoryBlock = new char[(unsigned int)inputSize];
    inputFile.seekg(0, ios::beg);
    inputFile.read(memoryBlock, inputSize);
    inputFile.close();
    return (unsigned int)inputSize;
  }
  return 0;
}
