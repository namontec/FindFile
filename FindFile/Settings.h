#pragma once

#include<string>
#include<vector>
#include<iostream>

using namespace std;

class Settings
{
public:
  Settings(int args, char* argv[]);
  ~Settings();

  int parse();
  string* getSearchString();
  string* getPath();
  string* getOutputFileName();


private:
  int     parseArguments();


private:
  char**  arguments_;
  int     argumentsSize_;

  string* path_;
  string* searchString_;
  string* outputFile_;

};

