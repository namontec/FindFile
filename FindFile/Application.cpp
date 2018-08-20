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
    std::cout << "Usage: ff.exe -p <path> -m <mask> -i <input file> -o <output file>\n";
    return 1;
  }


  Settings settings(args, argv);

  Search search(settings);

  return 0;
}
