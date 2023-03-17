#include <iostream>
#include <fstream>

const unsigned int BUFF_SIZE = 1024;

int main()
{
    std::ifstream file("Week_3.cpp");
    if (!file)
    {
        std::cout << "Error!" << std::endl;
        return -1;
    }

    char buffer[BUFF_SIZE];
    while (!file.eof())
    {
        file.getline(buffer, BUFF_SIZE);
        std::cout << buffer << std::endl;
    }

    file.close();
}
