#pragma once
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

namespace Brabbadon::Core
{
    class File
    {
        bool isWrite_;
    public:
        std::fstream file;
        File();
        void fileOpen(std::string filePath, bool isWrite);
        void fileWrite(vector<string> &vec);
        void fileWrite(vector<vector<string>> &vec);
        vector<string> fileReadLines();
        vector<vector<string>> fileReadCSV(int amountOfValues);
        void fileClose();
        bool isFileOpen();
    };

    void DirectoryCreate(std::string path);
    void DirectoryOpen(std::string path);

}
using namespace Brabbadon::Core;
