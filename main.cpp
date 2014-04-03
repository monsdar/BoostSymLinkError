#include <iostream>
#include <string>
#include <boost/filesystem/operations.hpp>

void checkFile(const std::string& path)
{
    std::cout << "Checking " << path << std::endl;
    bool isEmpty = boost::filesystem::is_empty(path);
    std::cout << "Result: " << std::boolalpha << isEmpty << std::endl;
}

int main()
{
    std::string txtPath  = "../data/test.txt";
    std::string symPath  = "../data/SoftLink.txt";
    std::string hardPath = "../data/HardLink.txt";

    checkFile(txtPath);
    checkFile(symPath);
    checkFile(hardPath);

    return 0;
}
