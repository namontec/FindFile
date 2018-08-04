#include "Application.h"



Application::Application()
{
}



Application::~Application()
{
}



int Application::Start(int args, char* argv[])
{
  if (args < 2)
  {
    std::cout << "Usage: findfile path\n";
    return 1;
  }

  return 0;
}
