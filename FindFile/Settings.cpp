#include "Settings.h"



Settings::Settings(int args, char* argv[]) 
  : arguments_(argv), argumentsSize_(args)
{
  parseArguments();
}


Settings::~Settings()
{
}

string* Settings::getInputFileName()
{
  return &inputFile_;
}

string* Settings::getPath()
{
  return &path_;
}

string* Settings::getOutputFileName()
{
  return &outputFile_;
}




int Settings::parseArguments()
{

  for (int i = 0; i < argumentsSize_ - 1; i++)
  {
    //cout << i << ":" << arguments_[i] << " ";
    //string forTest = arguments_[i];
    //cout << "[" << forTest << "] ";

    if (forTest == "-p")
      path_ = arguments_[++i];
    else if (forTest == "-m")
      fileMask_ = arguments_[++i];
    else if (forTest == "-i")
      inputFile_ = arguments_[++i];
    else if (forTest == "-o")
      outputFile_ = arguments_[++i];
  }

  return 0;
}
