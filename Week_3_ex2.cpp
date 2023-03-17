#include <iostream>
#include <fstream>

void replaceCharInFile(std::fstream& file, char charToReplace, char charToReplaceWith)
{
    char currChar;
    while (!file.eof())
    {
        file.get(currChar);
        if (currChar != charToReplace)
            continue;

        file.seekp(-1, std::ios::cur);
        file.put(charToReplaceWith);
        file.flush();
    }
}

int main()
{
    std::fstream file("text.txt", std::ios::in | std::ios::out);
    if (!file)
    {
        std::cout << "Error!" << std::endl;
        return -1;
    }

    replaceCharInFile(file, 'a', 'X');

    file.close();
}
