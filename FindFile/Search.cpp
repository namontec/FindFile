#include "Search.h"
#include <fstream>



Search::Search(Settings& settings) : settings_(settings)
{
  if (settings_.getInputString() != "") {
    inputFile_.loadString(settings_.getInputString());
  }
  else {
    inputFile_.loadFile(settings_.getInputFileName());
  }

  searchBuffer();
}



Search::~Search()
{

}




int Search::searchBuffer()
{
  ofstream outputFile(settings_.getOutputFileName());
  int countFound{ 0 };
  Directory dir(settings_.getPath());

  for (auto x : dir.getDirectory()) {
    File inputFile2;
    inputFile2.loadFile(x);
    cout << x << endl;

    if (inputFile_.compare(inputFile2) == true) {
      outputFile << x << endl;
      countFound++;
    }
  }

  outputFile << "Found: " << countFound << endl;
  outputFile.close();

  return 0;
}




