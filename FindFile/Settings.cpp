#include "Settings.h"



Settings::Settings(int args, char* argv[]) 
  : arguments_(argv), argumentsSize_(args)
{
  parseArguments();
}


Settings::~Settings()
{
}

string * Settings::getSearchString()
{
  return nullptr;
}

string * Settings::getPath()
{
  return nullptr;
}

string * Settings::getOutputFileName()
{
  return nullptr;
}




int Settings::parseArguments()
{
  for (int i = 0; i < argumentsSize_; i++)
    cout << i << ":" << arguments_[i] << " ";
  cout << "\n";

  return 0;
}
