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
  //std::cout << argv[1] << " " << file_size(argv[1]) << '\n';


  Settings settings(args, argv);
  File fileOperations(&settings);

  //vector<string>* filesList = fileOperations.getFilesList();
  //if (filesList->size == 0)
  //{
  //  return 1;
  //}

  Search search(&settings);

  return 0;
}
