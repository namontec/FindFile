#include "Directory.h"



Directory::Directory(const string& path)
{
  boost::filesystem::path p{ path };
  getDirectoryStructure(p, directory_);
}



Directory::~Directory()
{
}



const vector<string>& Directory::getDirectory()
{
  return directory_;
}



int Directory::getDirectoryStructure(const boost::filesystem::path& path, vector<string>& directory)
{
  boost::filesystem::path p { path };
  if (boost::filesystem::exists(p))
  {
    if (boost::filesystem::is_directory(p))
    {
      for (auto& x : boost::filesystem::directory_iterator(p))
      {

        // If directory - recurcively add to vector
        if (boost::filesystem::is_directory(x.path()))
        {
          getDirectoryStructure(x.path(), directory);
        }
        // If not directory - add to vector
        else {
          //boost::filesystem::path p1 = x.path();
          directory.push_back(boost::filesystem::canonical(x.path()).string());
        }


      }
    }
  }

  //directory.size();
  return 0;
}
