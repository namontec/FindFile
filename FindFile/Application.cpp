#include "Application.h"



Application::Application()
{

}



Application::~Application()
{
}



int Application::start(int args, char* argv[])
{
  if (args < 2) {
    std::cout << "Usage: ff.exe -p <path> -m <mask> -i <input file> -o <output file>\n";
    return 1;
  }

  Settings settings(args, argv);

  Search search(settings);
  if (settings.getInputString() != "") {
    search.searchString();
  }
  else {
    search.searchFile();
  }



  return 0;
}
