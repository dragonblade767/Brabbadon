#include "FileHandling.hpp"

//FILEHANDLING

File::File()
{

}

void File::fileOpen(std::string filePath, bool isWrite)
{
    if (isFileOpen())
    {
        std::cout << "File already open, please close it before continuing" << std::endl;
        return;
    }
    isWrite_ = isWrite;
    if (isWrite == true) file.open(filePath, std::ios::out);
    else file.open(filePath, std::ios::in);
    if (file.is_open()) {}
    else std::cout << "Error opening file" << std::endl;
}

void File::fileWrite(vector<string> &vec)
{
    if (isWrite_ != true)
    {
        std::cout << "This file was set for Read-Only" << std::endl;
        return;
    }
    if (!isFileOpen())
    {
        std::cout << "No file open" << std::endl;
        return;
    }
    for (auto &v : vec)
    {
        file << v << std::endl;
    }

}

void File::fileWrite(vector<vector<string>> &vec)
{
    if (isWrite_ != true)
    {
        std::cout << "This file was set for Read-Only" << std::endl;
        return;
    }
    if (!isFileOpen())
    {
        std::cout << "No file open" << std::endl;
        return;
    }
    for (auto &v : vec)
    {
        std::string tmp;
        for (auto &b : v)
        {
            tmp += b + ";";
        }
        tmp = tmp.substr(0, tmp.length()-1);
        file << tmp << std::endl;
    }
}

vector<string> File::fileReadLines()
{
    vector<string> vec;
    if (isWrite_ != false)
    {
        std::cout << "This file was set for Write-Only" << std::endl;
        return vec;
    }
    if (!isFileOpen())
    {
        std::cout << "No file open" << std::endl;
        return vec;
    }

    std::string line;
    while(std::getline(file, line)) {
        //process a single line
        vec.emplace_back(line);
    }
    return vec;
}

vector<vector<string>> File::fileReadCSV(int amountOfValues)
{
    vector<vector<string>> vec;
    if (isWrite_ != false)
    {
        std::cout << "This file was set for Write-Only" << std::endl;
        return vec;
    }
    if (!isFileOpen())
    {
        std::cout << "No file open" << std::endl;
        return vec;
    }
    std::string line;
    while(std::getline(file, line)) {
        //process a single line
        vector<string> temp;
        int pos = 0;
        if (amountOfValues < 1)
        {
            std::cout << "invalid amount of values" << std::endl;
            break;
        }
        else if (amountOfValues == 1)
        {
            std::string str1 = line.substr(pos);
            temp.emplace_back(str1);
        }
        else if (amountOfValues == 2)
        {
            pos = line.find(';');
            std::string str1 = line.substr(0, pos);
            std::string str2 = line.substr(pos+1);
            temp.emplace_back(str1);
            temp.emplace_back(str2);
        }
        else if (amountOfValues > 2)
        {
            for(int i = 0; i < amountOfValues-2; i++)
            {
                pos = line.find(';');
                std::string str1 = line.substr(0, pos);
                line = line.substr(pos+1, line.length());
                temp.emplace_back(str1);
            }
            pos = line.find(';');
            std::string str2 = line.substr(0, pos);
            std::string str3 = line.substr(pos+1);
            temp.emplace_back(str2);
            temp.emplace_back(str3);
        }
        else
        {
            std::cout << "Error with amountOfValues" << std::endl;
        }
        vec.emplace_back(temp);
    }
    return vec;
}

void File::fileClose()
{
    if (!isFileOpen())
    {
        std::cout << "No file open" << std::endl;
        return;
    }
    file.close();
}

bool File::isFileOpen()
{
    return file.is_open();
}


//DIRECTORY

void Brabbadon::Core::DirectoryCreate(std::string path)
{
    system(std::string("mkdir " + path).c_str());
}

void Brabbadon::Core::DirectoryOpen(std::string path)
{
    system(std::string("start " + path).c_str());

}

