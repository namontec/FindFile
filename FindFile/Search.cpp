#include "Search.h"

#include <fstream>


Search::Search(Settings& settings)
{
  ofstream outputFile(settings.getOutputFileName());

  // Read Input file to memory (search data)
  ifstream inputFile(settings.getInputFileName, ios::binary | ios::ate);
  streampos inputSize;
  char* inputBuffer;
  if (inputFile.is_open())
  {
    inputSize   = inputFile.tellg;
    inputBuffer = new char[inputSize];
    inputFile.seekg(0, ios::beg);
    inputFile.read(inputBuffer, inputSize);
    inputFile.close();
  }

  Directory dir(settings.getPath());
  int countFound{ 0 };
  for (auto x : dir.getDirectory())
  {
    //cout << x << endl;
    outputFile << x << endl;
    countFound++;
    //std::search(;
  }

  outputFile.close();
  
  cout << "Found: " << countFound << endl;
    //vector<string>* filesList = fileOperations.getFilesList();
    //if (filesList->size == 0)
    //{
    //  return 1;
    //}
}


Search::~Search()
{
}

int Search::searchFile()
{
  return 0;
}

int Search::searchString()
{
  return 0;
}

int Search::searchBuffer()
{
  return 0;
}
