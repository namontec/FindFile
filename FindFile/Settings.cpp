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

string * Settings::getFileMask()
{
  return &fileMask_;
}




int Settings::parseArguments()
{

  for (int i = 0; i < argumentsSize_ - 1; i++) {
    string command = arguments_[i];

    if (command == "-p")
      path_       = arguments_[++i];
    else if (command == "-m")
      fileMask_   = arguments_[++i];
    else if (command == "-i")
      inputFile_  = arguments_[++i];
    else if (command == "-o")
      outputFile_ = arguments_[++i];
  }

  return 0;
}
