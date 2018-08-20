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
  ifstream inputFile(settings_.getInputFileName(), ios::binary | ios::ate);

  if (inputFile.is_open()) {
    streampos inputSize = inputFile.tellg();
    inputBuffer_ = new char[inputSize];
    inputFile.seekg(0, ios::beg);
    inputFile.read(inputBuffer_, inputSize);
    inputFile.close();
  }
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
  Directory dir(settings_.getPath());
  int countFound{ 0 };
  for (auto x : dir.getDirectory())
  {
    outputFile << x << endl;
    countFound++;
  }

  outputFile.close();
  cout << "Found: " << countFound << endl;
 
  return 0;
}
