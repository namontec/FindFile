#include "Search.h"

#include <fstream>


Search::Search(Settings& settings)
{
  ofstream outputFile(settings.getOutputFileName());
  ifstream inputFile; // (settings.getInputFileName);

  Directory dir(settings.getPath());
  int countFound{ 0 };
  for (auto x : dir.getDirectory())
  {
    //cout << x << endl;
    outputFile << x << endl;
    countFound++;
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
