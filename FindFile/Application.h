#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 
#include <boost/function.hpp>

#include "Settings.h"
#include "File.h"
#include "Command.h"
#include "Search.h"



class Application
{
public:
  Application();
  ~Application();

  int Start(int args, char* argv[]);

};

