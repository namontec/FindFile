#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 

#include "Settings.h"
#include "Search.h"
#include "Directory.h"



class Application
{
public:
  Application();
  ~Application();

  int start(int args, char* argv[]);

};

