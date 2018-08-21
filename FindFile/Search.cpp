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

    if (inputFile_.compare(inputFile2) == true) {
      outputFile << x << endl;
      countFound++;
    }
  }
  outputFile.close();

  return 0;
}




