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

  std::cout << argv[1] << " " << file_size(argv[1]) << '\n';
  return 0;
}
