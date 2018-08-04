#pragma once

#include <iostream>
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

