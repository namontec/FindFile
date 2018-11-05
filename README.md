# FindFile
#### version: 0.2
Command line utility for searching string in files and folders
## Build
Uses `boost/filesystem`. You need install it to compile. I recommed use `vcpkg` to install boost.

`git clone https://github.com/namontec/FindFile.git`

Open `findfile.sln` file in Visual Studio and build. For static build see [How to enable static linking using vcpkg](http://nmeo.ru/blog/post/vcpkg-enable-static-linking)
## Download
FindFile, version 0.2, x86: [FindFile-0.2-win32.zip](http://nmeo.ru/storage/app/media/tools/FindFile-0.2-win32.zip)

## Usage
`ff.exe -p C:\Temp -m *.* -i StringInFile.txt -is SearchString -o Result.txt`

`-p` path to files; 

`-m` filename mask _(not impemented)_;   

`-i` path to file with search, or
`-is` search string;

`-o` results file.

