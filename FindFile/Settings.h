#pragma once

#include<string>
#include<vector>
#include<map>
#include<iostream>

using namespace std;

class Settings
{
public:
  Settings(int args, char* argv[]);
  ~Settings();

  int parse();
  string* getInputFileName();
  string* getPath();
  string* getOutputFileName();


private:
  int     parseArguments();


private:
  char**  arguments_;
  int     argumentsSize_;

  string  path_       = "./";
  string  fileMask_   = "*.*";
  string  inputFile_;
  string  outputFile_ = "results.txt";

};

