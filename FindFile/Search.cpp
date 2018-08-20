#include "Search.h"

#include <fstream>


Search::Search(Settings& settings)
{
  ofstream outputFile(settings.getOutputFileName());
  ifstream inputFile(settings.getOutputFileName(), ios::binary | ios::in);

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

int Search::SearchFromFile()
{
  return 0;
}

int Search::SearchFromString()
{
  return 0;
}

int Search::SearchFromBuffer()
{
  return 0;
}
